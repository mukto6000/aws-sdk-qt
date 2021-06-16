/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociateserviceactionfromprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateServiceActionFromProvisioningArtifactRequest;

class QTAWS_EXPORT DisassociateServiceActionFromProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisassociateServiceActionFromProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisassociateServiceActionFromProvisioningArtifactRequest * const q);
    DisassociateServiceActionFromProvisioningArtifactRequestPrivate(const DisassociateServiceActionFromProvisioningArtifactRequestPrivate &other,
                                   DisassociateServiceActionFromProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceActionFromProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
