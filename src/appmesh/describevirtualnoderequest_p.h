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

#ifndef QTAWS_DESCRIBEVIRTUALNODEREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALNODEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualNodeRequest;

class QTAWS_EXPORT DescribeVirtualNodeRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeVirtualNodeRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeVirtualNodeRequest * const q);
    DescribeVirtualNodeRequestPrivate(const DescribeVirtualNodeRequestPrivate &other,
                                   DescribeVirtualNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
