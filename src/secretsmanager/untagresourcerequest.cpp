/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::UntagResourceRequest
 *
 * \brief The UntagResourceRequest class encapsulates SecretsManager UntagResource requests.
 *
 * \ingroup SecretsManager
 *
 *  <fullname>AWS Secrets Manager API Reference</fullname>
 * 
 *  AWS Secrets Manager is a web service that enables you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the AWS Secrets Manager API. For more information about using this service, see the
 *  <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">AWS
 *  Secrets Manager User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the AWS Secrets Manager API Reference documents the AWS Secrets Manager API version
 * 
 *  2017-10-17> <note>
 * 
 *  As an alternative to using the API directly, you can use one of the AWS SDKs, which consist of libraries and sample code
 *  for various programming languages and platforms (such as Java, Ruby, .NET, iOS, and Android). The SDKs provide a
 *  convenient way to create programmatic access to AWS Secrets Manager. For example, the SDKs take care of
 *  cryptographically signing requests, managing errors, and retrying requests automatically. For more information about the
 *  AWS SDKs, including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to AWS Secrets Manager. However, you also can use
 *  the AWS Secrets Manager HTTP Query API to make direct calls to the AWS Secrets Manager web service. To learn more about
 *  the AWS Secrets Manager HTTP Query API, see <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/orgs_query-requests.html">Making Query Requests</a> in
 *  the <i>AWS Secrets Manager User Guide</i>.
 * 
 *  </p
 * 
 *  AWS Secrets Manager supports GET and POST requests for all actions. That is, the API doesn't require you to use GET for
 *  some actions and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for
 *  operations that require larger sizes, use a POST
 * 
 *  request>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  When you send HTTP requests to AWS, you must sign the requests so that AWS can identify who sent them. You sign requests
 *  with your AWS access key, which consists of an access key ID and a secret access key. We strongly recommend that you
 *  don't create an access key for your root account. Anyone who has the access key for your root account has unrestricted
 *  access to all the resources in your account. Instead, create an access key for an IAM user account that has the
 *  permissions required for the task at hand. As another option, use AWS Security Token Service to generate temporary
 *  security credentials, and use those credentials to sign requests.
 * 
 *  </p
 * 
 *  To sign requests, you must use <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 *  Version 4</a>. If you have an existing application that uses Signature Version 2, you must update it to use Signature
 *  Version 4.
 * 
 *  </p
 * 
 *  When you use the AWS Command Line Interface (AWS CLI) or one of the AWS SDKs to make requests to AWS, these tools
 *  automatically sign the requests for you with the access key that you specify when you configure the
 * 
 *  tools>
 * 
 *  <b>Support and Feedback for AWS Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">AWS Secrets Manager Discussion Forum</a>.
 *  For more information about the AWS Discussion Forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>How examples are presented</b>
 * 
 *  </p
 * 
 *  The JSON that AWS Secrets Manager returns as a response to your requests is a single long string without line breaks or
 *  white space formatting. Both line breaks and white space are included in the examples in this guide to improve
 *  readability. When example input parameters would also result in long strings that extend beyond the screen, we insert
 *  line breaks to enhance readability. You should always submit the input as a single JSON text
 * 
 *  string>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS Secrets Manager supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information that's collected by AWS CloudTrail, you can determine which requests
 *  were successfully made to AWS Secrets Manager, who made the request, when it was made, and so on. For more about AWS
 *  Secrets Manager and its support for AWS CloudTrail, see <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/orgs_cloudtrail-integration.html">Logging AWS Secrets
 *  Manager Events with AWS CloudTrail</a> in the <i>AWS Secrets Manager User Guide</i>. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa SecretsManagerClient::untagResource
 */

/*!
 * @brief  Constructs a new UntagResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : SecretsManagerRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : SecretsManagerRequest(new UntagResourceRequestPrivate(SecretsManagerRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UntagResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UntagResourceRequestPrivate
 *
 * @brief  Private implementation for UntagResourceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const SecretsManagerRequest::Action action, UntagResourceRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
