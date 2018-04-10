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

#include "batchgetonpremisesinstancesrequest.h"
#include "batchgetonpremisesinstancesrequest_p.h"
#include "batchgetonpremisesinstancesresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  BatchGetOnPremisesInstancesRequest
 *
 * @brief  Implements CodeDeploy BatchGetOnPremisesInstances requests.
 *
 * @see    CodeDeployClient::batchGetOnPremisesInstances
 */

/**
 * @brief  Constructs a new BatchGetOnPremisesInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetOnPremisesInstancesRequest::BatchGetOnPremisesInstancesRequest(const BatchGetOnPremisesInstancesRequest &other)
    : CodeDeployRequest(new BatchGetOnPremisesInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetOnPremisesInstancesRequest object.
 */
BatchGetOnPremisesInstancesRequest::BatchGetOnPremisesInstancesRequest()
    : CodeDeployRequest(new BatchGetOnPremisesInstancesRequestPrivate(CodeDeployRequest::BatchGetOnPremisesInstancesAction, this))
{

}

bool BatchGetOnPremisesInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetOnPremisesInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetOnPremisesInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetOnPremisesInstancesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetOnPremisesInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetOnPremisesInstancesRequestPrivate
 *
 * @brief  Private implementation for BatchGetOnPremisesInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetOnPremisesInstancesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public BatchGetOnPremisesInstancesRequest instance.
 */
BatchGetOnPremisesInstancesRequestPrivate::BatchGetOnPremisesInstancesRequestPrivate(
    const CodeDeployRequest::Action action, BatchGetOnPremisesInstancesRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetOnPremisesInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetOnPremisesInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetOnPremisesInstancesRequest instance.
 */
BatchGetOnPremisesInstancesRequestPrivate::BatchGetOnPremisesInstancesRequestPrivate(
    const BatchGetOnPremisesInstancesRequestPrivate &other, BatchGetOnPremisesInstancesRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws