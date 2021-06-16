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

#ifndef QTAWS_DEREGISTERINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERINSTANCEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "deregisterinstancerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeregisterInstanceRequest;

class QTAWS_EXPORT DeregisterInstanceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    DeregisterInstanceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   DeregisterInstanceRequest * const q);
    DeregisterInstanceRequestPrivate(const DeregisterInstanceRequestPrivate &other,
                                   DeregisterInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterInstanceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
