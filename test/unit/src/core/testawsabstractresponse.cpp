// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testawsabstractresponse.h"

#include "core/awsabstractrequest.h"
#include "core/awsabstractresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractresponse_p.h"
#endif

#include <QDataStream>
#include <QDebug>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

namespace TestAwsAbstractResponse_Mocks {

class MockRequest : public AwsAbstractRequest {
public:
    MockRequest() : AwsAbstractRequest() { }
    virtual bool isValid() const { return false; }
    void setData(const QByteArray &data) {
        AwsAbstractRequest::setData(data);
    }
    void setOperation(const QNetworkAccessManager::Operation operation) {
        AwsAbstractRequest::setOperation(operation);
    }

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply)
        return NULL;
    }
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const {
        return QNetworkRequest(endpoint);
    }
};

class MockResponse : public AwsAbstractResponse {
public:
    int parseCount, parseFailureCount, parseSuccessCount;
    MockResponse() : AwsAbstractResponse(), parseCount(0), parseFailureCount(0),
        parseSuccessCount(0) { }
    MockResponse(QObject * const parent) : AwsAbstractResponse(parent),
        parseCount(0), parseFailureCount(0), parseSuccessCount(0) { }
    MockResponse(AwsAbstractResponsePrivate * const d, QObject * const parent)
        : AwsAbstractResponse(d, parent), parseCount(0), parseFailureCount(0),
          parseSuccessCount(0) { }
    virtual const AwsAbstractRequest * request() const {
        #ifdef QTAWS_ENABLE_PRIVATE_TESTS
        return d_ptr->request;
        #else
        return NULL;
        #endif
    }
    virtual void parse(QNetworkReply * const reply) {
        parseCount++;
        AwsAbstractResponse::parse(reply);
    }
protected:
    virtual void parseFailure(QIODevice &response) {
        Q_UNUSED(response);
        parseFailureCount++;
    }
    virtual void parseSuccess(QIODevice &response) {
        Q_UNUSED(response);
        parseSuccessCount++;
    }
};

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(QObject * const parent = 0) : QNetworkReply(parent) { }
    MockNetworkReply(const NetworkError error, const QString &errorString,
                     QObject * const parent = 0)
        : QNetworkReply(parent) { setError(error, errorString); }
    void setAttribute(const QNetworkRequest::Attribute code, const QVariant &value)
    {
        QNetworkReply::setAttribute(code, value);
    }
    virtual void abort() { emit finished(); }
protected:
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
};

} using namespace TestAwsAbstractResponse_Mocks;

void TestAwsAbstractResponse::construct()
{
    {   // Verify the default parent argument is NULL.
        MockResponse response;
        QCOMPARE(response.parent(), static_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockResponse response(this);
        QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractResponse::construct_d_ptr()
{
    MockResponse temporaryResponse;
    AwsAbstractResponsePrivate * const responsePrivate =
        new AwsAbstractResponsePrivate(&temporaryResponse);
    MockResponse response(responsePrivate, this);
    QCOMPARE(response.d_func(), responsePrivate);
    QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractResponse::errorString_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<QString>("networkErrorString");
    QTest::addColumn<QString>("xmlErrorString");
    QTest::addColumn<QString>("expectedErrorString");

    QTest::newRow("noerror")
        << QNetworkReply::NoError << QString() << QString() << QString();

    QTest::newRow("network")
        << QNetworkReply::ConnectionRefusedError
        << QString::fromLatin1("mock connection refused")
        << QString()
        << QString::fromLatin1("mock connection refused");

    QTest::newRow("xml error")
        << QNetworkReply::NoError << QString()
        << QString::fromLatin1("mock error")
        << QString::fromLatin1("mock error");

    // Network errors take precedence over XML errors.
    QTest::newRow("network+xml")
        << QNetworkReply::TimeoutError
        << QString::fromLatin1("mock timeout error")
        << QString::fromLatin1("mock XML error")
        << QString::fromLatin1("mock timeout error");
}

void TestAwsAbstractResponse::errorString()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(QString, networkErrorString);
    QFETCH(QString, xmlErrorString);
    QFETCH(QString, expectedErrorString);

    MockResponse response;

    MockNetworkReply reply(networkError, networkErrorString);
    response.setReply(&reply);

    if (!xmlErrorString.isNull()) {
        QXmlStreamReader xml;
        xml.raiseError(xmlErrorString);
        response.setXmlError(xml);
    }

    QCOMPARE(response.errorString(), expectedErrorString);
}

void TestAwsAbstractResponse::hasError_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<QString>("networkErrorString");
    QTest::addColumn<QString>("xmlErrorString");
    QTest::addColumn<bool>("hasError");

    QTest::newRow("noerror")
        << QNetworkReply::NoError << QString() << QString() << false;

    QTest::newRow("network")
        << QNetworkReply::ConnectionRefusedError
        << QString::fromLatin1("mock connection refused")
        << QString()
        << true;

    QTest::newRow("xml error")
        << QNetworkReply::NoError << QString()
        << QString::fromLatin1("mock error")
        << true;

    QTest::newRow("network+xml")
        << QNetworkReply::TimeoutError
        << QString::fromLatin1("mock timeout error")
        << QString::fromLatin1("mock XML error")
        << true;
}

void TestAwsAbstractResponse::hasError()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(QString, networkErrorString);
    QFETCH(QString, xmlErrorString);
    QFETCH(bool, hasError);

    MockResponse response;

    MockNetworkReply reply(networkError, networkErrorString);
    response.setReply(&reply);

    if (!xmlErrorString.isNull()) {
        QXmlStreamReader xml;
        xml.raiseError(xmlErrorString);
        response.setXmlError(xml);
    }

    QCOMPARE(response.hasError(), hasError);
}

void TestAwsAbstractResponse::isValid_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<QString>("networkErrorString");
    QTest::addColumn<QString>("xmlErrorString");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("noerror")
        << QNetworkReply::NoError << QString() << QString() << true;

    QTest::newRow("network")
        << QNetworkReply::ConnectionRefusedError
        << QString::fromLatin1("mock connection refused")
        << QString()
        << false;

    QTest::newRow("xml error")
        << QNetworkReply::NoError << QString()
        << QString::fromLatin1("mock error")
        << false;

    QTest::newRow("network+xml")
        << QNetworkReply::TimeoutError
        << QString::fromLatin1("mock timeout error")
        << QString::fromLatin1("mock XML error")
        << false;
}

void TestAwsAbstractResponse::isValid()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(QString, networkErrorString);
    QFETCH(QString, xmlErrorString);
    QFETCH(bool, isValid);

    MockResponse response;

    MockNetworkReply reply(networkError, networkErrorString);
    response.setReply(&reply);

    if (!xmlErrorString.isNull()) {
        QXmlStreamReader xml;
        xml.raiseError(xmlErrorString);
        response.setXmlError(xml);
    }

    QCOMPARE(response.isValid(), isValid);
}

void TestAwsAbstractResponse::networkError_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");

    #define NEW_ROW(error) QTest::newRow(#error) << QNetworkReply::error;
    NEW_ROW(NoError);
    NEW_ROW(ConnectionRefusedError);
    NEW_ROW(RemoteHostClosedError);
    NEW_ROW(HostNotFoundError);
    NEW_ROW(TimeoutError);
    NEW_ROW(OperationCanceledError);
    NEW_ROW(SslHandshakeFailedError);
    NEW_ROW(TemporaryNetworkFailureError);
    NEW_ROW(NetworkSessionFailedError);
    NEW_ROW(BackgroundRequestNotAllowedError);
    NEW_ROW(UnknownNetworkError);
    NEW_ROW(ProxyConnectionRefusedError);
    NEW_ROW(ProxyConnectionClosedError);
    NEW_ROW(ProxyNotFoundError);
    NEW_ROW(ProxyTimeoutError);
    NEW_ROW(ProxyAuthenticationRequiredError);
    NEW_ROW(UnknownProxyError);
    NEW_ROW(ContentAccessDenied);
    NEW_ROW(ContentOperationNotPermittedError);
    NEW_ROW(ContentNotFoundError);
    NEW_ROW(AuthenticationRequiredError);
    NEW_ROW(ContentReSendError);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROW(ContentConflictError);
    NEW_ROW(ContentGoneError);
#endif
    NEW_ROW(UnknownContentError);
    NEW_ROW(ProtocolUnknownError);
    NEW_ROW(ProtocolInvalidOperationError);
    NEW_ROW(ProtocolFailure);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROW(InternalServerError);
    NEW_ROW(OperationNotImplementedError);
    NEW_ROW(ServiceUnavailableError);
    NEW_ROW(UnknownServerError);
#endif
    #undef NEW_ROW
}

void TestAwsAbstractResponse::networkError()
{
    QFETCH(QNetworkReply::NetworkError, networkError);

    // There should be no errors by default.
    MockResponse response;
    QCOMPARE(response.networkError(), QNetworkReply::NoError);

    MockNetworkReply reply(networkError, QString());
    response.setReply(&reply);
    QCOMPARE(response.networkError(), networkError);
}

void TestAwsAbstractResponse::xmlParseError_data()
{
    QTest::addColumn<QString>("xmlErrorString");
    QTest::newRow("noerror") << QString();
    QTest::newRow("error")   << QString::fromLatin1("mock XML error");
}

void TestAwsAbstractResponse::xmlParseError()
{
    QFETCH(QString, xmlErrorString);
    MockResponse response;
    QCOMPARE(response.xmlParseError(), QXmlStreamReader::NoError);

    QXmlStreamReader xml;
    if (!xmlErrorString.isNull()) {
        xml.raiseError(xmlErrorString);
    }
    response.setXmlError(xml);

    QCOMPARE(response.xmlParseError(),
        xmlErrorString.isNull() ? QXmlStreamReader::NoError : QXmlStreamReader::CustomError);
}

void TestAwsAbstractResponse::xmlParseErrorString_data()
{
    xmlParseError_data();
}

void TestAwsAbstractResponse::xmlParseErrorString()
{
    QFETCH(QString, xmlErrorString);
    MockResponse response;
    QCOMPARE(response.xmlParseErrorString(), QString());

    QXmlStreamReader xml;
    if (!xmlErrorString.isNull()) {
        xml.raiseError(xmlErrorString);
    }
    response.setXmlError(xml);

    QCOMPARE(response.xmlParseErrorString(), xmlErrorString);
}

void TestAwsAbstractResponse::request_data()
{
    QTest::addColumn<QByteArray>("data");
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");

    #define NEW_ROW(data, op) QTest::newRow(#op) << data << QNetworkAccessManager::op##Operation
    NEW_ROW(QByteArray(), Head);
    NEW_ROW(QByteArray(), Get);
    NEW_ROW(QByteArray("foo"), Put);
    NEW_ROW(QByteArray("bar"), Post);
    NEW_ROW(QByteArray(), Delete);
    NEW_ROW(QByteArray(""), Custom);
    NEW_ROW(QByteArray(), Unknown);
    #undef NEW_ROW
}

void TestAwsAbstractResponse::request()
{
    QFETCH(QByteArray, data);
    QFETCH(QNetworkAccessManager::Operation, operation);

    MockRequest request;
    request.setData(data);
    request.setOperation(operation);
    QCOMPARE(request.data(), data);
    QCOMPARE(request.operation(), operation);

    MockResponse response;
    QCOMPARE(response.request(), static_cast<const AwsAbstractRequest *>(NULL));
    response.setRequest(new MockRequest(request)); // response takes ownership.

    // Verify that the response took a *copy* of request, not its address.
    QVERIFY(response.request() != &request);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QVERIFY(response.request());
    QCOMPARE(response.request()->data(), data);
    QCOMPARE(response.request()->operation(), operation);
    QVERIFY(*response.request() == request);
#else
    // This is simply a limitation in our MockResponse class, which can't return
    // a real request object (at least not in a meaningful testing way) since
    // that requires knowledge of the AwsAbstractRequestPrivate class' memeber,
    // which, of course, is not available if private testing is not enabled.
    QCOMPARE(response.request(), static_cast<const AwsAbstractRequest *>(NULL));
#endif
}

QVariant TestAwsAbstractResponse::toVariant(const QByteArray &bytes)
{
    QVariant variant;
    QDataStream stream(bytes);
    stream >> variant;
    return variant;
}

void TestAwsAbstractResponse::toVariant_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("prefix");
    QTest::addColumn<int>("maxDepth");
    QTest::addColumn<QVariant>("expected");

    QTest::newRow("null")
        << QByteArray() << QString() << 1024 << QVariant(QVariantMap());

    QTest::newRow("simple")
        << QByteArray("<foo bar=\"baz\">qux</foo>")
        << QString::fromLatin1("|") << 1024 << toVariant(QByteArray::fromBase64(
    "AAAACAAAAAAEAAAAJgB8AFMAdABhAG4AZABhAGwAbwBuAGUARABvAGMAdQBtAGUAbgB0AA"
    "AAAQAAAAAAIAB8AEQAbwBjAHUAbQBlAG4AdABWAGUAcgBzAGkAbwBuAAAACgD/////AAAA"
    "IgB8AEQAbwBjAHUAbQBlAG4AdABFAG4AYwBvAGQAaQBuAGcAAAAKAP////8AAAAGAGYAbw"
    "BvAAAACAAAAAACAAAACAB8AGIAYQByAAAACAAAAAACAAAACgBWAGEAbAB1AGUAAAAKAAAA"
    "AAYAYgBhAHoAAAAaAFEAdQBhAGwAaQBmAGkAZQBkAE4AYQBtAGUAAAAKAAAAAAYAYgBhAH"
    "IAAAAWAHwAQwBoAGEAcgBhAGMAdABlAHIAcwAAAAoAAAAABgBxAHUAeA=="));

    QTest::newRow("complex")
        << QByteArray("<!DOCTYPE doc [<!ATTLIST e9 attr CDATA \"default\">]>"
                      "<!-- comment -->"
                      "<xml foo=\" bar \">baz<qux>corge</qux>grault</xml>")
        << QString::fromLatin1(".") << 1024 << toVariant(QByteArray::fromBase64(
    "AAAACAAAAAAGAAAABgB4AG0AbAAAAAgAAAAABAAAAAYAcQB1AHgAAAAIAAAAAAEAAAAWAC"
    "4AQwBoAGEAcgBhAGMAdABlAHIAcwAAAAoAAAAACgBjAG8AcgBnAGUAAAAIAC4AZgBvAG8A"
    "AAAIAAAAAAIAAAAKAFYAYQBsAHUAZQAAAAoAAAAACgAgAGIAYQByACAAAAAaAFEAdQBhAG"
    "wAaQBmAGkAZQBkAE4AYQBtAGUAAAAKAAAAAAYAZgBvAG8AAAAWAC4AQwBoAGEAcgBhAGMA"
    "dABlAHIAcwAAAAoAAAAABgBiAGEAegAAABYALgBDAGgAYQByAGEAYwB0AGUAcgBzAAAACg"
    "AAAAAMAGcAcgBhAHUAbAB0AAAAJgAuAFMAdABhAG4AZABhAGwAbwBuAGUARABvAGMAdQBt"
    "AGUAbgB0AAAAAQAAAAAAIAAuAEQAbwBjAHUAbQBlAG4AdABWAGUAcgBzAGkAbwBuAAAACg"
    "D/////AAAAIgAuAEQAbwBjAHUAbQBlAG4AdABFAG4AYwBvAGQAaQBuAGcAAAAKAP////8A"
    "AAAIAC4ARABUAEQAAAAKAAAAAGYAPAAhAEQATwBDAFQAWQBQAEUAIABkAG8AYwAgAFsAPA"
    "AhAEEAVABUAEwASQBTAFQAIABlADkAIABhAHQAdAByACAAQwBEAEEAVABBACAAIgBkAGUA"
    "ZgBhAHUAbAB0ACIAPgBdAD4AAAAQAC4AQwBvAG0AbQBlAG4AdAAAAAoAAAAAEgAgAGMAbw"
    "BtAG0AZQBuAHQAIA=="));

    QTest::newRow("namespace")
        << QByteArray("<xml xmlns:ns=\"http://example.com/\">"
                      "<ns:foo ns:bar=\"baz\"/>")
        << QString::fromLatin1(".") << 10 << toVariant(QByteArray::fromBase64(
    "AAAACAAAAAAEAAAABgB4AG0AbAAAAAgAAAAAAQAAAAYAZgBvAG8AAAAIAAAAAAIAAAAIAC"
    "4AYgBhAHIAAAAIAAAAAAQAAAAKAFYAYQBsAHUAZQAAAAoAAAAABgBiAGEAegAAABoAUQB1"
    "AGEAbABpAGYAaQBlAGQATgBhAG0AZQAAAAoAAAAADABuAHMAOgBiAGEAcgAAAAwAUAByAG"
    "UAZgBpAHgAAAAKAAAAAAQAbgBzAAAAGABOAGEAbQBlAHMAcABhAGMAZQBVAHIAaQAAAAoA"
    "AAAAJgBoAHQAdABwADoALwAvAGUAeABhAG0AcABsAGUALgBjAG8AbQAvAAAAGgAuAE4AYQ"
    "BtAGUAcwBwAGEAYwBlAFUAcgBpAAAACgAAAAAmAGgAdAB0AHAAOgAvAC8AZQB4AGEAbQBw"
    "AGwAZQAuAGMAbwBtAC8AAAAmAC4AUwB0AGEAbgBkAGEAbABvAG4AZQBEAG8AYwB1AG0AZQ"
    "BuAHQAAAABAAAAAAAgAC4ARABvAGMAdQBtAGUAbgB0AFYAZQByAHMAaQBvAG4AAAAKAP//"
    "//8AAAAiAC4ARABvAGMAdQBtAGUAbgB0AEUAbgBjAG8AZABpAG4AZwAAAAoA/////w=="));

    QTest::newRow("processing instruction")
        << QByteArray("<?foo?>")
        << QString::fromLatin1(".") << 10 << toVariant(QByteArray::fromBase64(
    "AAAACAAAAAAEAAAACAAuAGYAbwBvAAAACgD/////AAAAJgAuAFMAdABhAG4AZABhAGwAbw"
    "BuAGUARABvAGMAdQBtAGUAbgB0AAAAAQAAAAAAIAAuAEQAbwBjAHUAbQBlAG4AdABWAGUA"
    "cgBzAGkAbwBuAAAACgD/////AAAAIgAuAEQAbwBjAHUAbQBlAG4AdABFAG4AYwBvAGQAaQ"
    "BuAGcAAAAKAP////8="));

    QTest::newRow("negative-depth")
        << QByteArray("<foo bar=\"baz\">qux</foo>")
        << QString::fromLatin1(".") << -1 << QVariant(QVariantMap());

    QTest::newRow("top-level error")
        << QByteArray(">>> oops &&&")
        << QString::fromLatin1(".") << 10 << toVariant(QByteArray::fromBase64(
    "AAAACAAAAAADAAAAJgAuAFMAdABhAG4AZABhAGwAbwBuAGUARABvAGMAdQBtAGUAbgB0AAA"
    "AAQAAAAAAIAAuAEQAbwBjAHUAbQBlAG4AdABWAGUAcgBzAGkAbwBuAAAACgD/////AAAAIg"
    "AuAEQAbwBjAHUAbQBlAG4AdABFAG4AYwBvAGQAaQBuAGcAAAAKAP////8="));

    QTest::newRow("lower error")
        << QByteArray("<foo>bar<baz>>>></foo>")
        << QString::fromLatin1(".") << 10 << toVariant(QByteArray::fromBase64(
    "AAAACAAAAAAEAAAABgBmAG8AbwAAAAgAAAAAAgAAAAYAYgBhAHoAAAAIAAAAAAEAAAAWAC4"
    "AQwBoAGEAcgBhAGMAdABlAHIAcwAAAAoAAAAABgA+AD4APgAAABYALgBDAGgAYQByAGEAYw"
    "B0AGUAcgBzAAAACgAAAAAGAGIAYQByAAAAJgAuAFMAdABhAG4AZABhAGwAbwBuAGUARABvA"
    "GMAdQBtAGUAbgB0AAAAAQAAAAAAIAAuAEQAbwBjAHUAbQBlAG4AdABWAGUAcgBzAGkAbwBu"
    "AAAACgD/////AAAAIgAuAEQAbwBjAHUAbQBlAG4AdABFAG4AYwBvAGQAaQBuAGcAAAAKAP/"
    "///8="));
}

void TestAwsAbstractResponse::toVariant()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, prefix);
    QFETCH(int, maxDepth);
    QFETCH(QVariant, expected);

    QXmlStreamReader reader(xml);
    const QVariant variant(AwsAbstractResponse::toVariant(reader, prefix, maxDepth));

    /*{ // Just for development (ie when adding new test data).
        QByteArray bytes;
        QDataStream stream(&bytes, QIODevice::WriteOnly);
        stream << variant;
        qDebug() << "Base64" << bytes.toBase64();
    }*/

    if (variant != expected) {
        qDebug() << "Actual   (variant) :" << variant;
        qDebug() << "Expected (expected):" << expected;
    }

    QCOMPARE(variant, expected);

    // If the reader has errors (some test data rows will, some won't), then any
    // further toVariant calls should return in an empty map.
    if (reader.hasError()) {
        QCOMPARE(AwsAbstractResponse::toVariant(reader), QVariantMap());
    }
}

void TestAwsAbstractResponse::isSuccess_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<int>("httpStatus");
    QTest::addColumn<bool>("isSuccess");

    QTest::newRow("NoError") << QNetworkReply::NoError <<   0 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError <<  99 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 100 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 101 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 199 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 200 << true; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 201 << true; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 299 << true; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 300 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 301 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 399 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 400 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 401 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 499 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 500 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 501 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 599 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 600 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 999 << false;

    #define NEW_ROWS(error) \
        QTest::newRow(#error) << QNetworkReply::error <<   0 << false; \
        QTest::newRow(#error) << QNetworkReply::error <<  99 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 100 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 101 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 199 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 200 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 201 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 299 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 300 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 301 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 399 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 400 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 401 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 499 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 500 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 501 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 599 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 600 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 999 << false;
  //NEW_ROWS(NoError);
    NEW_ROWS(ConnectionRefusedError);
    NEW_ROWS(RemoteHostClosedError);
    NEW_ROWS(HostNotFoundError);
    NEW_ROWS(TimeoutError);
    NEW_ROWS(OperationCanceledError);
    NEW_ROWS(SslHandshakeFailedError);
    NEW_ROWS(TemporaryNetworkFailureError);
    NEW_ROWS(NetworkSessionFailedError);
    NEW_ROWS(BackgroundRequestNotAllowedError);
    NEW_ROWS(UnknownNetworkError);
    NEW_ROWS(ProxyConnectionRefusedError);
    NEW_ROWS(ProxyConnectionClosedError);
    NEW_ROWS(ProxyNotFoundError);
    NEW_ROWS(ProxyTimeoutError);
    NEW_ROWS(ProxyAuthenticationRequiredError);
    NEW_ROWS(UnknownProxyError);
    NEW_ROWS(ContentAccessDenied);
    NEW_ROWS(ContentOperationNotPermittedError);
    NEW_ROWS(ContentNotFoundError);
    NEW_ROWS(AuthenticationRequiredError);
    NEW_ROWS(ContentReSendError);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROWS(ContentConflictError);
    NEW_ROWS(ContentGoneError);
#endif
    NEW_ROWS(UnknownContentError);
    NEW_ROWS(ProtocolUnknownError);
    NEW_ROWS(ProtocolInvalidOperationError);
    NEW_ROWS(ProtocolFailure);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROWS(InternalServerError);
    NEW_ROWS(OperationNotImplementedError);
    NEW_ROWS(ServiceUnavailableError);
    NEW_ROWS(UnknownServerError);
#endif
    #undef NEW_ROWS
}

void TestAwsAbstractResponse::isSuccess()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(int, httpStatus);
    QFETCH(bool, isSuccess);

    MockNetworkReply reply(networkError, QString());
    reply.setAttribute(QNetworkRequest::HttpStatusCodeAttribute, httpStatus);

    MockResponse response;
    QCOMPARE(response.isSuccess(&reply), isSuccess);
}

