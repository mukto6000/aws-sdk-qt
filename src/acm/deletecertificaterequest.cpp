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

#include "deletecertificaterequest.h"
#include "deletecertificaterequest_p.h"
#include "deletecertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::DeleteCertificateRequest
 * \brief The DeleteCertificateRequest class provides an interface for ACM DeleteCertificate requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
 *
 * \sa AcmClient::deleteCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCertificateRequest::DeleteCertificateRequest(const DeleteCertificateRequest &other)
    : AcmRequest(new DeleteCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCertificateRequest object.
 */
DeleteCertificateRequest::DeleteCertificateRequest()
    : AcmRequest(new DeleteCertificateRequestPrivate(AcmRequest::DeleteCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::DeleteCertificateRequestPrivate
 * \brief The DeleteCertificateRequestPrivate class provides private implementation for DeleteCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a DeleteCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
DeleteCertificateRequestPrivate::DeleteCertificateRequestPrivate(
    const AcmRequest::Action action, DeleteCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCertificateRequest
 * class' copy constructor.
 */
DeleteCertificateRequestPrivate::DeleteCertificateRequestPrivate(
    const DeleteCertificateRequestPrivate &other, DeleteCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
