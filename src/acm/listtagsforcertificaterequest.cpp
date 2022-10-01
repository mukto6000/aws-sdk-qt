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

#include "listtagsforcertificaterequest.h"
#include "listtagsforcertificaterequest_p.h"
#include "listtagsforcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ListTagsForCertificateRequest
 * \brief The ListTagsForCertificateRequest class provides an interface for Acm ListTagsForCertificate requests.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::listTagsForCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForCertificateRequest::ListTagsForCertificateRequest(const ListTagsForCertificateRequest &other)
    : AcmRequest(new ListTagsForCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForCertificateRequest object.
 */
ListTagsForCertificateRequest::ListTagsForCertificateRequest()
    : AcmRequest(new ListTagsForCertificateRequestPrivate(AcmRequest::ListTagsForCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Acm::ListTagsForCertificateRequestPrivate
 * \brief The ListTagsForCertificateRequestPrivate class provides private implementation for ListTagsForCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ListTagsForCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
ListTagsForCertificateRequestPrivate::ListTagsForCertificateRequestPrivate(
    const AcmRequest::Action action, ListTagsForCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForCertificateRequest
 * class' copy constructor.
 */
ListTagsForCertificateRequestPrivate::ListTagsForCertificateRequestPrivate(
    const ListTagsForCertificateRequestPrivate &other, ListTagsForCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace Acm
} // namespace QtAws
