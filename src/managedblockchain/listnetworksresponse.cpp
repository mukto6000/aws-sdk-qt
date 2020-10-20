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

#include "listnetworksresponse.h"
#include "listnetworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListNetworksResponse
 * \brief The ListNetworksResponse class provides an interace for ManagedBlockchain ListNetworks responses.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
 *
 * \sa ManagedBlockchainClient::listNetworks
 */

/*!
 * Constructs a ListNetworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworksResponse::ListNetworksResponse(
        const ListNetworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListNetworksResponsePrivate(this), parent)
{
    setRequest(new ListNetworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworksRequest * ListNetworksResponse::request() const
{
    Q_D(const ListNetworksResponse);
    return static_cast<const ListNetworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain ListNetworks \a response.
 */
void ListNetworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListNetworksResponsePrivate
 * \brief The ListNetworksResponsePrivate class provides private implementation for ListNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListNetworksResponsePrivate object with public implementation \a q.
 */
ListNetworksResponsePrivate::ListNetworksResponsePrivate(
    ListNetworksResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListNetworks response element from \a xml.
 */
void ListNetworksResponsePrivate::parseListNetworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
