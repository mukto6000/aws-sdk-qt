/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testsqsresponse.h"

#include "sqs/sqsrequest.h"
#include "sqs/sqsresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsresponse_p.h"
#endif

#include <QBuffer>
#include <QDebug>

Q_DECLARE_METATYPE(QXmlStreamReader::Error)
Q_DECLARE_METATYPE(SqsErrorList)

namespace TestSqsResponse_Mocks {

class MockSqsResponse : public SqsResponse {
public:
    MockSqsResponse() : SqsResponse() { }
    MockSqsResponse(QObject * const parent) : SqsResponse(parent) { }
    MockSqsResponse(SqsResponsePrivate * const d, QObject * const parent)
        : SqsResponse(d, parent) { }
    virtual const SqsRequest * request() const {
        return NULL;
    }
protected:
    virtual void parseSuccess(QIODevice &response) {
        Q_UNUSED(response);
    }
};

} using namespace TestSqsResponse_Mocks;

void TestSqsResponse::construct()
{
    {   // Verify the default parent argument is NULL.
        MockSqsResponse response;
        QCOMPARE(response.parent(), static_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockSqsResponse response(this);
        QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsResponse::construct_d_ptr()
{
    MockSqsResponse temporaryResponse;
    SqsResponsePrivate * const responsePrivate =
        new SqsResponsePrivate(&temporaryResponse);
    MockSqsResponse response(responsePrivate, this);
    QCOMPARE(response.d_func(), responsePrivate);
    QCOMPARE(response.parent(), this);
}
#endif

void TestSqsResponse::errorString_data()
{
    QTest::addColumn<SqsErrorList>("errors");
    QTest::addColumn<QString>("errorString");

    QTest::newRow("no errors") << SqsErrorList() << QString();

    SqsErrorList errors;
    {
        QXmlStreamReader reader("<Error><Message>error one</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("one error") << errors << QString::fromLatin1("error one");

    {
        QXmlStreamReader reader("<Error><Message>error two</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("two errors") << errors << QString::fromLatin1("error one");

    {
        QXmlStreamReader reader("<Error><Message>error three</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("three errors") << errors << QString::fromLatin1("error one");
}

void TestSqsResponse::errorString()
{
    QFETCH(SqsErrorList, errors);
    QFETCH(QString, errorString);

    MockSqsResponse response;
    QCOMPARE(response.errorString(), QString());

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    response.d_func()->errors = errors;
    QCOMPARE(response.errorString(), errorString);
    #endif
}

void TestSqsResponse::hasError_data()
{
    QTest::addColumn<SqsErrorList>("errors");
    QTest::addColumn<bool>("hasError");

    QTest::newRow("no errors") << SqsErrorList() << false;

    SqsErrorList errors;
    {
        QXmlStreamReader reader("<Error><Message>error one</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("one error") << errors << true;

    {
        QXmlStreamReader reader("<Error><Message>error two</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("two errors") << errors << true;

    {
        QXmlStreamReader reader("<Error><Message>error three</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("three errors") << errors << true;
}

void TestSqsResponse::hasError()
{
    QFETCH(SqsErrorList, errors);
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QFETCH(bool, hasError);
    #endif

    MockSqsResponse response;
    QCOMPARE(response.hasError(), false);

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    response.d_func()->errors = errors;
    QCOMPARE(response.hasError(), hasError);
    #endif
}

void TestSqsResponse::isValid_data()
{
    QTest::addColumn<SqsErrorList>("errors");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("no errors") << SqsErrorList() << true;

    SqsErrorList errors;
    {
        QXmlStreamReader reader("<Error><Message>error one</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("one error") << errors << false;

    {
        QXmlStreamReader reader("<Error><Message>error two</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("two errors") << errors << false;

    {
        QXmlStreamReader reader("<Error><Message>error three</Message></Error>");
        errors.append(SqsError(reader));
    }
    QTest::newRow("three errors") << errors << false;
}

void TestSqsResponse::isValid()
{
    QFETCH(SqsErrorList, errors);
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QFETCH(bool, isValid);
    #endif

    MockSqsResponse response;
    QCOMPARE(response.isValid(), true);

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    response.d_func()->errors = errors;
    QCOMPARE(response.isValid(), isValid);
    #endif
}

void TestSqsResponse::requestId_data()
{
    QTest::addColumn<QString>("requestId");
    QTest::newRow("null")  << QString();
    QTest::newRow("empty") << QString::fromLatin1("");
    QTest::newRow("foo")   << QString::fromLatin1("foo");
    QTest::newRow("bar")   << QString::fromLatin1("bar");
    QTest::newRow("baz")   << QString::fromLatin1("baz");
}

// Note, the real *setting* of the request ID is verified in the parse* tests below.
void TestSqsResponse::requestId()
{
    QFETCH(QString, requestId);

    MockSqsResponse response;
    QCOMPARE(response.requestId(), QString());

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    response.d_func()->requestId = requestId;
    QCOMPARE(response.requestId(), requestId);
    #endif
}

void TestSqsResponse::serviceErrors_data()
{
    hasError_data();
}

void TestSqsResponse::serviceErrors()
{
    QFETCH(SqsErrorList, errors);

    MockSqsResponse response;
    QCOMPARE(response.serviceErrors(), SqsErrorList());

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    response.d_func()->errors = errors;
    QCOMPARE(response.serviceErrors(), errors);
    #endif
}

void TestSqsResponse::parseFailure_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QXmlStreamReader::Error>("parseError");
    QTest::addColumn<SqsErrorList>("sqsErrors");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("null")
        << QByteArray()
        << QXmlStreamReader::PrematureEndOfDocumentError
        << SqsErrorList()
        << QString();

    // Genuine error returned by SQS.
    SqsErrorList sqsErrors;
    {
        QXmlStreamReader reader(
            "<Error>"
                "<Type>Sender</Type>"
                "<Code>AccessDenied</Code>"
                "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                "<Detail/>"
            "</Error>");
        sqsErrors.append(SqsError(reader));
    }
    QTest::newRow("AccessDenied")
        << QByteArray(
            "<ErrorResponse>"
                "<Error>"
                    "<Type>Sender</Type>"
                    "<Code>AccessDenied</Code>"
                    "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                    "<Detail/>"
                "</Error>"
                "<RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>"
            "</ErrorResponse>")
        << QXmlStreamReader::NoError
        << sqsErrors
        << QString::fromLatin1("9a285199-c8d6-47c2-bdb2-314cb47d599d");

    // Multiple errors.
    {
        QXmlStreamReader reader(
            "<Error>"
                "<Type>Receiver</Type>"
                "<Code>FooBar</Code>"
                "<Message>Not a real error message.</Message>"
                "<Detail/>"
            "</Error>");
        sqsErrors.append(SqsError(reader));
    }
    Q_ASSERT(sqsErrors.size() == 2);
    QTest::newRow("MultipleErrors")
        << QByteArray(
            "<ErrorResponse>"
                "<Error>"
                    "<Type>Sender</Type>"
                    "<Code>AccessDenied</Code>"
                    "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                    "<Detail/>"
                "</Error>"
                "<Error>"
                    "<Type>Receiver</Type>"
                    "<Code>FooBar</Code>"
                    "<Message>Not a real error message.</Message>"
                    "<Detail/>"
                "</Error>"
                "<RequestId>bc80f361-f5e7-48e8-badb-4c2aeab67ea6</RequestId>"
            "</ErrorResponse>")
        << QXmlStreamReader::NoError
        << sqsErrors
        << QString::fromLatin1("bc80f361-f5e7-48e8-badb-4c2aeab67ea6");

    // Unrecognised response element.
    QTest::newRow("NonError")
        << QByteArray("<NonErrorResponse/>")
        << QXmlStreamReader::NoError
        << SqsErrorList()
        << QString();
}

void TestSqsResponse::parseFailure()
{
    QFETCH(QByteArray, xml);
    QFETCH(QXmlStreamReader::Error, parseError);
    QFETCH(SqsErrorList, sqsErrors);
    QFETCH(QString, requestId);

    MockSqsResponse response;
    QCOMPARE(response.xmlParseError(), QXmlStreamReader::NoError);
    QCOMPARE(response.serviceErrors(), SqsErrorList());
    QCOMPARE(response.requestId(), QString());

    QBuffer buffer(&xml);
    QVERIFY(buffer.open(QBuffer::ReadOnly));
    response.parseFailure(buffer);
    QCOMPARE((int)response.xmlParseError(), (int)parseError);
    QCOMPARE(response.xmlParseError(), parseError);
    QCOMPARE(response.serviceErrors(), sqsErrors);
    QCOMPARE(response.requestId(), requestId);
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsResponse::parseErrorResponse_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<SqsErrorList>("sqsErrors");
    QTest::addColumn<QString>("requestId");

    // Genuine error returned by SQS.
    SqsErrorList sqsErrors;
    {
        QXmlStreamReader reader(
            "<Error>"
                "<Type>Sender</Type>"
                "<Code>AccessDenied</Code>"
                "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                "<Detail/>"
            "</Error>");
        sqsErrors.append(SqsError(reader));
    }
    QTest::newRow("AccessDenied")
        << QByteArray(
            "<ErrorResponse>"
                "<Error>"
                    "<Type>Sender</Type>"
                    "<Code>AccessDenied</Code>"
                    "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                    "<Detail/>"
                "</Error>"
                "<RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>"
            "</ErrorResponse>")
        << sqsErrors
        << QString::fromLatin1("9a285199-c8d6-47c2-bdb2-314cb47d599d");

    // Multiple errors.
    {
        QXmlStreamReader reader(
            "<Error>"
                "<Type>Receiver</Type>"
                "<Code>FooBar</Code>"
                "<Message>Not a real error message.</Message>"
                "<Detail/>"
            "</Error>");
        sqsErrors.append(SqsError(reader));
    }
    Q_ASSERT(sqsErrors.size() == 2);
    QTest::newRow("MultipleErrors")
        << QByteArray(
            "<ErrorResponse>"
                "<Error>"
                    "<Type>Sender</Type>"
                    "<Code>AccessDenied</Code>"
                    "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                    "<Detail/>"
                "</Error>"
                "<Error>"
                    "<Type>Receiver</Type>"
                    "<Code>FooBar</Code>"
                    "<Message>Not a real error message.</Message>"
                    "<Detail/>"
                "</Error>"
                "<RequestId>bc80f361-f5e7-48e8-badb-4c2aeab67ea6</RequestId>"
            "</ErrorResponse>")
        << sqsErrors
        << QString::fromLatin1("bc80f361-f5e7-48e8-badb-4c2aeab67ea6");

    // Unrecognised response element.
    QTest::newRow("NonError")
        << QByteArray(
           "<ErrorResponse>"
               "<Error>"
                   "<Type>Sender</Type>"
                   "<Code>AccessDenied</Code>"
                   "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                   "<Detail/>"
               "</Error>"
               "<Unrecognized>This should be ignored, and not break anything.</Unrecognized>"
               "<Error>"
                   "<Type>Receiver</Type>"
                   "<Code>FooBar</Code>"
                   "<Message>Not a real error message.</Message>"
                   "<Detail/>"
               "</Error>"
               "<RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>"
           "</ErrorResponse>")
       << sqsErrors
       << QString::fromLatin1("9a285199-c8d6-47c2-bdb2-314cb47d599d");
}

void TestSqsResponse::parseErrorResponse()
{
    QFETCH(QByteArray, xml);
    QFETCH(SqsErrorList, sqsErrors);
    QFETCH(QString, requestId);

    MockSqsResponse response;
    QCOMPARE(response.serviceErrors(), SqsErrorList());
    QCOMPARE(response.requestId(), QString());

    QXmlStreamReader reader(xml);
    QVERIFY(reader.readNextStartElement());
    response.d_func()->parseErrorResponse(reader);
    QCOMPARE(response.serviceErrors(), sqsErrors);
    QCOMPARE(response.requestId(), requestId);
}

void TestSqsResponse::parseResponseMetadata_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<ResponseMetadata>"
                "<RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>"
            "</ResponseMetadata>")
        << QString::fromLatin1("9a285199-c8d6-47c2-bdb2-314cb47d599d");

    QTest::newRow("superflous")
        << QByteArray(
            "<ResponseMetadata>"
                "<foo>this should be ignored</foo>"
                "<RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>"
            "</ResponseMetadata>")
        << QString::fromLatin1("9a285199-c8d6-47c2-bdb2-314cb47d599d");
}

void TestSqsResponse::parseResponseMetadata()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, requestId);

    MockSqsResponse response;
    QCOMPARE(response.requestId(), QString());

    QXmlStreamReader reader(xml);
    QVERIFY(reader.readNextStartElement());
    response.d_func()->parseResponseMetadata(reader);
    QCOMPARE(response.requestId(), requestId);
}
#endif
