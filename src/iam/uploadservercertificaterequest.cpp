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

#include "uploadservercertificaterequest.h"
#include "uploadservercertificaterequest_p.h"
#include "uploadservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UploadServerCertificateRequest
 * \brief The UploadServerCertificateRequest class provides an interface for IAM UploadServerCertificate requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::uploadServerCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UploadServerCertificateRequest::UploadServerCertificateRequest(const UploadServerCertificateRequest &other)
    : IamRequest(new UploadServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadServerCertificateRequest object.
 */
UploadServerCertificateRequest::UploadServerCertificateRequest()
    : IamRequest(new UploadServerCertificateRequestPrivate(IamRequest::UploadServerCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UploadServerCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadServerCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UploadServerCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::UploadServerCertificateRequestPrivate
 * \brief The UploadServerCertificateRequestPrivate class provides private implementation for UploadServerCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UploadServerCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UploadServerCertificateRequestPrivate::UploadServerCertificateRequestPrivate(
    const IamRequest::Action action, UploadServerCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadServerCertificateRequest
 * class' copy constructor.
 */
UploadServerCertificateRequestPrivate::UploadServerCertificateRequestPrivate(
    const UploadServerCertificateRequestPrivate &other, UploadServerCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
