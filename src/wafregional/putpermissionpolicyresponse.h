// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYRESPONSE_H
#define QTAWS_PUTPERMISSIONPOLICYRESPONSE_H

#include "wafregionalresponse.h"
#include "putpermissionpolicyrequest.h"

namespace QtAws {
namespace WafRegional {

class PutPermissionPolicyResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT PutPermissionPolicyResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    PutPermissionPolicyResponse(const PutPermissionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPermissionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionPolicyResponse)
    Q_DISABLE_COPY(PutPermissionPolicyResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
