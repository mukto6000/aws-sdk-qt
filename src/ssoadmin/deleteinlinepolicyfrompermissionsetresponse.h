// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETRESPONSE_H
#define QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "deleteinlinepolicyfrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInlinePolicyFromPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT DeleteInlinePolicyFromPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DeleteInlinePolicyFromPermissionSetResponse(const DeleteInlinePolicyFromPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInlinePolicyFromPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInlinePolicyFromPermissionSetResponse)
    Q_DISABLE_COPY(DeleteInlinePolicyFromPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
