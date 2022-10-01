// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyloadbalancerattributesresponse.h"
#include "modifyloadbalancerattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ModifyLoadBalancerAttributesResponse
 * \brief The ModifyLoadBalancerAttributesResponse class provides an interace for ElasticLoadBalancingv2 ModifyLoadBalancerAttributes responses.
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 *  the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 *  that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 *  specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 *  the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 *  to the targets, and with health check settings to be used when checking the health status of the
 * 
 *  targets>
 * 
 *  Elastic Load Balancing supports the following types of load balancers: Application Load Balancers, Network Load
 *  Balancers, Gateway Load Balancers, and Classic Load Balancers. This reference covers the following load balancer
 * 
 *  types> <ul> <li>
 * 
 *  Application Load Balancer - Operates at the application layer (layer 7) and supports HTTP and
 * 
 *  HTTPS> </li> <li>
 * 
 *  Network Load Balancer - Operates at the transport layer (layer 4) and supports TCP, TLS, and
 * 
 *  UDP> </li> <li>
 * 
 *  Gateway Load Balancer - Operates at the network layer (layer
 * 
 *  3)> </li> </ul>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load
 *  Balancing User
 * 
 *  Guide</a>>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 *
 * \sa ElasticLoadBalancingv2Client::modifyLoadBalancerAttributes
 */

/*!
 * Constructs a ModifyLoadBalancerAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyLoadBalancerAttributesResponse::ModifyLoadBalancerAttributesResponse(
        const ModifyLoadBalancerAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyLoadBalancerAttributesResponsePrivate(this), parent)
{
    setRequest(new ModifyLoadBalancerAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyLoadBalancerAttributesRequest * ModifyLoadBalancerAttributesResponse::request() const
{
    Q_D(const ModifyLoadBalancerAttributesResponse);
    return static_cast<const ModifyLoadBalancerAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancingv2 ModifyLoadBalancerAttributes \a response.
 */
void ModifyLoadBalancerAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyLoadBalancerAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::ModifyLoadBalancerAttributesResponsePrivate
 * \brief The ModifyLoadBalancerAttributesResponsePrivate class provides private implementation for ModifyLoadBalancerAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ModifyLoadBalancerAttributesResponsePrivate object with public implementation \a q.
 */
ModifyLoadBalancerAttributesResponsePrivate::ModifyLoadBalancerAttributesResponsePrivate(
    ModifyLoadBalancerAttributesResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancingv2 ModifyLoadBalancerAttributes response element from \a xml.
 */
void ModifyLoadBalancerAttributesResponsePrivate::parseModifyLoadBalancerAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLoadBalancerAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
