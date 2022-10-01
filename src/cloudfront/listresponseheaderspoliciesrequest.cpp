// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresponseheaderspoliciesrequest.h"
#include "listresponseheaderspoliciesrequest_p.h"
#include "listresponseheaderspoliciesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListResponseHeadersPoliciesRequest
 * \brief The ListResponseHeadersPoliciesRequest class provides an interface for CloudFront ListResponseHeadersPolicies requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listResponseHeadersPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListResponseHeadersPoliciesRequest::ListResponseHeadersPoliciesRequest(const ListResponseHeadersPoliciesRequest &other)
    : CloudFrontRequest(new ListResponseHeadersPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResponseHeadersPoliciesRequest object.
 */
ListResponseHeadersPoliciesRequest::ListResponseHeadersPoliciesRequest()
    : CloudFrontRequest(new ListResponseHeadersPoliciesRequestPrivate(CloudFrontRequest::ListResponseHeadersPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListResponseHeadersPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResponseHeadersPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResponseHeadersPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListResponseHeadersPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListResponseHeadersPoliciesRequestPrivate
 * \brief The ListResponseHeadersPoliciesRequestPrivate class provides private implementation for ListResponseHeadersPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListResponseHeadersPoliciesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListResponseHeadersPoliciesRequestPrivate::ListResponseHeadersPoliciesRequestPrivate(
    const CloudFrontRequest::Action action, ListResponseHeadersPoliciesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResponseHeadersPoliciesRequest
 * class' copy constructor.
 */
ListResponseHeadersPoliciesRequestPrivate::ListResponseHeadersPoliciesRequestPrivate(
    const ListResponseHeadersPoliciesRequestPrivate &other, ListResponseHeadersPoliciesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
