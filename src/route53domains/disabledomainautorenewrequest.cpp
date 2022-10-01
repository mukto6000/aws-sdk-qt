// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disabledomainautorenewrequest.h"
#include "disabledomainautorenewrequest_p.h"
#include "disabledomainautorenewresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DisableDomainAutoRenewRequest
 * \brief The DisableDomainAutoRenewRequest class provides an interface for Route53Domains DisableDomainAutoRenew requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::disableDomainAutoRenew
 */

/*!
 * Constructs a copy of \a other.
 */
DisableDomainAutoRenewRequest::DisableDomainAutoRenewRequest(const DisableDomainAutoRenewRequest &other)
    : Route53DomainsRequest(new DisableDomainAutoRenewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableDomainAutoRenewRequest object.
 */
DisableDomainAutoRenewRequest::DisableDomainAutoRenewRequest()
    : Route53DomainsRequest(new DisableDomainAutoRenewRequestPrivate(Route53DomainsRequest::DisableDomainAutoRenewAction, this))
{

}

/*!
 * \reimp
 */
bool DisableDomainAutoRenewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableDomainAutoRenewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableDomainAutoRenewRequest::response(QNetworkReply * const reply) const
{
    return new DisableDomainAutoRenewResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::DisableDomainAutoRenewRequestPrivate
 * \brief The DisableDomainAutoRenewRequestPrivate class provides private implementation for DisableDomainAutoRenewRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DisableDomainAutoRenewRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
DisableDomainAutoRenewRequestPrivate::DisableDomainAutoRenewRequestPrivate(
    const Route53DomainsRequest::Action action, DisableDomainAutoRenewRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableDomainAutoRenewRequest
 * class' copy constructor.
 */
DisableDomainAutoRenewRequestPrivate::DisableDomainAutoRenewRequestPrivate(
    const DisableDomainAutoRenewRequestPrivate &other, DisableDomainAutoRenewRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
