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

#include "deletebackupvaultrequest.h"
#include "deletebackupvaultrequest_p.h"
#include "deletebackupvaultresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultRequest
 * \brief The DeleteBackupVaultRequest class provides an interface for Backup DeleteBackupVault requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVault
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupVaultRequest::DeleteBackupVaultRequest(const DeleteBackupVaultRequest &other)
    : BackupRequest(new DeleteBackupVaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupVaultRequest object.
 */
DeleteBackupVaultRequest::DeleteBackupVaultRequest()
    : BackupRequest(new DeleteBackupVaultRequestPrivate(BackupRequest::DeleteBackupVaultAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupVaultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupVaultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupVaultRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupVaultResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultRequestPrivate
 * \brief The DeleteBackupVaultRequestPrivate class provides private implementation for DeleteBackupVaultRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupVaultRequestPrivate::DeleteBackupVaultRequestPrivate(
    const BackupRequest::Action action, DeleteBackupVaultRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupVaultRequest
 * class' copy constructor.
 */
DeleteBackupVaultRequestPrivate::DeleteBackupVaultRequestPrivate(
    const DeleteBackupVaultRequestPrivate &other, DeleteBackupVaultRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
