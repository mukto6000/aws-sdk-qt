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

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListStreamsRequest
 *
 * @brief  Implements IoT ListStreams requests.
 *
 * @see    IoTClient::listStreams
 */

/**
 * @brief  Constructs a new ListStreamsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : IoTRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : IoTRequest(new ListStreamsRequestPrivate(IoTRequest::ListStreamsAction, this))
{

}

bool ListStreamsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStreamsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStreamsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStreamsRequestPrivate
 *
 * @brief  Private implementation for ListStreamsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListStreamsRequest instance.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const IoTRequest::Action action, ListStreamsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStreamsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStreamsRequest instance.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const ListStreamsRequestPrivate &other, ListStreamsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws