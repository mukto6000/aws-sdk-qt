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

#include "revokecertificaterequest.h"
#include "revokecertificaterequest_p.h"
#include "revokecertificateresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::RevokeCertificateRequest
 * \brief The RevokeCertificateRequest class provides an interface for AcmPca RevokeCertificate requests.
 *
 * \inmodule QtAwsAcmPca
 *
 *  This is the <i>Certificate Manager Private Certificate Authority (PCA) API Reference</i>. It provides descriptions,
 *  syntax, and usage examples for each of the actions and data types involved in creating and managing a private
 *  certificate authority (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the API request parameters and the JSON response. Alternatively, you can use one
 *  of the Amazon Web Services SDKs to access an API that is tailored to the programming language or platform that you
 *  prefer. For more information, see <a href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  Each ACM Private CA API operation has a quota that determines the number of times the operation can be called per
 *  second. ACM Private CA throttles API requests at different rates depending on the operation. Throttling means that ACM
 *  Private CA rejects an otherwise valid request because the request exceeds the operation's quota for the number of
 *  requests per second. When a request is throttled, ACM Private CA returns a <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/CommonErrors.html">ThrottlingException</a> error. ACM
 *  Private CA does not guarantee a minimum request rate for APIs.
 * 
 *  </p
 * 
 *  To see an up-to-date list of your ACM Private CA quotas, or to request a quota increase, log into your Amazon Web
 *  Services account and visit the <a href="https://console.aws.amazon.com/servicequotas/">Service Quotas</a>
 *
 * \sa AcmPcaClient::revokeCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeCertificateRequest::RevokeCertificateRequest(const RevokeCertificateRequest &other)
    : AcmPcaRequest(new RevokeCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeCertificateRequest object.
 */
RevokeCertificateRequest::RevokeCertificateRequest()
    : AcmPcaRequest(new RevokeCertificateRequestPrivate(AcmPcaRequest::RevokeCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RevokeCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::AcmPca::RevokeCertificateRequestPrivate
 * \brief The RevokeCertificateRequestPrivate class provides private implementation for RevokeCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a RevokeCertificateRequestPrivate object for AcmPca \a action,
 * with public implementation \a q.
 */
RevokeCertificateRequestPrivate::RevokeCertificateRequestPrivate(
    const AcmPcaRequest::Action action, RevokeCertificateRequest * const q)
    : AcmPcaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeCertificateRequest
 * class' copy constructor.
 */
RevokeCertificateRequestPrivate::RevokeCertificateRequestPrivate(
    const RevokeCertificateRequestPrivate &other, RevokeCertificateRequest * const q)
    : AcmPcaRequestPrivate(other, q)
{

}

} // namespace AcmPca
} // namespace QtAws
