// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqssendmessagebatchrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqssendmessagebatchrequest.h"
#include "sqs/sqssendmessagebatchresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqssendmessagebatchrequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsSendMessageBatchRequest_Mocks {

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

} using namespace TestSqsSendMessageBatchRequest_Mocks;

void TestSqsSendMessageBatchRequest::construct_params_data()
{
    /// @todo
}

void TestSqsSendMessageBatchRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsSendMessageBatchRequest request(label, permissions, queueUrl);

    //QCOMPARE(request.action(), SqsRequest::SendMessageBatchAction);
    //QCOMPARE( @todo );
}

void TestSqsSendMessageBatchRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsSendMessageBatchRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsSendMessageBatchRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsSendMessageBatchRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsSendMessageBatchRequest::construct_default()
{
    SqsSendMessageBatchRequest request;
    QCOMPARE(request.action(), SqsRequest::SendMessageBatchAction);
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsSendMessageBatchRequest::isValid_data()
{
    /// @todo
}

void TestSqsSendMessageBatchRequest::isValid()
{
    //QFETCH( @todo );

    const SqsSendMessageBatchRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsSendMessageBatchRequest::response()
{
    const SqsSendMessageBatchRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsSendMessageBatchResponse"));
    const SqsSendMessageBatchResponse * const sqsResponse =
        qobject_cast<const SqsSendMessageBatchResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
