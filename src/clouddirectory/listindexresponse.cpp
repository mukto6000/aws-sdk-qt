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

#include "listindexresponse.h"
#include "listindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListIndexResponse
 * \brief The ListIndexResponse class provides an interace for CloudDirectory ListIndex responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::listIndex
 */

/*!
 * Constructs a ListIndexResponse object for \a reply to \a request, with parent \a parent.
 */
ListIndexResponse::ListIndexResponse(
        const ListIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListIndexResponsePrivate(this), parent)
{
    setRequest(new ListIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIndexRequest * ListIndexResponse::request() const
{
    Q_D(const ListIndexResponse);
    return static_cast<const ListIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListIndex \a response.
 */
void ListIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListIndexResponsePrivate
 * \brief The ListIndexResponsePrivate class provides private implementation for ListIndexResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListIndexResponsePrivate object with public implementation \a q.
 */
ListIndexResponsePrivate::ListIndexResponsePrivate(
    ListIndexResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListIndex response element from \a xml.
 */
void ListIndexResponsePrivate::parseListIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
