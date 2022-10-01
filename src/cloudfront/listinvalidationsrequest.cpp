// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinvalidationsrequest.h"
#include "listinvalidationsrequest_p.h"
#include "listinvalidationsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListInvalidationsRequest
 * \brief The ListInvalidationsRequest class provides an interface for CloudFront ListInvalidations requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listInvalidations
 */

/*!
 * Constructs a copy of \a other.
 */
ListInvalidationsRequest::ListInvalidationsRequest(const ListInvalidationsRequest &other)
    : CloudFrontRequest(new ListInvalidationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInvalidationsRequest object.
 */
ListInvalidationsRequest::ListInvalidationsRequest()
    : CloudFrontRequest(new ListInvalidationsRequestPrivate(CloudFrontRequest::ListInvalidationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInvalidationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInvalidationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInvalidationsRequest::response(QNetworkReply * const reply) const
{
    return new ListInvalidationsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListInvalidationsRequestPrivate
 * \brief The ListInvalidationsRequestPrivate class provides private implementation for ListInvalidationsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListInvalidationsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListInvalidationsRequestPrivate::ListInvalidationsRequestPrivate(
    const CloudFrontRequest::Action action, ListInvalidationsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInvalidationsRequest
 * class' copy constructor.
 */
ListInvalidationsRequestPrivate::ListInvalidationsRequestPrivate(
    const ListInvalidationsRequestPrivate &other, ListInvalidationsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
