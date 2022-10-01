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

#include "listnetworkresourcesresponse.h"
#include "listnetworkresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworkResourcesResponse
 * \brief The ListNetworkResourcesResponse class provides an interace for PrivateNetworks ListNetworkResources responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworkResources
 */

/*!
 * Constructs a ListNetworkResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworkResourcesResponse::ListNetworkResourcesResponse(
        const ListNetworkResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListNetworkResourcesResponsePrivate(this), parent)
{
    setRequest(new ListNetworkResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworkResourcesRequest * ListNetworkResourcesResponse::request() const
{
    Q_D(const ListNetworkResourcesResponse);
    return static_cast<const ListNetworkResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ListNetworkResources \a response.
 */
void ListNetworkResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworkResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworkResourcesResponsePrivate
 * \brief The ListNetworkResourcesResponsePrivate class provides private implementation for ListNetworkResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworkResourcesResponsePrivate object with public implementation \a q.
 */
ListNetworkResourcesResponsePrivate::ListNetworkResourcesResponsePrivate(
    ListNetworkResourcesResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListNetworkResources response element from \a xml.
 */
void ListNetworkResourcesResponsePrivate::parseListNetworkResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworkResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
