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

#ifndef QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationSubnetGroupsResponse;

class DescribeReplicationSubnetGroupsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationSubnetGroupsResponsePrivate(DescribeReplicationSubnetGroupsResponse * const q);

    void parseDescribeReplicationSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeReplicationSubnetGroupsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
