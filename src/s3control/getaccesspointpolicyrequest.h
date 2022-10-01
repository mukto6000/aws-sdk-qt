// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYREQUEST_H
#define QTAWS_GETACCESSPOINTPOLICYREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyRequest : public S3ControlRequest {

public:
    GetAccessPointPolicyRequest(const GetAccessPointPolicyRequest &other);
    GetAccessPointPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
