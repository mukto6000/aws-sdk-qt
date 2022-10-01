// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsfordomainrequest.h"
#include "listtagsfordomainrequest_p.h"
#include "listtagsfordomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainRequest
 * \brief The ListTagsForDomainRequest class provides an interface for Route53Domains ListTagsForDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listTagsForDomain
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForDomainRequest::ListTagsForDomainRequest(const ListTagsForDomainRequest &other)
    : Route53DomainsRequest(new ListTagsForDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForDomainRequest object.
 */
ListTagsForDomainRequest::ListTagsForDomainRequest()
    : Route53DomainsRequest(new ListTagsForDomainRequestPrivate(Route53DomainsRequest::ListTagsForDomainAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForDomainRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainRequestPrivate
 * \brief The ListTagsForDomainRequestPrivate class provides private implementation for ListTagsForDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListTagsForDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
ListTagsForDomainRequestPrivate::ListTagsForDomainRequestPrivate(
    const Route53DomainsRequest::Action action, ListTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForDomainRequest
 * class' copy constructor.
 */
ListTagsForDomainRequestPrivate::ListTagsForDomainRequestPrivate(
    const ListTagsForDomainRequestPrivate &other, ListTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
