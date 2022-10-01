// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbclusterparametersrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterParametersRequest;

class DescribeDBClusterParametersRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBClusterParametersRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBClusterParametersRequest * const q);
    DescribeDBClusterParametersRequestPrivate(const DescribeDBClusterParametersRequestPrivate &other,
                                   DescribeDBClusterParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParametersRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
