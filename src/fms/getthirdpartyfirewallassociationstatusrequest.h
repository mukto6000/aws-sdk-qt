// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSREQUEST_H
#define QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetThirdPartyFirewallAssociationStatusRequestPrivate;

class QTAWSFMS_EXPORT GetThirdPartyFirewallAssociationStatusRequest : public FmsRequest {

public:
    GetThirdPartyFirewallAssociationStatusRequest(const GetThirdPartyFirewallAssociationStatusRequest &other);
    GetThirdPartyFirewallAssociationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThirdPartyFirewallAssociationStatusRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
