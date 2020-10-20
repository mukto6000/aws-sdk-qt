/*
    Copyright 2013-2020 Paul Colby

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

#include "listrecoverypointsbyresourceresponse.h"
#include "listrecoverypointsbyresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceResponse
 * \brief The ListRecoveryPointsByResourceResponse class provides an interace for Backup ListRecoveryPointsByResource responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByResource
 */

/*!
 * Constructs a ListRecoveryPointsByResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecoveryPointsByResourceResponse::ListRecoveryPointsByResourceResponse(
        const ListRecoveryPointsByResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListRecoveryPointsByResourceResponsePrivate(this), parent)
{
    setRequest(new ListRecoveryPointsByResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecoveryPointsByResourceRequest * ListRecoveryPointsByResourceResponse::request() const
{
    Q_D(const ListRecoveryPointsByResourceResponse);
    return static_cast<const ListRecoveryPointsByResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListRecoveryPointsByResource \a response.
 */
void ListRecoveryPointsByResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecoveryPointsByResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceResponsePrivate
 * \brief The ListRecoveryPointsByResourceResponsePrivate class provides private implementation for ListRecoveryPointsByResourceResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByResourceResponsePrivate object with public implementation \a q.
 */
ListRecoveryPointsByResourceResponsePrivate::ListRecoveryPointsByResourceResponsePrivate(
    ListRecoveryPointsByResourceResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListRecoveryPointsByResource response element from \a xml.
 */
void ListRecoveryPointsByResourceResponsePrivate::parseListRecoveryPointsByResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecoveryPointsByResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
