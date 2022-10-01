// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesigningcertificaterequest.h"
#include "updatesigningcertificaterequest_p.h"
#include "updatesigningcertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateSigningCertificateRequest
 * \brief The UpdateSigningCertificateRequest class provides an interface for Iam UpdateSigningCertificate requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::updateSigningCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSigningCertificateRequest::UpdateSigningCertificateRequest(const UpdateSigningCertificateRequest &other)
    : IamRequest(new UpdateSigningCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSigningCertificateRequest object.
 */
UpdateSigningCertificateRequest::UpdateSigningCertificateRequest()
    : IamRequest(new UpdateSigningCertificateRequestPrivate(IamRequest::UpdateSigningCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSigningCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSigningCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSigningCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSigningCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateSigningCertificateRequestPrivate
 * \brief The UpdateSigningCertificateRequestPrivate class provides private implementation for UpdateSigningCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateSigningCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateSigningCertificateRequestPrivate::UpdateSigningCertificateRequestPrivate(
    const IamRequest::Action action, UpdateSigningCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSigningCertificateRequest
 * class' copy constructor.
 */
UpdateSigningCertificateRequestPrivate::UpdateSigningCertificateRequestPrivate(
    const UpdateSigningCertificateRequestPrivate &other, UpdateSigningCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
