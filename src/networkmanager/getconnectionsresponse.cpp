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

#include "getconnectionsresponse.h"
#include "getconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectionsResponse
 * \brief The GetConnectionsResponse class provides an interace for NetworkManager GetConnections responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnections
 */

/*!
 * Constructs a GetConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectionsResponse::GetConnectionsResponse(
        const GetConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetConnectionsResponsePrivate(this), parent)
{
    setRequest(new GetConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectionsRequest * GetConnectionsResponse::request() const
{
    Q_D(const GetConnectionsResponse);
    return static_cast<const GetConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetConnections \a response.
 */
void GetConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetConnectionsResponsePrivate
 * \brief The GetConnectionsResponsePrivate class provides private implementation for GetConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectionsResponsePrivate object with public implementation \a q.
 */
GetConnectionsResponsePrivate::GetConnectionsResponsePrivate(
    GetConnectionsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetConnections response element from \a xml.
 */
void GetConnectionsResponsePrivate::parseGetConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
