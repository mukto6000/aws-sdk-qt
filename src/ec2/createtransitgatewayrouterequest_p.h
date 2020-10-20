/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CREATETRANSITGATEWAYROUTEREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayrouterequest.h"

namespace QtAws {
namespace EC2 {

class CreateTransitGatewayRouteRequest;

class QTAWS_EXPORT CreateTransitGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayRouteRequest * const q);
    CreateTransitGatewayRouteRequestPrivate(const CreateTransitGatewayRouteRequestPrivate &other,
                                   CreateTransitGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
