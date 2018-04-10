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

#include "updateinputrequest.h"
#include "updateinputrequest_p.h"
#include "updateinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/**
 * @class  UpdateInputRequest
 *
 * @brief  Implements MediaLive UpdateInput requests.
 *
 * @see    MediaLiveClient::updateInput
 */

/**
 * @brief  Constructs a new UpdateInputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateInputRequest::UpdateInputRequest(const UpdateInputRequest &other)
    : MediaLiveRequest(new UpdateInputRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateInputRequest object.
 */
UpdateInputRequest::UpdateInputRequest()
    : MediaLiveRequest(new UpdateInputRequestPrivate(MediaLiveRequest::UpdateInputAction, this))
{

}

bool UpdateInputRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateInputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateInputResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateInputRequestPrivate
 *
 * @brief  Private implementation for UpdateInputRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInputRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public UpdateInputRequest instance.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const MediaLiveRequest::Action action, UpdateInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateInputRequest instance.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const UpdateInputRequestPrivate &other, UpdateInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws