// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatewebaclrequest.h"
#include "disassociatewebaclrequest_p.h"
#include "disassociatewebaclresponse.h"
#include "wafv2request_p.h"

namespace QtAws {
namespace Wafv2 {

/*!
 * \class QtAws::Wafv2::DisassociateWebACLRequest
 * \brief The DisassociateWebACLRequest class provides an interface for Wafv2 DisassociateWebACL requests.
 *
 * \inmodule QtAwsWafv2
 *
 *  <fullname>WAF</fullname> <note>
 * 
 *  This is the latest version of the <b>WAF</b> API, released in November, 2019. The names of the entities that you use to
 *  access this API, like endpoints and namespaces, all have the versioning information added, like "V2" or "v2", to
 *  distinguish from the prior version. We recommend migrating your resources to this version, because it has a number of
 *  significant
 * 
 *  improvements>
 * 
 *  If you used WAF prior to this release, you can't use this WAFV2 API to access any WAF resources that you created before.
 *  You can access your old rules, web ACLs, and other WAF resources only through the WAF Classic APIs. The WAF Classic APIs
 *  have retained the prior names, endpoints, and namespaces.
 * 
 *  </p
 * 
 *  For information, including how to migrate your WAF resources to this version, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF Developer Guide</a>.
 * 
 *  </p </note>
 * 
 *  WAF is a web application firewall that lets you monitor the HTTP and HTTPS requests that are forwarded to Amazon
 *  CloudFront, an Amazon API Gateway REST API, an Application Load Balancer, an AppSync GraphQL API, or an Amazon Cognito
 *  user pool. WAF also lets you control access to your content. Based on conditions that you specify, such as the IP
 *  addresses that requests originate from or the values of query strings, the Amazon API Gateway REST API, CloudFront
 *  distribution, the Application Load Balancer, the AppSync GraphQL API, or the Amazon Cognito user pool responds to
 *  requests either with the requested content or with an HTTP 403 status code (Forbidden). You also can configure
 *  CloudFront to return a custom error page when a request is
 * 
 *  blocked>
 * 
 *  This API guide is for developers who need detailed information about WAF API actions, data types, and errors. For
 *  detailed information about WAF features and an overview of how to use WAF, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF Developer
 * 
 *  Guide</a>>
 * 
 *  You can make calls using the endpoints listed in <a href="https://docs.aws.amazon.com/general/latest/gr/waf.html">WAF
 *  endpoints and quotas</a>.
 * 
 *  </p <ul> <li>
 * 
 *  For regional applications, you can use any of the endpoints in the list. A regional application can be an Application
 *  Load Balancer (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon Cognito user pool.
 * 
 *  </p </li> <li>
 * 
 *  For Amazon CloudFront applications, you must use the API endpoint listed for US East (N. Virginia):
 * 
 *  us-east-1> </li> </ul>
 * 
 *  Alternatively, you can use one of the Amazon Web Services SDKs to access an API that's tailored to the programming
 *  language or platform that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">Amazon Web
 *  Services
 * 
 *  SDKs</a>>
 * 
 *  We currently provide two versions of the WAF API: this API and the prior versions, the classic WAF APIs. This new API
 *  provides the same functionality as the older versions, with the following major
 * 
 *  improvements> <ul> <li>
 * 
 *  You use one API for both global and regional applications. Where you need to distinguish the scope, you specify a
 *  <code>Scope</code> parameter and set it to <code>CLOUDFRONT</code> or <code>REGIONAL</code>.
 * 
 *  </p </li> <li>
 * 
 *  You can define a web ACL or rule group with a single call, and update it with a single call. You define all rule
 *  specifications in JSON format, and pass them to your rule group or web ACL
 * 
 *  calls> </li> <li>
 * 
 *  The limits WAF places on the use of rules more closely reflects the cost of running each type of rule. Rule groups
 *  include capacity settings, so you know the maximum cost of a rule group when you use
 *
 * \sa Wafv2Client::disassociateWebACL
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateWebACLRequest::DisassociateWebACLRequest(const DisassociateWebACLRequest &other)
    : Wafv2Request(new DisassociateWebACLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateWebACLRequest object.
 */
DisassociateWebACLRequest::DisassociateWebACLRequest()
    : Wafv2Request(new DisassociateWebACLRequestPrivate(Wafv2Request::DisassociateWebACLAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateWebACLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateWebACLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateWebACLRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateWebACLResponse(*this, reply);
}

/*!
 * \class QtAws::Wafv2::DisassociateWebACLRequestPrivate
 * \brief The DisassociateWebACLRequestPrivate class provides private implementation for DisassociateWebACLRequest.
 * \internal
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a DisassociateWebACLRequestPrivate object for Wafv2 \a action,
 * with public implementation \a q.
 */
DisassociateWebACLRequestPrivate::DisassociateWebACLRequestPrivate(
    const Wafv2Request::Action action, DisassociateWebACLRequest * const q)
    : Wafv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateWebACLRequest
 * class' copy constructor.
 */
DisassociateWebACLRequestPrivate::DisassociateWebACLRequestPrivate(
    const DisassociateWebACLRequestPrivate &other, DisassociateWebACLRequest * const q)
    : Wafv2RequestPrivate(other, q)
{

}

} // namespace Wafv2
} // namespace QtAws
