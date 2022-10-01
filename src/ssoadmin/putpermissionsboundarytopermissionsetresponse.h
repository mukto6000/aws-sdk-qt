// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETRESPONSE_H
#define QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "putpermissionsboundarytopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class PutPermissionsBoundaryToPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT PutPermissionsBoundaryToPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    PutPermissionsBoundaryToPermissionSetResponse(const PutPermissionsBoundaryToPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPermissionsBoundaryToPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionsBoundaryToPermissionSetResponse)
    Q_DISABLE_COPY(PutPermissionsBoundaryToPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
