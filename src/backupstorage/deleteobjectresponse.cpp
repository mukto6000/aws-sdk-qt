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

#include "deleteobjectresponse.h"
#include "deleteobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::DeleteObjectResponse
 * \brief The DeleteObjectResponse class provides an interace for BackupStorage DeleteObject responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::deleteObject
 */

/*!
 * Constructs a DeleteObjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectResponse::DeleteObjectResponse(
        const DeleteObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new DeleteObjectResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectRequest * DeleteObjectResponse::request() const
{
    Q_D(const DeleteObjectResponse);
    return static_cast<const DeleteObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage DeleteObject \a response.
 */
void DeleteObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::DeleteObjectResponsePrivate
 * \brief The DeleteObjectResponsePrivate class provides private implementation for DeleteObjectResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a DeleteObjectResponsePrivate object with public implementation \a q.
 */
DeleteObjectResponsePrivate::DeleteObjectResponsePrivate(
    DeleteObjectResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage DeleteObject response element from \a xml.
 */
void DeleteObjectResponsePrivate::parseDeleteObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
