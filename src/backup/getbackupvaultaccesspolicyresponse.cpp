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

#include "getbackupvaultaccesspolicyresponse.h"
#include "getbackupvaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupVaultAccessPolicyResponse
 * \brief The GetBackupVaultAccessPolicyResponse class provides an interace for Backup GetBackupVaultAccessPolicy responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupVaultAccessPolicy
 */

/*!
 * Constructs a GetBackupVaultAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupVaultAccessPolicyResponse::GetBackupVaultAccessPolicyResponse(
        const GetBackupVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new GetBackupVaultAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupVaultAccessPolicyRequest * GetBackupVaultAccessPolicyResponse::request() const
{
    return static_cast<const GetBackupVaultAccessPolicyRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupVaultAccessPolicy \a response.
 */
void GetBackupVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupVaultAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupVaultAccessPolicyResponsePrivate
 * \brief The GetBackupVaultAccessPolicyResponsePrivate class provides private implementation for GetBackupVaultAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupVaultAccessPolicyResponsePrivate object with public implementation \a q.
 */
GetBackupVaultAccessPolicyResponsePrivate::GetBackupVaultAccessPolicyResponsePrivate(
    GetBackupVaultAccessPolicyResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupVaultAccessPolicy response element from \a xml.
 */
void GetBackupVaultAccessPolicyResponsePrivate::parseGetBackupVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupVaultAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
