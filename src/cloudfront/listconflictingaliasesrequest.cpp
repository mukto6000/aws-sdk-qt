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

#include "listconflictingaliasesrequest.h"
#include "listconflictingaliasesrequest_p.h"
#include "listconflictingaliasesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListConflictingAliasesRequest
 * \brief The ListConflictingAliasesRequest class provides an interface for CloudFront ListConflictingAliases requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listConflictingAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListConflictingAliasesRequest::ListConflictingAliasesRequest(const ListConflictingAliasesRequest &other)
    : CloudFrontRequest(new ListConflictingAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConflictingAliasesRequest object.
 */
ListConflictingAliasesRequest::ListConflictingAliasesRequest()
    : CloudFrontRequest(new ListConflictingAliasesRequestPrivate(CloudFrontRequest::ListConflictingAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListConflictingAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConflictingAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConflictingAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListConflictingAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListConflictingAliasesRequestPrivate
 * \brief The ListConflictingAliasesRequestPrivate class provides private implementation for ListConflictingAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListConflictingAliasesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListConflictingAliasesRequestPrivate::ListConflictingAliasesRequestPrivate(
    const CloudFrontRequest::Action action, ListConflictingAliasesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConflictingAliasesRequest
 * class' copy constructor.
 */
ListConflictingAliasesRequestPrivate::ListConflictingAliasesRequestPrivate(
    const ListConflictingAliasesRequestPrivate &other, ListConflictingAliasesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
