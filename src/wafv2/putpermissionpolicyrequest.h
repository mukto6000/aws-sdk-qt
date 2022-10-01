// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYREQUEST_H
#define QTAWS_PUTPERMISSIONPOLICYREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class PutPermissionPolicyRequestPrivate;

class QTAWSWAFV2_EXPORT PutPermissionPolicyRequest : public Wafv2Request {

public:
    PutPermissionPolicyRequest(const PutPermissionPolicyRequest &other);
    PutPermissionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionPolicyRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
