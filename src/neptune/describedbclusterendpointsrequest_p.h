// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERENDPOINTSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describedbclusterendpointsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterEndpointsRequest;

class DescribeDBClusterEndpointsRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeDBClusterEndpointsRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeDBClusterEndpointsRequest * const q);
    DescribeDBClusterEndpointsRequestPrivate(const DescribeDBClusterEndpointsRequestPrivate &other,
                                   DescribeDBClusterEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterEndpointsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
