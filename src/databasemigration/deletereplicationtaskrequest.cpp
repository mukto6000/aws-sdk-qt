// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationtaskrequest.h"
#include "deletereplicationtaskrequest_p.h"
#include "deletereplicationtaskresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationTaskRequest
 * \brief The DeleteReplicationTaskRequest class provides an interface for DatabaseMigration DeleteReplicationTask requests.
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
 * \sa DatabaseMigrationClient::deleteReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationTaskRequest::DeleteReplicationTaskRequest(const DeleteReplicationTaskRequest &other)
    : DatabaseMigrationRequest(new DeleteReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationTaskRequest object.
 */
DeleteReplicationTaskRequest::DeleteReplicationTaskRequest()
    : DatabaseMigrationRequest(new DeleteReplicationTaskRequestPrivate(DatabaseMigrationRequest::DeleteReplicationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationTaskRequestPrivate
 * \brief The DeleteReplicationTaskRequestPrivate class provides private implementation for DeleteReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationTaskRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteReplicationTaskRequestPrivate::DeleteReplicationTaskRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationTaskRequest
 * class' copy constructor.
 */
DeleteReplicationTaskRequestPrivate::DeleteReplicationTaskRequestPrivate(
    const DeleteReplicationTaskRequestPrivate &other, DeleteReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
