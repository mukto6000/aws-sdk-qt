// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLIFECYCLECONFIGURATIONREQUEST_H
#define QTAWS_GETBUCKETLIFECYCLECONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketLifecycleConfigurationRequestPrivate;

class QTAWSS3_EXPORT GetBucketLifecycleConfigurationRequest : public S3Request {

public:
    GetBucketLifecycleConfigurationRequest(const GetBucketLifecycleConfigurationRequest &other);
    GetBucketLifecycleConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketLifecycleConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
