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

#include "deletereceiptfilterrequest.h"
#include "deletereceiptfilterrequest_p.h"
#include "deletereceiptfilterresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteReceiptFilterRequest
 * \brief The DeleteReceiptFilterRequest class provides an interface for SES DeleteReceiptFilter requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::deleteReceiptFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReceiptFilterRequest::DeleteReceiptFilterRequest(const DeleteReceiptFilterRequest &other)
    : SesRequest(new DeleteReceiptFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReceiptFilterRequest object.
 */
DeleteReceiptFilterRequest::DeleteReceiptFilterRequest()
    : SesRequest(new DeleteReceiptFilterRequestPrivate(SesRequest::DeleteReceiptFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReceiptFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReceiptFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReceiptFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptFilterResponse(*this, reply);
}

/*!
 * \class QtAws::SES::DeleteReceiptFilterRequestPrivate
 * \brief The DeleteReceiptFilterRequestPrivate class provides private implementation for DeleteReceiptFilterRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DeleteReceiptFilterRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteReceiptFilterRequestPrivate::DeleteReceiptFilterRequestPrivate(
    const SesRequest::Action action, DeleteReceiptFilterRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptFilterRequest
 * class' copy constructor.
 */
DeleteReceiptFilterRequestPrivate::DeleteReceiptFilterRequestPrivate(
    const DeleteReceiptFilterRequestPrivate &other, DeleteReceiptFilterRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
