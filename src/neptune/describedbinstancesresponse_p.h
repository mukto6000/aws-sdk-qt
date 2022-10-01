// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEDBINSTANCESRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBInstancesResponse;

class DescribeDBInstancesResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBInstancesResponsePrivate(DescribeDBInstancesResponse * const q);

    void parseDescribeDBInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBInstancesResponse)
    Q_DISABLE_COPY(DescribeDBInstancesResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
