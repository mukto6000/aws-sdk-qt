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

#include "createlocationhdfsresponse.h"
#include "createlocationhdfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationHdfsResponse
 * \brief The CreateLocationHdfsResponse class provides an interace for DataSync CreateLocationHdfs responses.
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
 * \sa DataSyncClient::createLocationHdfs
 */

/*!
 * Constructs a CreateLocationHdfsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationHdfsResponse::CreateLocationHdfsResponse(
        const CreateLocationHdfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationHdfsResponsePrivate(this), parent)
{
    setRequest(new CreateLocationHdfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationHdfsRequest * CreateLocationHdfsResponse::request() const
{
    Q_D(const CreateLocationHdfsResponse);
    return static_cast<const CreateLocationHdfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationHdfs \a response.
 */
void CreateLocationHdfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationHdfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationHdfsResponsePrivate
 * \brief The CreateLocationHdfsResponsePrivate class provides private implementation for CreateLocationHdfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationHdfsResponsePrivate object with public implementation \a q.
 */
CreateLocationHdfsResponsePrivate::CreateLocationHdfsResponsePrivate(
    CreateLocationHdfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationHdfs response element from \a xml.
 */
void CreateLocationHdfsResponsePrivate::parseCreateLocationHdfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationHdfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
