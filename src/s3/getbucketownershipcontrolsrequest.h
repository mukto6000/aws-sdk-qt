// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETOWNERSHIPCONTROLSREQUEST_H
#define QTAWS_GETBUCKETOWNERSHIPCONTROLSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketOwnershipControlsRequestPrivate;

class QTAWSS3_EXPORT GetBucketOwnershipControlsRequest : public S3Request {

public:
    GetBucketOwnershipControlsRequest(const GetBucketOwnershipControlsRequest &other);
    GetBucketOwnershipControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketOwnershipControlsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
