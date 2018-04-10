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

#include "getdiscoveredresourcecountsrequest.h"
#include "getdiscoveredresourcecountsrequest_p.h"
#include "getdiscoveredresourcecountsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetDiscoveredResourceCountsRequest
 *
 * @brief  Implements ConfigService GetDiscoveredResourceCounts requests.
 *
 * @see    ConfigServiceClient::getDiscoveredResourceCounts
 */

/**
 * @brief  Constructs a new GetDiscoveredResourceCountsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDiscoveredResourceCountsRequest::GetDiscoveredResourceCountsRequest(const GetDiscoveredResourceCountsRequest &other)
    : ConfigServiceRequest(new GetDiscoveredResourceCountsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDiscoveredResourceCountsRequest object.
 */
GetDiscoveredResourceCountsRequest::GetDiscoveredResourceCountsRequest()
    : ConfigServiceRequest(new GetDiscoveredResourceCountsRequestPrivate(ConfigServiceRequest::GetDiscoveredResourceCountsAction, this))
{

}

bool GetDiscoveredResourceCountsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDiscoveredResourceCountsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDiscoveredResourceCountsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDiscoveredResourceCountsRequest::response(QNetworkReply * const reply) const
{
    return new GetDiscoveredResourceCountsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDiscoveredResourceCountsRequestPrivate
 *
 * @brief  Private implementation for GetDiscoveredResourceCountsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiscoveredResourceCountsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetDiscoveredResourceCountsRequest instance.
 */
GetDiscoveredResourceCountsRequestPrivate::GetDiscoveredResourceCountsRequestPrivate(
    const ConfigServiceRequest::Action action, GetDiscoveredResourceCountsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDiscoveredResourceCountsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDiscoveredResourceCountsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDiscoveredResourceCountsRequest instance.
 */
GetDiscoveredResourceCountsRequestPrivate::GetDiscoveredResourceCountsRequestPrivate(
    const GetDiscoveredResourceCountsRequestPrivate &other, GetDiscoveredResourceCountsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws