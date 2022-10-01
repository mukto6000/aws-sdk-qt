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

#include "updatelocationnfsresponse.h"
#include "updatelocationnfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationNfsResponse
 * \brief The UpdateLocationNfsResponse class provides an interace for DataSync UpdateLocationNfs responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::updateLocationNfs
 */

/*!
 * Constructs a UpdateLocationNfsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLocationNfsResponse::UpdateLocationNfsResponse(
        const UpdateLocationNfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateLocationNfsResponsePrivate(this), parent)
{
    setRequest(new UpdateLocationNfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLocationNfsRequest * UpdateLocationNfsResponse::request() const
{
    Q_D(const UpdateLocationNfsResponse);
    return static_cast<const UpdateLocationNfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateLocationNfs \a response.
 */
void UpdateLocationNfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLocationNfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateLocationNfsResponsePrivate
 * \brief The UpdateLocationNfsResponsePrivate class provides private implementation for UpdateLocationNfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationNfsResponsePrivate object with public implementation \a q.
 */
UpdateLocationNfsResponsePrivate::UpdateLocationNfsResponsePrivate(
    UpdateLocationNfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateLocationNfs response element from \a xml.
 */
void UpdateLocationNfsResponsePrivate::parseUpdateLocationNfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLocationNfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
