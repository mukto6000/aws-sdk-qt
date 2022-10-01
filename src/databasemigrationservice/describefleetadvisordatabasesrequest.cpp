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

#include "describefleetadvisordatabasesrequest.h"
#include "describefleetadvisordatabasesrequest_p.h"
#include "describefleetadvisordatabasesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorDatabasesRequest
 * \brief The DescribeFleetAdvisorDatabasesRequest class provides an interface for DatabaseMigrationService DescribeFleetAdvisorDatabases requests.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::describeFleetAdvisorDatabases
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorDatabasesRequest::DescribeFleetAdvisorDatabasesRequest(const DescribeFleetAdvisorDatabasesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeFleetAdvisorDatabasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorDatabasesRequest object.
 */
DescribeFleetAdvisorDatabasesRequest::DescribeFleetAdvisorDatabasesRequest()
    : DatabaseMigrationServiceRequest(new DescribeFleetAdvisorDatabasesRequestPrivate(DatabaseMigrationServiceRequest::DescribeFleetAdvisorDatabasesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetAdvisorDatabasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetAdvisorDatabasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAdvisorDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAdvisorDatabasesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorDatabasesRequestPrivate
 * \brief The DescribeFleetAdvisorDatabasesRequestPrivate class provides private implementation for DescribeFleetAdvisorDatabasesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeFleetAdvisorDatabasesRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorDatabasesRequestPrivate::DescribeFleetAdvisorDatabasesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeFleetAdvisorDatabasesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAdvisorDatabasesRequest
 * class' copy constructor.
 */
DescribeFleetAdvisorDatabasesRequestPrivate::DescribeFleetAdvisorDatabasesRequestPrivate(
    const DescribeFleetAdvisorDatabasesRequestPrivate &other, DescribeFleetAdvisorDatabasesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
