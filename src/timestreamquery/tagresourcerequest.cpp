/*
    Copyright 2013-2021 Paul Colby

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

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for TimestreamQuery TagResource requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : TimestreamQueryRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : TimestreamQueryRequest(new TagResourceRequestPrivate(TimestreamQueryRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TagResourceRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TimestreamQueryRequest::Action action, TagResourceRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
