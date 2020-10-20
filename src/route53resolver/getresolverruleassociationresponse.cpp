/*
    Copyright 2013-2020 Paul Colby

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

#include "getresolverruleassociationresponse.h"
#include "getresolverruleassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::GetResolverRuleAssociationResponse
 * \brief The GetResolverRuleAssociationResponse class provides an interace for Route53Resolver GetResolverRuleAssociation responses.
 *
 * \inmodule QtAwsRoute53Resolver
 *
 *  Here's how you set up to query an Amazon Route 53 private hosted zone from your
 * 
 *  network> <ol> <li>
 * 
 *  Connect your network to a VPC using AWS Direct Connect or a
 * 
 *  VPN> </li> <li>
 * 
 *  Run the following AWS CLI command to create a Resolver
 * 
 *  endpoint>
 * 
 *  <code>create-resolver-endpoint --name [endpoint_name] --direction INBOUND --creator-request-id [unique_string]
 *  --security-group-ids [security_group_with_inbound_rules] --ip-addresses SubnetId=[subnet_id]
 *  SubnetId=[subnet_id_in_different_AZ]</code>
 * 
 *  </p
 * 
 *  Note the resolver endpoint ID that appears in the response. You'll use it in step
 * 
 *  3> </li> <li>
 * 
 *  Get the IP addresses for the Resolver
 * 
 *  endpoints>
 * 
 *  <code>get-resolver-endpoint --resolver-endpoint-id [resolver_endpoint_id]</code>
 * 
 *  </p </li> <li>
 * 
 *  In your network configuration, define the IP addresses that you got in step 3 as DNS
 * 
 *  servers>
 * 
 *  You can now query instance names in your VPCs and the names of records in your private hosted
 * 
 *  zone> </li> </ol>
 * 
 *  You can also perform the following operations using the AWS
 * 
 *  CLI> <ul> <li>
 * 
 *  <code>list-resolver-endpoints</code>: List all endpoints. The syntax includes options for pagination and
 * 
 *  filtering> </li> <li>
 * 
 *  <code>update-resolver-endpoints</code>: Add IP addresses to an endpoint or remove IP addresses from an endpoint.
 * 
 *  </p </li> </ul>
 * 
 *  To delete an endpoint, use the following AWS CLI
 * 
 *  command>
 * 
 *  <code>delete-resolver-endpoint --resolver-endpoint-id [resolver_endpoint_id]</code>
 *
 * \sa Route53ResolverClient::getResolverRuleAssociation
 */

/*!
 * Constructs a GetResolverRuleAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetResolverRuleAssociationResponse::GetResolverRuleAssociationResponse(
        const GetResolverRuleAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53ResolverResponse(new GetResolverRuleAssociationResponsePrivate(this), parent)
{
    setRequest(new GetResolverRuleAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResolverRuleAssociationRequest * GetResolverRuleAssociationResponse::request() const
{
    Q_D(const GetResolverRuleAssociationResponse);
    return static_cast<const GetResolverRuleAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Resolver GetResolverRuleAssociation \a response.
 */
void GetResolverRuleAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResolverRuleAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Resolver::GetResolverRuleAssociationResponsePrivate
 * \brief The GetResolverRuleAssociationResponsePrivate class provides private implementation for GetResolverRuleAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a GetResolverRuleAssociationResponsePrivate object with public implementation \a q.
 */
GetResolverRuleAssociationResponsePrivate::GetResolverRuleAssociationResponsePrivate(
    GetResolverRuleAssociationResponse * const q) : Route53ResolverResponsePrivate(q)
{

}

/*!
 * Parses a Route53Resolver GetResolverRuleAssociation response element from \a xml.
 */
void GetResolverRuleAssociationResponsePrivate::parseGetResolverRuleAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResolverRuleAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Resolver
} // namespace QtAws
