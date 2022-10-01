// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLOGGINGREQUEST_H
#define QTAWS_PUTBUCKETLOGGINGREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketLoggingRequestPrivate;

class QTAWSS3_EXPORT PutBucketLoggingRequest : public S3Request {

public:
    PutBucketLoggingRequest(const PutBucketLoggingRequest &other);
    PutBucketLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketLoggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
