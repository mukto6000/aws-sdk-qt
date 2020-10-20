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

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for AppSync UntagResource requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : AppSyncRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : AppSyncRequest(new UntagResourceRequestPrivate(AppSyncRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const AppSyncRequest::Action action, UntagResourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
