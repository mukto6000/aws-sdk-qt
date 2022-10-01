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

#include "getroutingcontrolstateresponse.h"
#include "getroutingcontrolstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryCluster {

/*!
 * \class QtAws::Route53RecoveryCluster::GetRoutingControlStateResponse
 * \brief The GetRoutingControlStateResponse class provides an interace for Route53RecoveryCluster GetRoutingControlState responses.
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 *
 *  Welcome to the Routing Control (Recovery Cluster) API Reference Guide for Amazon Route 53 Application Recovery
 * 
 *  Controller>
 * 
 *  With Route 53 ARC, you can use routing control with extreme reliability to recover applications by rerouting traffic
 *  across Availability Zones or Amazon Web Services Regions. Routing controls are simple on/off switches hosted on a highly
 *  available cluster in Route 53 ARC. A cluster provides a set of five redundant Regional endpoints against which you can
 *  run API calls to get or update the state of routing controls. To implement failover, you set one routing control On and
 *  another one Off, to reroute traffic from one Availability Zone or Amazon Web Services Region to another.
 * 
 *  </p
 * 
 *  <i>Be aware that you must specify a Regional endpoint for a cluster when you work with API cluster operations to get or
 *  update routing control states in Route 53 ARC.</i> In addition, you must specify the US West (Oregon) Region for Route
 *  53 ARC API calls. For example, use the parameter <code>--region us-west-2</code> with AWS CLI commands. For more
 *  information, see <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.api.html"> Get and
 *  update routing control states using the API</a> in the Amazon Route 53 Application Recovery Controller Developer
 * 
 *  Guide>
 * 
 *  This API guide includes information about the API operations for how to get and update routing control states in Route
 *  53 ARC. To work with routing control in Route 53 ARC, you must first create the required components (clusters, control
 *  panels, and routing controls) using the recovery cluster configuration
 * 
 *  API>
 * 
 *  For more information about working with routing control in Route 53 ARC, see the
 * 
 *  following> <ul> <li>
 * 
 *  Create clusters, control panels, and routing controls by using API operations. For more information, see the <a
 *  href="https://docs.aws.amazon.com/recovery-cluster/latest/api/">Recovery Control Configuration API Reference Guide for
 *  Amazon Route 53 Application Recovery
 * 
 *  Controller</a>> </li> <li>
 * 
 *  Learn about the components in recovery control, including clusters, routing controls, and control panels, and how to
 *  work with Route 53 ARC in the Amazon Web Services console. For more information, see <a
 *  href="https://docs.aws.amazon.com/r53recovery/latest/dg/introduction-components.html#introduction-components-routing">
 *  Recovery control components</a> in the Amazon Route 53 Application Recovery Controller Developer
 * 
 *  Guide> </li> <li>
 * 
 *  Route 53 ARC also provides readiness checks that continually audit resources to help make sure that your applications
 *  are scaled and ready to handle failover traffic. For more information about the related API operations, see the <a
 *  href="https://docs.aws.amazon.com/recovery-readiness/latest/api/">Recovery Readiness API Reference Guide for Amazon
 *  Route 53 Application Recovery
 * 
 *  Controller</a>> </li> <li>
 * 
 *  For more information about creating resilient applications and preparing for recovery readiness with Route 53 ARC, see
 *  the <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/">Amazon Route 53 Application Recovery Controller
 *  Developer
 *
 * \sa Route53RecoveryClusterClient::getRoutingControlState
 */

/*!
 * Constructs a GetRoutingControlStateResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoutingControlStateResponse::GetRoutingControlStateResponse(
        const GetRoutingControlStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryClusterResponse(new GetRoutingControlStateResponsePrivate(this), parent)
{
    setRequest(new GetRoutingControlStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoutingControlStateRequest * GetRoutingControlStateResponse::request() const
{
    Q_D(const GetRoutingControlStateResponse);
    return static_cast<const GetRoutingControlStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryCluster GetRoutingControlState \a response.
 */
void GetRoutingControlStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoutingControlStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryCluster::GetRoutingControlStateResponsePrivate
 * \brief The GetRoutingControlStateResponsePrivate class provides private implementation for GetRoutingControlStateResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * Constructs a GetRoutingControlStateResponsePrivate object with public implementation \a q.
 */
GetRoutingControlStateResponsePrivate::GetRoutingControlStateResponsePrivate(
    GetRoutingControlStateResponse * const q) : Route53RecoveryClusterResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryCluster GetRoutingControlState response element from \a xml.
 */
void GetRoutingControlStateResponsePrivate::parseGetRoutingControlStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoutingControlStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryCluster
} // namespace QtAws
