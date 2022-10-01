// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbclusterparametergroupsrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterParameterGroupsRequest;

class DescribeDBClusterParameterGroupsRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBClusterParameterGroupsRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBClusterParameterGroupsRequest * const q);
    DescribeDBClusterParameterGroupsRequestPrivate(const DescribeDBClusterParameterGroupsRequestPrivate &other,
                                   DescribeDBClusterParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParameterGroupsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
