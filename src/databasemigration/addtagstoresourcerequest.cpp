// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagstoresourcerequest.h"
#include "addtagstoresourcerequest_p.h"
#include "addtagstoresourceresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::AddTagsToResourceRequest
 * \brief The AddTagsToResourceRequest class provides an interface for DatabaseMigration AddTagsToResource requests.
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
 * \sa DatabaseMigrationClient::addTagsToResource
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest(const AddTagsToResourceRequest &other)
    : DatabaseMigrationRequest(new AddTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsToResourceRequest object.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest()
    : DatabaseMigrationRequest(new AddTagsToResourceRequestPrivate(DatabaseMigrationRequest::AddTagsToResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsToResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsToResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToResourceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::AddTagsToResourceRequestPrivate
 * \brief The AddTagsToResourceRequestPrivate class provides private implementation for AddTagsToResourceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a AddTagsToResourceRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const DatabaseMigrationRequest::Action action, AddTagsToResourceRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToResourceRequest
 * class' copy constructor.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const AddTagsToResourceRequestPrivate &other, AddTagsToResourceRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
