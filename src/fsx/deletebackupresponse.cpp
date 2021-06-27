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

#include "deletebackupresponse.h"
#include "deletebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteBackupResponse
 * \brief The DeleteBackupResponse class provides an interace for FSx DeleteBackup responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteBackup
 */

/*!
 * Constructs a DeleteBackupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupResponse::DeleteBackupResponse(
        const DeleteBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DeleteBackupResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupRequest * DeleteBackupResponse::request() const
{
    return static_cast<const DeleteBackupRequest *>(FSxResponse::request());
}

/*!
 * \reimp
 * Parses a successful FSx DeleteBackup \a response.
 */
void DeleteBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DeleteBackupResponsePrivate
 * \brief The DeleteBackupResponsePrivate class provides private implementation for DeleteBackupResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteBackupResponsePrivate object with public implementation \a q.
 */
DeleteBackupResponsePrivate::DeleteBackupResponsePrivate(
    DeleteBackupResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DeleteBackup response element from \a xml.
 */
void DeleteBackupResponsePrivate::parseDeleteBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
