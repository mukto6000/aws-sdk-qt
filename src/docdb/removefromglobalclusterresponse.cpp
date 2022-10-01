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

#include "removefromglobalclusterresponse.h"
#include "removefromglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterResponse
 * \brief The RemoveFromGlobalClusterResponse class provides an interace for DocDb RemoveFromGlobalCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeFromGlobalCluster
 */

/*!
 * Constructs a RemoveFromGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFromGlobalClusterResponse::RemoveFromGlobalClusterResponse(
        const RemoveFromGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RemoveFromGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new RemoveFromGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFromGlobalClusterRequest * RemoveFromGlobalClusterResponse::request() const
{
    Q_D(const RemoveFromGlobalClusterResponse);
    return static_cast<const RemoveFromGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RemoveFromGlobalCluster \a response.
 */
void RemoveFromGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFromGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterResponsePrivate
 * \brief The RemoveFromGlobalClusterResponsePrivate class provides private implementation for RemoveFromGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveFromGlobalClusterResponsePrivate object with public implementation \a q.
 */
RemoveFromGlobalClusterResponsePrivate::RemoveFromGlobalClusterResponsePrivate(
    RemoveFromGlobalClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RemoveFromGlobalCluster response element from \a xml.
 */
void RemoveFromGlobalClusterResponsePrivate::parseRemoveFromGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFromGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
