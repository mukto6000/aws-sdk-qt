// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsresponse.h"
#include "removetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::RemoveTagsResponse
 * \brief The RemoveTagsResponse class provides an interace for ElasticLoadBalancing RemoveTags responses.
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
 * \sa ElasticLoadBalancingClient::removeTags
 */

/*!
 * Constructs a RemoveTagsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsResponse::RemoveTagsResponse(
        const RemoveTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new RemoveTagsResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsRequest * RemoveTagsResponse::request() const
{
    Q_D(const RemoveTagsResponse);
    return static_cast<const RemoveTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancing RemoveTags \a response.
 */
void RemoveTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancing::RemoveTagsResponsePrivate
 * \brief The RemoveTagsResponsePrivate class provides private implementation for RemoveTagsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a RemoveTagsResponsePrivate object with public implementation \a q.
 */
RemoveTagsResponsePrivate::RemoveTagsResponsePrivate(
    RemoveTagsResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancing RemoveTags response element from \a xml.
 */
void RemoveTagsResponsePrivate::parseRemoveTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
