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

#include "listrecordsrequest.h"
#include "listrecordsrequest_p.h"
#include "listrecordsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  ListRecordsRequest
 *
 * @brief  Implements CognitoSync ListRecords requests.
 *
 * @see    CognitoSyncClient::listRecords
 */

/**
 * @brief  Constructs a new ListRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRecordsRequest::ListRecordsRequest(const ListRecordsRequest &other)
    : CognitoSyncRequest(new ListRecordsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRecordsRequest object.
 */
ListRecordsRequest::ListRecordsRequest()
    : CognitoSyncRequest(new ListRecordsRequestPrivate(CognitoSyncRequest::ListRecordsAction, this))
{

}

bool ListRecordsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRecordsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecordsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecordsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRecordsRequestPrivate
 *
 * @brief  Private implementation for ListRecordsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRecordsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public ListRecordsRequest instance.
 */
ListRecordsRequestPrivate::ListRecordsRequestPrivate(
    const CognitoSyncRequest::Action action, ListRecordsRequest * const q)
    : CognitoSyncRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRecordsRequest instance.
 */
ListRecordsRequestPrivate::ListRecordsRequestPrivate(
    const ListRecordsRequestPrivate &other, ListRecordsRequest * const q)
    : CognitoSyncRequestPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws