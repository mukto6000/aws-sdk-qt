/*
    Copyright 2013-2020 Paul Colby

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

#include "listhealthchecksrequest.h"
#include "listhealthchecksrequest_p.h"
#include "listhealthchecksresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHealthChecksRequest
 * \brief The ListHealthChecksRequest class provides an interface for Route53 ListHealthChecks requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHealthChecks
 */

/*!
 * Constructs a copy of \a other.
 */
ListHealthChecksRequest::ListHealthChecksRequest(const ListHealthChecksRequest &other)
    : Route53Request(new ListHealthChecksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHealthChecksRequest object.
 */
ListHealthChecksRequest::ListHealthChecksRequest()
    : Route53Request(new ListHealthChecksRequestPrivate(Route53Request::ListHealthChecksAction, this))
{

}

/*!
 * \reimp
 */
bool ListHealthChecksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHealthChecksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHealthChecksRequest::response(QNetworkReply * const reply) const
{
    return new ListHealthChecksResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListHealthChecksRequestPrivate
 * \brief The ListHealthChecksRequestPrivate class provides private implementation for ListHealthChecksRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHealthChecksRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListHealthChecksRequestPrivate::ListHealthChecksRequestPrivate(
    const Route53Request::Action action, ListHealthChecksRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHealthChecksRequest
 * class' copy constructor.
 */
ListHealthChecksRequestPrivate::ListHealthChecksRequestPrivate(
    const ListHealthChecksRequestPrivate &other, ListHealthChecksRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
