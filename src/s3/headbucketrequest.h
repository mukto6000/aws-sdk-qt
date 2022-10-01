// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADBUCKETREQUEST_H
#define QTAWS_HEADBUCKETREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class HeadBucketRequestPrivate;

class QTAWSS3_EXPORT HeadBucketRequest : public S3Request {

public:
    HeadBucketRequest(const HeadBucketRequest &other);
    HeadBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HeadBucketRequest)

};

} // namespace S3
} // namespace QtAws

#endif
