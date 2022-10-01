// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETCORSREQUEST_H
#define QTAWS_PUTBUCKETCORSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketCorsRequestPrivate;

class QTAWSS3_EXPORT PutBucketCorsRequest : public S3Request {

public:
    PutBucketCorsRequest(const PutBucketCorsRequest &other);
    PutBucketCorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketCorsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
