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

#include "getresourcesrequest.h"
#include "getresourcesrequest_p.h"
#include "getresourcesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  GetResourcesRequest
 *
 * @brief  Implements ResourceGroupsTaggingAPI GetResources requests.
 *
 * @see    ResourceGroupsTaggingAPIClient::getResources
 */

/**
 * @brief  Constructs a new GetResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResourcesRequest::GetResourcesRequest(const GetResourcesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResourcesRequest object.
 */
GetResourcesRequest::GetResourcesRequest()
    : ResourceGroupsTaggingAPIRequest(new GetResourcesRequestPrivate(ResourceGroupsTaggingAPIRequest::GetResourcesAction, this))
{

}

bool GetResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResourcesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResourcesRequestPrivate
 *
 * @brief  Private implementation for GetResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourcesRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public GetResourcesRequest instance.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetResourcesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResourcesRequest instance.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const GetResourcesRequestPrivate &other, GetResourcesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws