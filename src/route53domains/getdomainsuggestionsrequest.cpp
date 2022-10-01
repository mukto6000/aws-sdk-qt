// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainsuggestionsrequest.h"
#include "getdomainsuggestionsrequest_p.h"
#include "getdomainsuggestionsresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetDomainSuggestionsRequest
 * \brief The GetDomainSuggestionsRequest class provides an interface for Route53Domains GetDomainSuggestions requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getDomainSuggestions
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainSuggestionsRequest::GetDomainSuggestionsRequest(const GetDomainSuggestionsRequest &other)
    : Route53DomainsRequest(new GetDomainSuggestionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainSuggestionsRequest object.
 */
GetDomainSuggestionsRequest::GetDomainSuggestionsRequest()
    : Route53DomainsRequest(new GetDomainSuggestionsRequestPrivate(Route53DomainsRequest::GetDomainSuggestionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainSuggestionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainSuggestionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainSuggestionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainSuggestionsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::GetDomainSuggestionsRequestPrivate
 * \brief The GetDomainSuggestionsRequestPrivate class provides private implementation for GetDomainSuggestionsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetDomainSuggestionsRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
GetDomainSuggestionsRequestPrivate::GetDomainSuggestionsRequestPrivate(
    const Route53DomainsRequest::Action action, GetDomainSuggestionsRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainSuggestionsRequest
 * class' copy constructor.
 */
GetDomainSuggestionsRequestPrivate::GetDomainSuggestionsRequestPrivate(
    const GetDomainSuggestionsRequestPrivate &other, GetDomainSuggestionsRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
