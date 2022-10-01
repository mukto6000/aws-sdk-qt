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

#include "createreceiptfilterrequest.h"
#include "createreceiptfilterrequest_p.h"
#include "createreceiptfilterresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateReceiptFilterRequest
 * \brief The CreateReceiptFilterRequest class provides an interface for Ses CreateReceiptFilter requests.
 *
 * \inmodule QtAwsSes
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
 * \sa SesClient::createReceiptFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReceiptFilterRequest::CreateReceiptFilterRequest(const CreateReceiptFilterRequest &other)
    : SesRequest(new CreateReceiptFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReceiptFilterRequest object.
 */
CreateReceiptFilterRequest::CreateReceiptFilterRequest()
    : SesRequest(new CreateReceiptFilterRequestPrivate(SesRequest::CreateReceiptFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReceiptFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReceiptFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReceiptFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateReceiptFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::CreateReceiptFilterRequestPrivate
 * \brief The CreateReceiptFilterRequestPrivate class provides private implementation for CreateReceiptFilterRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateReceiptFilterRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateReceiptFilterRequestPrivate::CreateReceiptFilterRequestPrivate(
    const SesRequest::Action action, CreateReceiptFilterRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReceiptFilterRequest
 * class' copy constructor.
 */
CreateReceiptFilterRequestPrivate::CreateReceiptFilterRequestPrivate(
    const CreateReceiptFilterRequestPrivate &other, CreateReceiptFilterRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
