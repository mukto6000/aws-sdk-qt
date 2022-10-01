// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONREQUEST_H
#define QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketLifecycleConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutBucketLifecycleConfigurationRequest : public S3Request {

public:
    PutBucketLifecycleConfigurationRequest(const PutBucketLifecycleConfigurationRequest &other);
    PutBucketLifecycleConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketLifecycleConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
