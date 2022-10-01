// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqslistdeadlettersourcequeuesrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqslistdeadlettersourcequeuesrequest.h"
#include "sqs/sqslistdeadlettersourcequeuesresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqslistdeadlettersourcequeuesrequest_p.h"
#endif

#include <QDebug>

namespace TestSqsListDeadLetterSourceQueuesRequest_Mocks {

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

} using namespace TestSqsListDeadLetterSourceQueuesRequest_Mocks;

void TestSqsListDeadLetterSourceQueuesRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null") << QString() << false;

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/bar/baz")
        << true;
}

void TestSqsListDeadLetterSourceQueuesRequest::construct_params()
{
    QFETCH(QString, queueUrl);

    const SqsListDeadLetterSourceQueuesRequest request(queueUrl);

    QCOMPARE(request.action(), SqsRequest::ListDeadLetterSourceQueuesAction);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsListDeadLetterSourceQueuesRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsListDeadLetterSourceQueuesRequest::construct_copy()
{
    QFETCH(QString, queueUrl);

    const SqsListDeadLetterSourceQueuesRequest request1(queueUrl);
    QCOMPARE(request1.queueUrl(), queueUrl);

    const SqsListDeadLetterSourceQueuesRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);

    QCOMPARE(request1, request2);
}

void TestSqsListDeadLetterSourceQueuesRequest::construct_default()
{
    SqsListDeadLetterSourceQueuesRequest request;
    QCOMPARE(request.action(), SqsRequest::ListDeadLetterSourceQueuesAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
}

void TestSqsListDeadLetterSourceQueuesRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsListDeadLetterSourceQueuesRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(bool, isValid);

    const SqsListDeadLetterSourceQueuesRequest request(queueUrl);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsListDeadLetterSourceQueuesRequest::queueUrl_data()
{
    construct_params_data();
}

void TestSqsListDeadLetterSourceQueuesRequest::queueUrl()
{
    QFETCH(QString, queueUrl);

    SqsListDeadLetterSourceQueuesRequest request;
    QCOMPARE(request.queueUrl(), QString());

    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsListDeadLetterSourceQueuesRequest::response()
{
    const SqsListDeadLetterSourceQueuesRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsListDeadLetterSourceQueuesResponse"));
    const SqsListDeadLetterSourceQueuesResponse * const sqsResponse =
        qobject_cast<const SqsListDeadLetterSourceQueuesResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
