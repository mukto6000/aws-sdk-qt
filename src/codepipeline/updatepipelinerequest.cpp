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

#include "updatepipelinerequest.h"
#include "updatepipelinerequest_p.h"
#include "updatepipelineresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  UpdatePipelineRequest
 *
 * @brief  Implements CodePipeline UpdatePipeline requests.
 *
 * @see    CodePipelineClient::updatePipeline
 */

/**
 * @brief  Constructs a new UpdatePipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePipelineRequest::UpdatePipelineRequest(const UpdatePipelineRequest &other)
    : CodePipelineRequest(new UpdatePipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePipelineRequest object.
 */
UpdatePipelineRequest::UpdatePipelineRequest()
    : CodePipelineRequest(new UpdatePipelineRequestPrivate(CodePipelineRequest::UpdatePipelineAction, this))
{

}

bool UpdatePipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePipelineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePipelineRequestPrivate
 *
 * @brief  Private implementation for UpdatePipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public UpdatePipelineRequest instance.
 */
UpdatePipelineRequestPrivate::UpdatePipelineRequestPrivate(
    const CodePipelineRequest::Action action, UpdatePipelineRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePipelineRequest instance.
 */
UpdatePipelineRequestPrivate::UpdatePipelineRequestPrivate(
    const UpdatePipelineRequestPrivate &other, UpdatePipelineRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws