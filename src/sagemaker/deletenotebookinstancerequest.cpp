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

#include "deletenotebookinstancerequest.h"
#include "deletenotebookinstancerequest_p.h"
#include "deletenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  DeleteNotebookInstanceRequest
 *
 * @brief  Implements SageMaker DeleteNotebookInstance requests.
 *
 * @see    SageMakerClient::deleteNotebookInstance
 */

/**
 * @brief  Constructs a new DeleteNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNotebookInstanceRequest::DeleteNotebookInstanceRequest(const DeleteNotebookInstanceRequest &other)
    : SageMakerRequest(new DeleteNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNotebookInstanceRequest object.
 */
DeleteNotebookInstanceRequest::DeleteNotebookInstanceRequest()
    : SageMakerRequest(new DeleteNotebookInstanceRequestPrivate(SageMakerRequest::DeleteNotebookInstanceAction, this))
{

}

bool DeleteNotebookInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNotebookInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotebookInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for DeleteNotebookInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DeleteNotebookInstanceRequest instance.
 */
DeleteNotebookInstanceRequestPrivate::DeleteNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, DeleteNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNotebookInstanceRequest instance.
 */
DeleteNotebookInstanceRequestPrivate::DeleteNotebookInstanceRequestPrivate(
    const DeleteNotebookInstanceRequestPrivate &other, DeleteNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws