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

#include "listbackupjobsresponse.h"
#include "listbackupjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupJobsResponse
 * \brief The ListBackupJobsResponse class provides an interace for Backup ListBackupJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupJobs
 */

/*!
 * Constructs a ListBackupJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupJobsResponse::ListBackupJobsResponse(
        const ListBackupJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupJobsResponsePrivate(this), parent)
{
    setRequest(new ListBackupJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupJobsRequest * ListBackupJobsResponse::request() const
{
    return static_cast<const ListBackupJobsRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupJobs \a response.
 */
void ListBackupJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupJobsResponsePrivate
 * \brief The ListBackupJobsResponsePrivate class provides private implementation for ListBackupJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupJobsResponsePrivate object with public implementation \a q.
 */
ListBackupJobsResponsePrivate::ListBackupJobsResponsePrivate(
    ListBackupJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupJobs response element from \a xml.
 */
void ListBackupJobsResponsePrivate::parseListBackupJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
