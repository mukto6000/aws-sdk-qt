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

#include "describeconditionalforwardersrequest.h"
#include "describeconditionalforwardersrequest_p.h"
#include "describeconditionalforwardersresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeConditionalForwardersRequest
 *
 * @brief  Implements DirectoryService DescribeConditionalForwarders requests.
 *
 * @see    DirectoryServiceClient::describeConditionalForwarders
 */

/**
 * @brief  Constructs a new DescribeConditionalForwardersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConditionalForwardersRequest::DescribeConditionalForwardersRequest(const DescribeConditionalForwardersRequest &other)
    : DirectoryServiceRequest(new DescribeConditionalForwardersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConditionalForwardersRequest object.
 */
DescribeConditionalForwardersRequest::DescribeConditionalForwardersRequest()
    : DirectoryServiceRequest(new DescribeConditionalForwardersRequestPrivate(DirectoryServiceRequest::DescribeConditionalForwardersAction, this))
{

}

bool DescribeConditionalForwardersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConditionalForwardersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConditionalForwardersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConditionalForwardersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConditionalForwardersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConditionalForwardersRequestPrivate
 *
 * @brief  Private implementation for DescribeConditionalForwardersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConditionalForwardersRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeConditionalForwardersRequest instance.
 */
DescribeConditionalForwardersRequestPrivate::DescribeConditionalForwardersRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeConditionalForwardersRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConditionalForwardersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConditionalForwardersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConditionalForwardersRequest instance.
 */
DescribeConditionalForwardersRequestPrivate::DescribeConditionalForwardersRequestPrivate(
    const DescribeConditionalForwardersRequestPrivate &other, DescribeConditionalForwardersRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws