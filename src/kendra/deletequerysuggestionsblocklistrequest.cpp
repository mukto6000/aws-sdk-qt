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

#include "deletequerysuggestionsblocklistrequest.h"
#include "deletequerysuggestionsblocklistrequest_p.h"
#include "deletequerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DeleteQuerySuggestionsBlockListRequest
 * \brief The DeleteQuerySuggestionsBlockListRequest class provides an interface for kendra DeleteQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::deleteQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQuerySuggestionsBlockListRequest::DeleteQuerySuggestionsBlockListRequest(const DeleteQuerySuggestionsBlockListRequest &other)
    : kendraRequest(new DeleteQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQuerySuggestionsBlockListRequest object.
 */
DeleteQuerySuggestionsBlockListRequest::DeleteQuerySuggestionsBlockListRequest()
    : kendraRequest(new DeleteQuerySuggestionsBlockListRequestPrivate(kendraRequest::DeleteQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::DeleteQuerySuggestionsBlockListRequestPrivate
 * \brief The DeleteQuerySuggestionsBlockListRequestPrivate class provides private implementation for DeleteQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DeleteQuerySuggestionsBlockListRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
DeleteQuerySuggestionsBlockListRequestPrivate::DeleteQuerySuggestionsBlockListRequestPrivate(
    const kendraRequest::Action action, DeleteQuerySuggestionsBlockListRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
DeleteQuerySuggestionsBlockListRequestPrivate::DeleteQuerySuggestionsBlockListRequestPrivate(
    const DeleteQuerySuggestionsBlockListRequestPrivate &other, DeleteQuerySuggestionsBlockListRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
