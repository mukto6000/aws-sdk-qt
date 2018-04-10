/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereplicationsubnetgroupsrequest.h"
#include "describereplicationsubnetgroupsrequest_p.h"
#include "describereplicationsubnetgroupsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationSubnetGroupsRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeReplicationSubnetGroups requests.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeReplicationSubnetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReplicationSubnetGroupsRequest::DescribeReplicationSubnetGroupsRequest(const DescribeReplicationSubnetGroupsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeReplicationSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReplicationSubnetGroupsRequest object.
 */
DescribeReplicationSubnetGroupsRequest::DescribeReplicationSubnetGroupsRequest()
    : DatabaseMigrationServiceRequest(new DescribeReplicationSubnetGroupsRequestPrivate(DatabaseMigrationServiceRequest::DescribeReplicationSubnetGroupsAction, this))
{

}

bool DescribeReplicationSubnetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReplicationSubnetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReplicationSubnetGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationSubnetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReplicationSubnetGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeReplicationSubnetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationSubnetGroupsRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeReplicationSubnetGroupsRequest instance.
 */
DescribeReplicationSubnetGroupsRequestPrivate::DescribeReplicationSubnetGroupsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeReplicationSubnetGroupsRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationSubnetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationSubnetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReplicationSubnetGroupsRequest instance.
 */
DescribeReplicationSubnetGroupsRequestPrivate::DescribeReplicationSubnetGroupsRequestPrivate(
    const DescribeReplicationSubnetGroupsRequestPrivate &other, DescribeReplicationSubnetGroupsRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws