// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSREQUEST_H
#define QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListOrganizationServiceAccessStatusRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT ListOrganizationServiceAccessStatusRequest : public NetworkManagerRequest {

public:
    ListOrganizationServiceAccessStatusRequest(const ListOrganizationServiceAccessStatusRequest &other);
    ListOrganizationServiceAccessStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationServiceAccessStatusRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
