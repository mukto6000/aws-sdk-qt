// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetadvisordatabasesrequest.h"
#include "deletefleetadvisordatabasesrequest_p.h"
#include "deletefleetadvisordatabasesresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorDatabasesRequest
 * \brief The DeleteFleetAdvisorDatabasesRequest class provides an interface for DatabaseMigration DeleteFleetAdvisorDatabases requests.
 *
 * \inmodule QtAwsDatabaseMigration
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
 * \sa DatabaseMigrationClient::deleteFleetAdvisorDatabases
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFleetAdvisorDatabasesRequest::DeleteFleetAdvisorDatabasesRequest(const DeleteFleetAdvisorDatabasesRequest &other)
    : DatabaseMigrationRequest(new DeleteFleetAdvisorDatabasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFleetAdvisorDatabasesRequest object.
 */
DeleteFleetAdvisorDatabasesRequest::DeleteFleetAdvisorDatabasesRequest()
    : DatabaseMigrationRequest(new DeleteFleetAdvisorDatabasesRequestPrivate(DatabaseMigrationRequest::DeleteFleetAdvisorDatabasesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFleetAdvisorDatabasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFleetAdvisorDatabasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFleetAdvisorDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFleetAdvisorDatabasesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorDatabasesRequestPrivate
 * \brief The DeleteFleetAdvisorDatabasesRequestPrivate class provides private implementation for DeleteFleetAdvisorDatabasesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteFleetAdvisorDatabasesRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteFleetAdvisorDatabasesRequestPrivate::DeleteFleetAdvisorDatabasesRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteFleetAdvisorDatabasesRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFleetAdvisorDatabasesRequest
 * class' copy constructor.
 */
DeleteFleetAdvisorDatabasesRequestPrivate::DeleteFleetAdvisorDatabasesRequestPrivate(
    const DeleteFleetAdvisorDatabasesRequestPrivate &other, DeleteFleetAdvisorDatabasesRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
