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

#include "updateconnectionresponse.h"
#include "updateconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateConnectionResponse
 * \brief The UpdateConnectionResponse class provides an interace for NetworkManager UpdateConnection responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateConnection
 */

/*!
 * Constructs a UpdateConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectionResponse::UpdateConnectionResponse(
        const UpdateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateConnectionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectionRequest * UpdateConnectionResponse::request() const
{
    Q_D(const UpdateConnectionResponse);
    return static_cast<const UpdateConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateConnection \a response.
 */
void UpdateConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateConnectionResponsePrivate
 * \brief The UpdateConnectionResponsePrivate class provides private implementation for UpdateConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateConnectionResponsePrivate object with public implementation \a q.
 */
UpdateConnectionResponsePrivate::UpdateConnectionResponsePrivate(
    UpdateConnectionResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateConnection response element from \a xml.
 */
void UpdateConnectionResponsePrivate::parseUpdateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
