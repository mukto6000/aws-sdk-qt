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

#include "listrecoverypointsbybackupvaultresponse.h"
#include "listrecoverypointsbybackupvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByBackupVaultResponse
 * \brief The ListRecoveryPointsByBackupVaultResponse class provides an interace for Backup ListRecoveryPointsByBackupVault responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByBackupVault
 */

/*!
 * Constructs a ListRecoveryPointsByBackupVaultResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecoveryPointsByBackupVaultResponse::ListRecoveryPointsByBackupVaultResponse(
        const ListRecoveryPointsByBackupVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListRecoveryPointsByBackupVaultResponsePrivate(this), parent)
{
    setRequest(new ListRecoveryPointsByBackupVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecoveryPointsByBackupVaultRequest * ListRecoveryPointsByBackupVaultResponse::request() const
{
    Q_D(const ListRecoveryPointsByBackupVaultResponse);
    return static_cast<const ListRecoveryPointsByBackupVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListRecoveryPointsByBackupVault \a response.
 */
void ListRecoveryPointsByBackupVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecoveryPointsByBackupVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByBackupVaultResponsePrivate
 * \brief The ListRecoveryPointsByBackupVaultResponsePrivate class provides private implementation for ListRecoveryPointsByBackupVaultResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByBackupVaultResponsePrivate object with public implementation \a q.
 */
ListRecoveryPointsByBackupVaultResponsePrivate::ListRecoveryPointsByBackupVaultResponsePrivate(
    ListRecoveryPointsByBackupVaultResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListRecoveryPointsByBackupVault response element from \a xml.
 */
void ListRecoveryPointsByBackupVaultResponsePrivate::parseListRecoveryPointsByBackupVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecoveryPointsByBackupVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
