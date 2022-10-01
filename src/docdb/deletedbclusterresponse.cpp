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

#include "deletedbclusterresponse.h"
#include "deletedbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterResponse
 * \brief The DeleteDBClusterResponse class provides an interace for DocDb DeleteDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBCluster
 */

/*!
 * Constructs a DeleteDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBClusterResponse::DeleteDBClusterResponse(
        const DeleteDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBClusterRequest * DeleteDBClusterResponse::request() const
{
    Q_D(const DeleteDBClusterResponse);
    return static_cast<const DeleteDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBCluster \a response.
 */
void DeleteDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterResponsePrivate
 * \brief The DeleteDBClusterResponsePrivate class provides private implementation for DeleteDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterResponsePrivate object with public implementation \a q.
 */
DeleteDBClusterResponsePrivate::DeleteDBClusterResponsePrivate(
    DeleteDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBCluster response element from \a xml.
 */
void DeleteDBClusterResponsePrivate::parseDeleteDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
