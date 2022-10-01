// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYSTRUCTURERESPONSE_P_H
#define QTAWS_DESCRIBEUSERHIERARCHYSTRUCTURERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyStructureResponse;

class DescribeUserHierarchyStructureResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeUserHierarchyStructureResponsePrivate(DescribeUserHierarchyStructureResponse * const q);

    void parseDescribeUserHierarchyStructureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserHierarchyStructureResponse)
    Q_DISABLE_COPY(DescribeUserHierarchyStructureResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
