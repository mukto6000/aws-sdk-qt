// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationtaskrequest.h"
#include "modifyreplicationtaskrequest_p.h"
#include "modifyreplicationtaskresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationTaskRequest
 * \brief The ModifyReplicationTaskRequest class provides an interface for DatabaseMigration ModifyReplicationTask requests.
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
 * \sa DatabaseMigrationClient::modifyReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyReplicationTaskRequest::ModifyReplicationTaskRequest(const ModifyReplicationTaskRequest &other)
    : DatabaseMigrationRequest(new ModifyReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyReplicationTaskRequest object.
 */
ModifyReplicationTaskRequest::ModifyReplicationTaskRequest()
    : DatabaseMigrationRequest(new ModifyReplicationTaskRequestPrivate(DatabaseMigrationRequest::ModifyReplicationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyReplicationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationTaskRequestPrivate
 * \brief The ModifyReplicationTaskRequestPrivate class provides private implementation for ModifyReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyReplicationTaskRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ModifyReplicationTaskRequestPrivate::ModifyReplicationTaskRequestPrivate(
    const DatabaseMigrationRequest::Action action, ModifyReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationTaskRequest
 * class' copy constructor.
 */
ModifyReplicationTaskRequestPrivate::ModifyReplicationTaskRequestPrivate(
    const ModifyReplicationTaskRequestPrivate &other, ModifyReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
