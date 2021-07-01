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

#include "getinstanceshealthstatusresponse.h"
#include "getinstanceshealthstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetInstancesHealthStatusResponse
 * \brief The GetInstancesHealthStatusResponse class provides an interace for ServiceDiscovery GetInstancesHealthStatus responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  With AWS Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications
 *  run in. When an instance becomes available, you can call the AWS Cloud Map API to register the instance with AWS Cloud
 *  Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health check.
 *  Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up
 *  to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::getInstancesHealthStatus
 */

/*!
 * Constructs a GetInstancesHealthStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetInstancesHealthStatusResponse::GetInstancesHealthStatusResponse(
        const GetInstancesHealthStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetInstancesHealthStatusResponsePrivate(this), parent)
{
    setRequest(new GetInstancesHealthStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInstancesHealthStatusRequest * GetInstancesHealthStatusResponse::request() const
{
    Q_D(const GetInstancesHealthStatusResponse);
    return static_cast<const GetInstancesHealthStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery GetInstancesHealthStatus \a response.
 */
void GetInstancesHealthStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInstancesHealthStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::GetInstancesHealthStatusResponsePrivate
 * \brief The GetInstancesHealthStatusResponsePrivate class provides private implementation for GetInstancesHealthStatusResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetInstancesHealthStatusResponsePrivate object with public implementation \a q.
 */
GetInstancesHealthStatusResponsePrivate::GetInstancesHealthStatusResponsePrivate(
    GetInstancesHealthStatusResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery GetInstancesHealthStatus response element from \a xml.
 */
void GetInstancesHealthStatusResponsePrivate::parseGetInstancesHealthStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstancesHealthStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
