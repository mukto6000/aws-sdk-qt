// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETREQUEST_H
#define QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionsBoundaryFromPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT DeletePermissionsBoundaryFromPermissionSetRequest : public SsoAdminRequest {

public:
    DeletePermissionsBoundaryFromPermissionSetRequest(const DeletePermissionsBoundaryFromPermissionSetRequest &other);
    DeletePermissionsBoundaryFromPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionsBoundaryFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
