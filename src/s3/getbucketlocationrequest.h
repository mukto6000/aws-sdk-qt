// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOCATIONREQUEST_H
#define QTAWS_GETBUCKETLOCATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketLocationRequestPrivate;

class QTAWSS3_EXPORT GetBucketLocationRequest : public S3Request {

public:
    GetBucketLocationRequest(const GetBucketLocationRequest &other);
    GetBucketLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketLocationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
