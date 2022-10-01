// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYREQUEST_H
#define QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteCloudFrontOriginAccessIdentityRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteCloudFrontOriginAccessIdentityRequest : public CloudFrontRequest {

public:
    DeleteCloudFrontOriginAccessIdentityRequest(const DeleteCloudFrontOriginAccessIdentityRequest &other);
    DeleteCloudFrontOriginAccessIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
