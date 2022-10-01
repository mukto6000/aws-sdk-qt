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

#ifndef QTAWS_DESCRIBETRAFFICMIRRORSESSIONSREQUEST_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORSESSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describetrafficmirrorsessionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorSessionsRequest;

class DescribeTrafficMirrorSessionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTrafficMirrorSessionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTrafficMirrorSessionsRequest * const q);
    DescribeTrafficMirrorSessionsRequestPrivate(const DescribeTrafficMirrorSessionsRequestPrivate &other,
                                   DescribeTrafficMirrorSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorSessionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
