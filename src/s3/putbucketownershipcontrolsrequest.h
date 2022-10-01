// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETOWNERSHIPCONTROLSREQUEST_H
#define QTAWS_PUTBUCKETOWNERSHIPCONTROLSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketOwnershipControlsRequestPrivate;

class QTAWSS3_EXPORT PutBucketOwnershipControlsRequest : public S3Request {

public:
    PutBucketOwnershipControlsRequest(const PutBucketOwnershipControlsRequest &other);
    PutBucketOwnershipControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketOwnershipControlsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
