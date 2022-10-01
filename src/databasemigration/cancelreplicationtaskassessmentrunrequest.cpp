// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelreplicationtaskassessmentrunrequest.h"
#include "cancelreplicationtaskassessmentrunrequest_p.h"
#include "cancelreplicationtaskassessmentrunresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CancelReplicationTaskAssessmentRunRequest
 * \brief The CancelReplicationTaskAssessmentRunRequest class provides an interface for DatabaseMigration CancelReplicationTaskAssessmentRun requests.
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
 * \sa DatabaseMigrationClient::cancelReplicationTaskAssessmentRun
 */

/*!
 * Constructs a copy of \a other.
 */
CancelReplicationTaskAssessmentRunRequest::CancelReplicationTaskAssessmentRunRequest(const CancelReplicationTaskAssessmentRunRequest &other)
    : DatabaseMigrationRequest(new CancelReplicationTaskAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelReplicationTaskAssessmentRunRequest object.
 */
CancelReplicationTaskAssessmentRunRequest::CancelReplicationTaskAssessmentRunRequest()
    : DatabaseMigrationRequest(new CancelReplicationTaskAssessmentRunRequestPrivate(DatabaseMigrationRequest::CancelReplicationTaskAssessmentRunAction, this))
{

}

/*!
 * \reimp
 */
bool CancelReplicationTaskAssessmentRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelReplicationTaskAssessmentRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelReplicationTaskAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new CancelReplicationTaskAssessmentRunResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::CancelReplicationTaskAssessmentRunRequestPrivate
 * \brief The CancelReplicationTaskAssessmentRunRequestPrivate class provides private implementation for CancelReplicationTaskAssessmentRunRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CancelReplicationTaskAssessmentRunRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
CancelReplicationTaskAssessmentRunRequestPrivate::CancelReplicationTaskAssessmentRunRequestPrivate(
    const DatabaseMigrationRequest::Action action, CancelReplicationTaskAssessmentRunRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelReplicationTaskAssessmentRunRequest
 * class' copy constructor.
 */
CancelReplicationTaskAssessmentRunRequestPrivate::CancelReplicationTaskAssessmentRunRequestPrivate(
    const CancelReplicationTaskAssessmentRunRequestPrivate &other, CancelReplicationTaskAssessmentRunRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
