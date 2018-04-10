/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchroomsrequest.h"
#include "searchroomsrequest_p.h"
#include "searchroomsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  SearchRoomsRequest
 *
 * @brief  Implements AlexaForBusiness SearchRooms requests.
 *
 * @see    AlexaForBusinessClient::searchRooms
 */

/**
 * @brief  Constructs a new SearchRoomsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchRoomsRequest::SearchRoomsRequest(const SearchRoomsRequest &other)
    : AlexaForBusinessRequest(new SearchRoomsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchRoomsRequest object.
 */
SearchRoomsRequest::SearchRoomsRequest()
    : AlexaForBusinessRequest(new SearchRoomsRequestPrivate(AlexaForBusinessRequest::SearchRoomsAction, this))
{

}

bool SearchRoomsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchRoomsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchRoomsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchRoomsRequest::response(QNetworkReply * const reply) const
{
    return new SearchRoomsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchRoomsRequestPrivate
 *
 * @brief  Private implementation for SearchRoomsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchRoomsRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public SearchRoomsRequest instance.
 */
SearchRoomsRequestPrivate::SearchRoomsRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchRoomsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchRoomsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchRoomsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchRoomsRequest instance.
 */
SearchRoomsRequestPrivate::SearchRoomsRequestPrivate(
    const SearchRoomsRequestPrivate &other, SearchRoomsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws