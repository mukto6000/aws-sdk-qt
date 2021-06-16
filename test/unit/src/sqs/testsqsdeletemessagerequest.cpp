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

#include "testsqsdeletemessagerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsdeletemessagerequest.h"
#include "sqs/sqsdeletemessageresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsdeletemessagerequest_p.h"
#endif

#include <QDebug>

namespace TestSqsDeleteMessageRequest_Mocks {

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(QObject * const parent = 0)
        : QNetworkReply(parent) { }
protected:
    virtual void abort() { }
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
};

} using namespace TestSqsDeleteMessageRequest_Mocks;

void TestSqsDeleteMessageRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("receiptHandle");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QString()
        << QString()
        << false;

    QTest::newRow("example")
        << QString::fromLatin1("http://example.com/queue")
        << QString::fromLatin1("abc123")
        << true;
}

void TestSqsDeleteMessageRequest::construct_params()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);

    const SqsDeleteMessageRequest request(queueUrl, receiptHandle);

    QCOMPARE(request.action(), SqsRequest::DeleteMessageAction);
    QCOMPARE(request.queueUrl(), queueUrl);
    QCOMPARE(request.receiptHandle(), receiptHandle);
}

void TestSqsDeleteMessageRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsDeleteMessageRequest::construct_copy()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);

    const SqsDeleteMessageRequest request1(queueUrl, receiptHandle);
    QCOMPARE(request1.queueUrl(), queueUrl);
    QCOMPARE(request1.receiptHandle(), receiptHandle);

    const SqsDeleteMessageRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);
    QCOMPARE(request2.receiptHandle(), receiptHandle);

    QCOMPARE(request1, request2);
}

void TestSqsDeleteMessageRequest::construct_default()
{
    SqsDeleteMessageRequest request;
    QCOMPARE(request.action(), SqsRequest::DeleteMessageAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
    QCOMPARE(request.receiptHandle(), QString());
}

void TestSqsDeleteMessageRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsDeleteMessageRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);
    QFETCH(bool, isValid);

    const SqsDeleteMessageRequest request(queueUrl, receiptHandle);

    QCOMPARE(request.isValid(), isValid);
}

void TestSqsDeleteMessageRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsDeleteMessageRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsDeleteMessageRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsDeleteMessageRequest::receiptHandle_data()
{
    isValid_data();
}

void TestSqsDeleteMessageRequest::receiptHandle()
{
    QFETCH(QString, receiptHandle);
    SqsDeleteMessageRequest request;
    QCOMPARE(request.receiptHandle(), QString());
    request.setReceiptHandle(receiptHandle);
    QCOMPARE(request.receiptHandle(), receiptHandle);
}

void TestSqsDeleteMessageRequest::response()
{
    const SqsDeleteMessageRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsDeleteMessageResponse"));
    const SqsDeleteMessageResponse * const sqsResponse =
        qobject_cast<const SqsDeleteMessageResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
