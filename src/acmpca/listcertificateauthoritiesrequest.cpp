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

#include "listcertificateauthoritiesrequest.h"
#include "listcertificateauthoritiesrequest_p.h"
#include "listcertificateauthoritiesresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::ListCertificateAuthoritiesRequest
 * \brief The ListCertificateAuthoritiesRequest class provides an interface for ACMPCA ListCertificateAuthorities requests.
 *
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a throttling limit which determines the number of times the action can be called per
 *  second. For more information, see <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API Rate Limits in ACM Private
 *  CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::listCertificateAuthorities
 */

/*!
 * Constructs a copy of \a other.
 */
ListCertificateAuthoritiesRequest::ListCertificateAuthoritiesRequest(const ListCertificateAuthoritiesRequest &other)
    : AcmpcaRequest(new ListCertificateAuthoritiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCertificateAuthoritiesRequest object.
 */
ListCertificateAuthoritiesRequest::ListCertificateAuthoritiesRequest()
    : AcmpcaRequest(new ListCertificateAuthoritiesRequestPrivate(AcmpcaRequest::ListCertificateAuthoritiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCertificateAuthoritiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCertificateAuthoritiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCertificateAuthoritiesRequest::response(QNetworkReply * const reply) const
{
    return new ListCertificateAuthoritiesResponse(*this, reply);
}

/*!
 * \class QtAws::ACMPCA::ListCertificateAuthoritiesRequestPrivate
 * \brief The ListCertificateAuthoritiesRequestPrivate class provides private implementation for ListCertificateAuthoritiesRequest.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a ListCertificateAuthoritiesRequestPrivate object for Acmpca \a action,
 * with public implementation \a q.
 */
ListCertificateAuthoritiesRequestPrivate::ListCertificateAuthoritiesRequestPrivate(
    const AcmpcaRequest::Action action, ListCertificateAuthoritiesRequest * const q)
    : AcmpcaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCertificateAuthoritiesRequest
 * class' copy constructor.
 */
ListCertificateAuthoritiesRequestPrivate::ListCertificateAuthoritiesRequestPrivate(
    const ListCertificateAuthoritiesRequestPrivate &other, ListCertificateAuthoritiesRequest * const q)
    : AcmpcaRequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
