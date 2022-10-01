// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourcesrequest.h"
#include "listtagsforresourcesrequest_p.h"
#include "listtagsforresourcesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTagsForResourcesRequest
 * \brief The ListTagsForResourcesRequest class provides an interface for Route53 ListTagsForResources requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTagsForResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForResourcesRequest::ListTagsForResourcesRequest(const ListTagsForResourcesRequest &other)
    : Route53Request(new ListTagsForResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForResourcesRequest object.
 */
ListTagsForResourcesRequest::ListTagsForResourcesRequest()
    : Route53Request(new ListTagsForResourcesRequestPrivate(Route53Request::ListTagsForResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTagsForResourcesRequestPrivate
 * \brief The ListTagsForResourcesRequestPrivate class provides private implementation for ListTagsForResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTagsForResourcesRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTagsForResourcesRequestPrivate::ListTagsForResourcesRequestPrivate(
    const Route53Request::Action action, ListTagsForResourcesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourcesRequest
 * class' copy constructor.
 */
ListTagsForResourcesRequestPrivate::ListTagsForResourcesRequestPrivate(
    const ListTagsForResourcesRequestPrivate &other, ListTagsForResourcesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
