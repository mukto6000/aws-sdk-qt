// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresolverendpointresponse.h"
#include "getresolverendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::GetResolverEndpointResponse
 * \brief The GetResolverEndpointResponse class provides an interace for Route53Resolver GetResolverEndpoint responses.
 *
 * \inmodule QtAwsRoute53Resolver
 *
 *  When you create a VPC using Amazon VPC, you automatically get DNS resolution within the VPC from Route 53 Resolver. By
 *  default, Resolver answers DNS queries for VPC domain names such as domain names for EC2 instances or Elastic Load
 *  Balancing load balancers. Resolver performs recursive lookups against public name servers for all other domain
 * 
 *  names>
 * 
 *  You can also configure DNS resolution between your VPC and your network over a Direct Connect or VPN
 * 
 *  connection>
 * 
 *  <b>Forward DNS queries from resolvers on your network to Route 53 Resolver</b>
 * 
 *  </p
 * 
 *  DNS resolvers on your network can forward DNS queries to Resolver in a specified VPC. This allows your DNS resolvers to
 *  easily resolve domain names for Amazon Web Services resources such as EC2 instances or records in a Route 53 private
 *  hosted zone. For more information, see <a
 *  href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-network-to-vpc">How
 *  DNS Resolvers on Your Network Forward DNS Queries to Route 53 Resolver</a> in the <i>Amazon Route 53 Developer
 * 
 *  Guide</i>>
 * 
 *  <b>Conditionally forward queries from a VPC to resolvers on your network</b>
 * 
 *  </p
 * 
 *  You can configure Resolver to forward queries that it receives from EC2 instances in your VPCs to DNS resolvers on your
 *  network. To forward selected queries, you create Resolver rules that specify the domain names for the DNS queries that
 *  you want to forward (such as example.com), and the IP addresses of the DNS resolvers on your network that you want to
 *  forward the queries to. If a query matches multiple rules (example.com, acme.example.com), Resolver chooses the rule
 *  with the most specific match (acme.example.com) and forwards the query to the IP addresses that you specified in that
 *  rule. For more information, see <a
 *  href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-vpc-to-network">How
 *  Route 53 Resolver Forwards DNS Queries from Your VPCs to Your Network</a> in the <i>Amazon Route 53 Developer
 * 
 *  Guide</i>>
 * 
 *  Like Amazon VPC, Resolver is Regional. In each Region where you have VPCs, you can choose whether to forward queries
 *  from your VPCs to your network (outbound queries), from your network to your VPCs (inbound queries), or
 *
 * \sa Route53ResolverClient::getResolverEndpoint
 */

/*!
 * Constructs a GetResolverEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetResolverEndpointResponse::GetResolverEndpointResponse(
        const GetResolverEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53ResolverResponse(new GetResolverEndpointResponsePrivate(this), parent)
{
    setRequest(new GetResolverEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResolverEndpointRequest * GetResolverEndpointResponse::request() const
{
    Q_D(const GetResolverEndpointResponse);
    return static_cast<const GetResolverEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Resolver GetResolverEndpoint \a response.
 */
void GetResolverEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResolverEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Resolver::GetResolverEndpointResponsePrivate
 * \brief The GetResolverEndpointResponsePrivate class provides private implementation for GetResolverEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a GetResolverEndpointResponsePrivate object with public implementation \a q.
 */
GetResolverEndpointResponsePrivate::GetResolverEndpointResponsePrivate(
    GetResolverEndpointResponse * const q) : Route53ResolverResponsePrivate(q)
{

}

/*!
 * Parses a Route53Resolver GetResolverEndpoint response element from \a xml.
 */
void GetResolverEndpointResponsePrivate::parseGetResolverEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResolverEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Resolver
} // namespace QtAws
