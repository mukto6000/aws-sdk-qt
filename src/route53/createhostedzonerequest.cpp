// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhostedzonerequest.h"
#include "createhostedzonerequest_p.h"
#include "createhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateHostedZoneRequest
 * \brief The CreateHostedZoneRequest class provides an interface for Route53 CreateHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHostedZoneRequest::CreateHostedZoneRequest(const CreateHostedZoneRequest &other)
    : Route53Request(new CreateHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHostedZoneRequest object.
 */
CreateHostedZoneRequest::CreateHostedZoneRequest()
    : Route53Request(new CreateHostedZoneRequestPrivate(Route53Request::CreateHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new CreateHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateHostedZoneRequestPrivate
 * \brief The CreateHostedZoneRequestPrivate class provides private implementation for CreateHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateHostedZoneRequestPrivate::CreateHostedZoneRequestPrivate(
    const Route53Request::Action action, CreateHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHostedZoneRequest
 * class' copy constructor.
 */
CreateHostedZoneRequestPrivate::CreateHostedZoneRequestPrivate(
    const CreateHostedZoneRequestPrivate &other, CreateHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
