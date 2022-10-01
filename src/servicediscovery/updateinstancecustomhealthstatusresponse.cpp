// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinstancecustomhealthstatusresponse.h"
#include "updateinstancecustomhealthstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateInstanceCustomHealthStatusResponse
 * \brief The UpdateInstanceCustomHealthStatusResponse class provides an interace for ServiceDiscovery UpdateInstanceCustomHealthStatus responses.
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
 * \sa ServiceDiscoveryClient::updateInstanceCustomHealthStatus
 */

/*!
 * Constructs a UpdateInstanceCustomHealthStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInstanceCustomHealthStatusResponse::UpdateInstanceCustomHealthStatusResponse(
        const UpdateInstanceCustomHealthStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdateInstanceCustomHealthStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceCustomHealthStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInstanceCustomHealthStatusRequest * UpdateInstanceCustomHealthStatusResponse::request() const
{
    Q_D(const UpdateInstanceCustomHealthStatusResponse);
    return static_cast<const UpdateInstanceCustomHealthStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery UpdateInstanceCustomHealthStatus \a response.
 */
void UpdateInstanceCustomHealthStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInstanceCustomHealthStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateInstanceCustomHealthStatusResponsePrivate
 * \brief The UpdateInstanceCustomHealthStatusResponsePrivate class provides private implementation for UpdateInstanceCustomHealthStatusResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateInstanceCustomHealthStatusResponsePrivate object with public implementation \a q.
 */
UpdateInstanceCustomHealthStatusResponsePrivate::UpdateInstanceCustomHealthStatusResponsePrivate(
    UpdateInstanceCustomHealthStatusResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery UpdateInstanceCustomHealthStatus response element from \a xml.
 */
void UpdateInstanceCustomHealthStatusResponsePrivate::parseUpdateInstanceCustomHealthStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceCustomHealthStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