void TestAwsAbstractResponse::parse_data()
{
    isSuccess_data();
}

void TestAwsAbstractResponse::parse()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(int, httpStatus);
    QFETCH(bool, isSuccess);

    MockNetworkReply reply(networkError, QString());
    reply.setAttribute(QNetworkRequest::HttpStatusCodeAttribute, httpStatus);

    MockResponse response;
    QCOMPARE(response.parseFailureCount, 0);
    QCOMPARE(response.parseSuccessCount, 0);
    response.parse(&reply);

    // On network errors, neither sub-parse function is called.
    if (networkError != QNetworkReply::NoError) {
        QCOMPARE(response.parseFailureCount, 0);
        QCOMPARE(response.parseSuccessCount, 0);
    } else {
        QCOMPARE(response.parseFailureCount, isSuccess ? 0 : 1);
        QCOMPARE(response.parseSuccessCount, isSuccess ? 1 : 0);
    }
}

void TestAwsAbstractResponse::replyFinished()
{
    // Here we're simply testing that setReply correctly setup a connection from
    // the suplied reply to the response's replyFinished slot, which in turn
    // called parse.

    MockResponse response;
    QCOMPARE(response.parseCount, 0);

    MockNetworkReply reply;
    response.setReply(&reply);
    QCOMPARE(response.parseCount, 0);

    reply.abort();
    QCOMPARE(response.parseCount, 1);
}
