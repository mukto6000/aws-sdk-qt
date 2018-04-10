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

#include "updateresourcerequest.h"
#include "updateresourcerequest_p.h"
#include "updateresourceresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  UpdateResourceRequest
 *
 * @brief  Implements WorkMail UpdateResource requests.
 *
 * @see    WorkMailClient::updateResource
 */

/**
 * @brief  Constructs a new UpdateResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateResourceRequest::UpdateResourceRequest(const UpdateResourceRequest &other)
    : WorkMailRequest(new UpdateResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateResourceRequest object.
 */
UpdateResourceRequest::UpdateResourceRequest()
    : WorkMailRequest(new UpdateResourceRequestPrivate(WorkMailRequest::UpdateResourceAction, this))
{

}

bool UpdateResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateResourceRequestPrivate
 *
 * @brief  Private implementation for UpdateResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public UpdateResourceRequest instance.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const WorkMailRequest::Action action, UpdateResourceRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateResourceRequest instance.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const UpdateResourceRequestPrivate &other, UpdateResourceRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws