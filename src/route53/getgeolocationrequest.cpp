// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgeolocationrequest.h"
#include "getgeolocationrequest_p.h"
#include "getgeolocationresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetGeoLocationRequest
 * \brief The GetGeoLocationRequest class provides an interface for Route53 GetGeoLocation requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getGeoLocation
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeoLocationRequest::GetGeoLocationRequest(const GetGeoLocationRequest &other)
    : Route53Request(new GetGeoLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeoLocationRequest object.
 */
GetGeoLocationRequest::GetGeoLocationRequest()
    : Route53Request(new GetGeoLocationRequestPrivate(Route53Request::GetGeoLocationAction, this))
{

}

/*!
 * \reimp
 */
bool GetGeoLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGeoLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeoLocationRequest::response(QNetworkReply * const reply) const
{
    return new GetGeoLocationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetGeoLocationRequestPrivate
 * \brief The GetGeoLocationRequestPrivate class provides private implementation for GetGeoLocationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetGeoLocationRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetGeoLocationRequestPrivate::GetGeoLocationRequestPrivate(
    const Route53Request::Action action, GetGeoLocationRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGeoLocationRequest
 * class' copy constructor.
 */
GetGeoLocationRequestPrivate::GetGeoLocationRequestPrivate(
    const GetGeoLocationRequestPrivate &other, GetGeoLocationRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
