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

#include "listinstancesresponse.h"
#include "listinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListInstancesResponse
 * \brief The ListInstancesResponse class provides an interace for ServiceDiscovery ListInstances responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
 *
 * \sa ServiceDiscoveryClient::listInstances
 */

/*!
 * Constructs a ListInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstancesResponse::ListInstancesResponse(
        const ListInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new ListInstancesResponsePrivate(this), parent)
{
    setRequest(new ListInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstancesRequest * ListInstancesResponse::request() const
{
    Q_D(const ListInstancesResponse);
    return static_cast<const ListInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery ListInstances \a response.
 */
void ListInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::ListInstancesResponsePrivate
 * \brief The ListInstancesResponsePrivate class provides private implementation for ListInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ListInstancesResponsePrivate object with public implementation \a q.
 */
ListInstancesResponsePrivate::ListInstancesResponsePrivate(
    ListInstancesResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery ListInstances response element from \a xml.
 */
void ListInstancesResponsePrivate::parseListInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
