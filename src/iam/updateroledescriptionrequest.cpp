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

#include "updateroledescriptionrequest.h"
#include "updateroledescriptionrequest_p.h"
#include "updateroledescriptionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UpdateRoleDescriptionRequest
 * \brief The UpdateRoleDescriptionRequest class provides an interface for IAM UpdateRoleDescription requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service that you can use to manage users and user permissions under
 *  your AWS account. This guide provides descriptions of IAM actions that you can call programmatically. For general
 *  information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity and Access Management (IAM)</a>. For the
 *  user guide for IAM, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Using IAM</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .NET, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to IAM and AWS. For example,
 *  the SDKs take care of tasks such as cryptographically signing requests (see below), managing errors, and retrying
 *  requests automatically. For information about the AWS SDKs, including how to download and install them, see the <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a> page.
 * 
 *  </p </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to IAM. However, you can also use the IAM Query
 *  API to make direct calls to the IAM web service. To learn more about the IAM Query API, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using
 *  IAM</i> guide. IAM supports GET and POST requests for all actions. That is, the API does not require you to use GET for
 *  some actions and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for
 *  operations that require larger sizes, use a POST request.
 * 
 *  </p
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed using an access key ID and a secret access key. We strongly recommend that you do not use your
 *  AWS account access key ID and secret access key for everyday work with IAM. You can use the access key ID and secret
 *  access key for an IAM user or you can use the AWS Security Token Service to generate temporary security credentials and
 *  use those to sign
 * 
 *  requests>
 * 
 *  To sign requests, we recommend that you use <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. If you have an
 *  existing application that uses Signature Version 2, you do not have to update it to use Signature Version 4. However,
 *  some operations now require Signature Version 4. The documentation for operations that require version 4 indicate this
 *  requirement.
 * 
 *  </p
 * 
 *  <b>Additional Resources</b>
 * 
 *  </p
 * 
 *  For more information, see the
 * 
 *  following> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a>. This
 *  topic provides general information about the types of credentials used for accessing AWS.
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAMBestPractices.html">IAM Best Practices</a>. This topic
 *  presents a list of suggestions for using the IAM service to help secure your AWS resources.
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a>. This
 *  set of topics walk you through the process of signing a request using an access key ID and secret access key.
 *
 * \sa IamClient::updateRoleDescription
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRoleDescriptionRequest::UpdateRoleDescriptionRequest(const UpdateRoleDescriptionRequest &other)
    : IamRequest(new UpdateRoleDescriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRoleDescriptionRequest object.
 */
UpdateRoleDescriptionRequest::UpdateRoleDescriptionRequest()
    : IamRequest(new UpdateRoleDescriptionRequestPrivate(IamRequest::UpdateRoleDescriptionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRoleDescriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRoleDescriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoleDescriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoleDescriptionResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::UpdateRoleDescriptionRequestPrivate
 * \brief The UpdateRoleDescriptionRequestPrivate class provides private implementation for UpdateRoleDescriptionRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UpdateRoleDescriptionRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateRoleDescriptionRequestPrivate::UpdateRoleDescriptionRequestPrivate(
    const IamRequest::Action action, UpdateRoleDescriptionRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoleDescriptionRequest
 * class' copy constructor.
 */
UpdateRoleDescriptionRequestPrivate::UpdateRoleDescriptionRequestPrivate(
    const UpdateRoleDescriptionRequestPrivate &other, UpdateRoleDescriptionRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
