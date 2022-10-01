// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETREQUEST_H
#define QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountsForProvisionedPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListAccountsForProvisionedPermissionSetRequest : public SsoAdminRequest {

public:
    ListAccountsForProvisionedPermissionSetRequest(const ListAccountsForProvisionedPermissionSetRequest &other);
    ListAccountsForProvisionedPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsForProvisionedPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
