// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYREQUEST_H
#define QTAWS_GETBUCKETPOLICYREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketPolicyRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetBucketPolicyRequest : public S3ControlRequest {

public:
    GetBucketPolicyRequest(const GetBucketPolicyRequest &other);
    GetBucketPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
