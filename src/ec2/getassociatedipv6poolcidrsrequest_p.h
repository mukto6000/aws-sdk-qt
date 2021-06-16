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

#ifndef QTAWS_GETASSOCIATEDIPV6POOLCIDRSREQUEST_P_H
#define QTAWS_GETASSOCIATEDIPV6POOLCIDRSREQUEST_P_H

#include "ec2request_p.h"
#include "getassociatedipv6poolcidrsrequest.h"

namespace QtAws {
namespace EC2 {

class GetAssociatedIpv6PoolCidrsRequest;

class QTAWS_EXPORT GetAssociatedIpv6PoolCidrsRequestPrivate : public Ec2RequestPrivate {

public:
    GetAssociatedIpv6PoolCidrsRequestPrivate(const Ec2Request::Action action,
                                   GetAssociatedIpv6PoolCidrsRequest * const q);
    GetAssociatedIpv6PoolCidrsRequestPrivate(const GetAssociatedIpv6PoolCidrsRequestPrivate &other,
                                   GetAssociatedIpv6PoolCidrsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssociatedIpv6PoolCidrsRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
