// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloadbalancerpolicyresponse.h"
#include "deleteloadbalancerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DeleteLoadBalancerPolicyResponse
 * \brief The DeleteLoadBalancerPolicyResponse class provides an interace for ElasticLoadBalancing DeleteLoadBalancerPolicy responses.
 *
 * \inmodule QtAwsElasticLoadBalancing
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 *  of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 *  traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 *  listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 *  protocol and port number for connections from the load balancer to the
 * 
 *  instances>
 * 
 *  Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 *  Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 *  href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 *  Load Balancers and Network Load
 * 
 *  Balancers>
 * 
 *  To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 *  instances with the load balancer using
 * 
 *  <a>RegisterInstancesWithLoadBalancer</a>>
 * 
 *  All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 *  repeat an operation, it succeeds with a 200 OK response
 *
 * \sa ElasticLoadBalancingClient::deleteLoadBalancerPolicy
 */

/*!
 * Constructs a DeleteLoadBalancerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLoadBalancerPolicyResponse::DeleteLoadBalancerPolicyResponse(
        const DeleteLoadBalancerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DeleteLoadBalancerPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteLoadBalancerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLoadBalancerPolicyRequest * DeleteLoadBalancerPolicyResponse::request() const
{
    Q_D(const DeleteLoadBalancerPolicyResponse);
    return static_cast<const DeleteLoadBalancerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancing DeleteLoadBalancerPolicy \a response.
 */
void DeleteLoadBalancerPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLoadBalancerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancing::DeleteLoadBalancerPolicyResponsePrivate
 * \brief The DeleteLoadBalancerPolicyResponsePrivate class provides private implementation for DeleteLoadBalancerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a DeleteLoadBalancerPolicyResponsePrivate object with public implementation \a q.
 */
DeleteLoadBalancerPolicyResponsePrivate::DeleteLoadBalancerPolicyResponsePrivate(
    DeleteLoadBalancerPolicyResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancing DeleteLoadBalancerPolicy response element from \a xml.
 */
void DeleteLoadBalancerPolicyResponsePrivate::parseDeleteLoadBalancerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoadBalancerPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
