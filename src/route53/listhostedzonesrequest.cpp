// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhostedzonesrequest.h"
#include "listhostedzonesrequest_p.h"
#include "listhostedzonesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesRequest
 * \brief The ListHostedZonesRequest class provides an interface for Route53 ListHostedZones requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHostedZones
 */

/*!
 * Constructs a copy of \a other.
 */
ListHostedZonesRequest::ListHostedZonesRequest(const ListHostedZonesRequest &other)
    : Route53Request(new ListHostedZonesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHostedZonesRequest object.
 */
ListHostedZonesRequest::ListHostedZonesRequest()
    : Route53Request(new ListHostedZonesRequestPrivate(Route53Request::ListHostedZonesAction, this))
{

}

/*!
 * \reimp
 */
bool ListHostedZonesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHostedZonesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHostedZonesRequest::response(QNetworkReply * const reply) const
{
    return new ListHostedZonesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListHostedZonesRequestPrivate
 * \brief The ListHostedZonesRequestPrivate class provides private implementation for ListHostedZonesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListHostedZonesRequestPrivate::ListHostedZonesRequestPrivate(
    const Route53Request::Action action, ListHostedZonesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHostedZonesRequest
 * class' copy constructor.
 */
ListHostedZonesRequestPrivate::ListHostedZonesRequestPrivate(
    const ListHostedZonesRequestPrivate &other, ListHostedZonesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
