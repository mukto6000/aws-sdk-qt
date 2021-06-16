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

#include "listbotaliasesrequest.h"
#include "listbotaliasesrequest_p.h"
#include "listbotaliasesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotAliasesRequest
 * \brief The ListBotAliasesRequest class provides an interface for LexModelsV2 ListBotAliases requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotAliasesRequest::ListBotAliasesRequest(const ListBotAliasesRequest &other)
    : LexModelsV2Request(new ListBotAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotAliasesRequest object.
 */
ListBotAliasesRequest::ListBotAliasesRequest()
    : LexModelsV2Request(new ListBotAliasesRequestPrivate(LexModelsV2Request::ListBotAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListBotAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotAliasesRequestPrivate
 * \brief The ListBotAliasesRequestPrivate class provides private implementation for ListBotAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotAliasesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotAliasesRequestPrivate::ListBotAliasesRequestPrivate(
    const LexModelsV2Request::Action action, ListBotAliasesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotAliasesRequest
 * class' copy constructor.
 */
ListBotAliasesRequestPrivate::ListBotAliasesRequestPrivate(
    const ListBotAliasesRequestPrivate &other, ListBotAliasesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
