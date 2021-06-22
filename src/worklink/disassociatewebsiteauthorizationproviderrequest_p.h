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

#ifndef QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_P_H
#define QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_P_H

#include "worklinkrequest_p.h"
#include "disassociatewebsiteauthorizationproviderrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteAuthorizationProviderRequest;

class DisassociateWebsiteAuthorizationProviderRequestPrivate : public WorkLinkRequestPrivate {

public:
    DisassociateWebsiteAuthorizationProviderRequestPrivate(const WorkLinkRequest::Action action,
                                   DisassociateWebsiteAuthorizationProviderRequest * const q);
    DisassociateWebsiteAuthorizationProviderRequestPrivate(const DisassociateWebsiteAuthorizationProviderRequestPrivate &other,
                                   DisassociateWebsiteAuthorizationProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWebsiteAuthorizationProviderRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
