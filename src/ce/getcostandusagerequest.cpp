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

#include "getcostandusagerequest.h"
#include "getcostandusagerequest_p.h"
#include "getcostandusageresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/**
 * @class  GetCostAndUsageRequest
 *
 * @brief  Implements CostExplorer GetCostAndUsage requests.
 *
 * @see    CostExplorerClient::getCostAndUsage
 */

/**
 * @brief  Constructs a new GetCostAndUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCostAndUsageRequest::GetCostAndUsageRequest(const GetCostAndUsageRequest &other)
    : CostExplorerRequest(new GetCostAndUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCostAndUsageRequest object.
 */
GetCostAndUsageRequest::GetCostAndUsageRequest()
    : CostExplorerRequest(new GetCostAndUsageRequestPrivate(CostExplorerRequest::GetCostAndUsageAction, this))
{

}

bool GetCostAndUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCostAndUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCostAndUsageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCostAndUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetCostAndUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCostAndUsageRequestPrivate
 *
 * @brief  Private implementation for GetCostAndUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCostAndUsageRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetCostAndUsageRequest instance.
 */
GetCostAndUsageRequestPrivate::GetCostAndUsageRequestPrivate(
    const CostExplorerRequest::Action action, GetCostAndUsageRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCostAndUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCostAndUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCostAndUsageRequest instance.
 */
GetCostAndUsageRequestPrivate::GetCostAndUsageRequestPrivate(
    const GetCostAndUsageRequestPrivate &other, GetCostAndUsageRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws