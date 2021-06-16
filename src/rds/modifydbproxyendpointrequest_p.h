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

#ifndef QTAWS_MODIFYDBPROXYENDPOINTREQUEST_P_H
#define QTAWS_MODIFYDBPROXYENDPOINTREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbproxyendpointrequest.h"

namespace QtAws {
namespace RDS {

class ModifyDBProxyEndpointRequest;

class QTAWS_EXPORT ModifyDBProxyEndpointRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBProxyEndpointRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBProxyEndpointRequest * const q);
    ModifyDBProxyEndpointRequestPrivate(const ModifyDBProxyEndpointRequestPrivate &other,
                                   ModifyDBProxyEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyEndpointRequest)

};

} // namespace RDS
} // namespace QtAws

#endif
