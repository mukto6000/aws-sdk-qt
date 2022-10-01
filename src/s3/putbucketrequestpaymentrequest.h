// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREQUESTPAYMENTREQUEST_H
#define QTAWS_PUTBUCKETREQUESTPAYMENTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketRequestPaymentRequestPrivate;

class QTAWSS3_EXPORT PutBucketRequestPaymentRequest : public S3Request {

public:
    PutBucketRequestPaymentRequest(const PutBucketRequestPaymentRequest &other);
    PutBucketRequestPaymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketRequestPaymentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
