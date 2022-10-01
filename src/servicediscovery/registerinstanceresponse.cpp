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

#include "registerinstanceresponse.h"
#include "registerinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::RegisterInstanceResponse
 * \brief The RegisterInstanceResponse class provides an interace for ServiceDiscovery RegisterInstance responses.
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
 * \sa ServiceDiscoveryClient::registerInstance
 */

/*!
 * Constructs a RegisterInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterInstanceResponse::RegisterInstanceResponse(
        const RegisterInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new RegisterInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterInstanceRequest * RegisterInstanceResponse::request() const
{
    Q_D(const RegisterInstanceResponse);
    return static_cast<const RegisterInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery RegisterInstance \a response.
 */
void RegisterInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::RegisterInstanceResponsePrivate
 * \brief The RegisterInstanceResponsePrivate class provides private implementation for RegisterInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a RegisterInstanceResponsePrivate object with public implementation \a q.
 */
RegisterInstanceResponsePrivate::RegisterInstanceResponsePrivate(
    RegisterInstanceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery RegisterInstance response element from \a xml.
 */
void RegisterInstanceResponsePrivate::parseRegisterInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
