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

#include "attachpolicyrequest.h"
#include "attachpolicyrequest_p.h"
#include "attachpolicyresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/*!
 * \class QtAws::Organizations::AttachPolicyRequest
 * \brief The AttachPolicyRequest class provides an interface for Organizations AttachPolicy requests.
 *
 * \inmodule QtAwsOrganizations
 *
 *  <fullname>AWS Organizations API Reference</fullname>
 * 
 *  AWS Organizations is a web service that enables you to consolidate your multiple AWS accounts into an
 *  <i>organization</i> and centrally manage your accounts and their
 * 
 *  resources>
 * 
 *  This guide provides descriptions of the Organizations API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">AWS Organizations User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Organizations API Reference documents the Organizations API version
 * 
 *  2016-11-28> <note>
 * 
 *  As an alternative to using the API directly, you can use one of the AWS SDKs, which consist of libraries and sample code
 *  for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, and more). The SDKs provide a
 *  convenient way to create programmatic access to AWS Organizations. For example, the SDKs take care of cryptographically
 *  signing requests, managing errors, and retrying requests automatically. For more information about the AWS SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to Organizations. However, you also can use the
 *  Organizations Query API to make direct calls to the Organizations web service. To learn more about the Organizations
 *  Query API, see <a href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_query-requests.html">Making
 *  Query Requests</a> in the <i>AWS Organizations User Guide</i>. Organizations supports GET and POST requests for all
 *  actions. That is, the API does not require you to use GET for some actions and POST for others. However, GET requests
 *  are subject to the limitation size of a URL. Therefore, for operations that require larger sizes, use a POST
 * 
 *  request>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  When you send HTTP requests to AWS, you must sign the requests so that AWS can identify who sent them. You sign requests
 *  with your AWS access key, which consists of an access key ID and a secret access key. We strongly recommend that you do
 *  not create an access key for your root account. Anyone who has the access key for your root account has unrestricted
 *  access to all the resources in your account. Instead, create an access key for an IAM user account that has
 *  administrative privileges. As another option, use AWS Security Token Service to generate temporary security credentials,
 *  and use those credentials to sign requests.
 * 
 *  </p
 * 
 *  To sign requests, we recommend that you use <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. If you have an
 *  existing application that uses Signature Version 2, you do not have to update it to use Signature Version 4. However,
 *  some operations now require Signature Version 4. The documentation for operations that require version 4 indicate this
 *  requirement.
 * 
 *  </p
 * 
 *  When you use the AWS Command Line Interface (AWS CLI) or one of the AWS SDKs to make requests to AWS, these tools
 *  automatically sign the requests for you with the access key that you specify when you configure the
 * 
 *  tools>
 * 
 *  In this release, each organization can have only one root. In a future release, a single organization will support
 *  multiple
 * 
 *  roots>
 * 
 *  <b>Support and Feedback for AWS Organizations</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a> or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=219">AWS Organizations support forum</a>. For
 *  more information about the AWS support forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Endpoint to Call When Using the CLI or the AWS API</b>
 * 
 *  </p
 * 
 *  For the current release of Organizations, you must specify the <code>us-east-1</code> region for all AWS API and CLI
 *  calls. You can do this in the CLI by using these parameters and
 * 
 *  commands> <ul> <li>
 * 
 *  Use the following parameter with each command to specify both the endpoint and its
 * 
 *  region>
 * 
 *  <code>--endpoint-url https://organizations.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  Use the default endpoint, but configure your default region with this
 * 
 *  command>
 * 
 *  <code>aws configure set default.region us-east-1</code>
 * 
 *  </p </li> <li>
 * 
 *  Use the following parameter with each command to specify the
 * 
 *  endpoint>
 * 
 *  <code>--region us-east-1</code>
 * 
 *  </p </li> </ul>
 * 
 *  For the various SDKs used to call the APIs, see the documentation for the SDK of interest to learn how to direct the
 *  requests to a specific endpoint. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">Regions and Endpoints</a> in the <i>AWS
 *  General Reference</i>.
 * 
 *  </p
 * 
 *  <b>How examples are presented</b>
 * 
 *  </p
 * 
 *  The JSON returned by the AWS Organizations service as response to your requests is returned as a single long string
 *  without line breaks or formatting whitespace. Both line breaks and whitespace are included in the examples in this guide
 *  to improve readability. When example input parameters also would result in long strings that would extend beyond the
 *  screen, we insert line breaks to enhance readability. You should always submit the input as a single JSON text
 * 
 *  string>
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  AWS Organizations supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information collected by AWS CloudTrail, you can determine which requests were
 *  successfully made to Organizations, who made the request, when it was made, and so on. For more about AWS Organizations
 *  and its support for AWS CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html#orgs_cloudtrail-integration">Logging
 *  AWS Organizations Events with AWS CloudTrail</a> in the <i>AWS Organizations User Guide</i>. To learn more about
 *  CloudTrail, including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa OrganizationsClient::attachPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
AttachPolicyRequest::AttachPolicyRequest(const AttachPolicyRequest &other)
    : OrganizationsRequest(new AttachPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachPolicyRequest object.
 */
AttachPolicyRequest::AttachPolicyRequest()
    : OrganizationsRequest(new AttachPolicyRequestPrivate(OrganizationsRequest::AttachPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool AttachPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Organizations::AttachPolicyRequestPrivate
 * \brief The AttachPolicyRequestPrivate class provides private implementation for AttachPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a AttachPolicyRequestPrivate object for Organizations \a action,
 * with public implementation \a q.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const OrganizationsRequest::Action action, AttachPolicyRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachPolicyRequest
 * class' copy constructor.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const AttachPolicyRequestPrivate &other, AttachPolicyRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
