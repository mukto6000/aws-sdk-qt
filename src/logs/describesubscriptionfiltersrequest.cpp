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

#include "describesubscriptionfiltersrequest.h"
#include "describesubscriptionfiltersrequest_p.h"
#include "describesubscriptionfiltersresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeSubscriptionFiltersRequest
 *
 * @brief  Implements CloudWatchLogs DescribeSubscriptionFilters requests.
 *
 * @see    CloudWatchLogsClient::describeSubscriptionFilters
 */

/**
 * @brief  Constructs a new DescribeSubscriptionFiltersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSubscriptionFiltersRequest::DescribeSubscriptionFiltersRequest(const DescribeSubscriptionFiltersRequest &other)
    : CloudWatchLogsRequest(new DescribeSubscriptionFiltersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSubscriptionFiltersRequest object.
 */
DescribeSubscriptionFiltersRequest::DescribeSubscriptionFiltersRequest()
    : CloudWatchLogsRequest(new DescribeSubscriptionFiltersRequestPrivate(CloudWatchLogsRequest::DescribeSubscriptionFiltersAction, this))
{

}

bool DescribeSubscriptionFiltersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSubscriptionFiltersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSubscriptionFiltersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubscriptionFiltersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubscriptionFiltersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSubscriptionFiltersRequestPrivate
 *
 * @brief  Private implementation for DescribeSubscriptionFiltersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscriptionFiltersRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DescribeSubscriptionFiltersRequest instance.
 */
DescribeSubscriptionFiltersRequestPrivate::DescribeSubscriptionFiltersRequestPrivate(
    const CloudWatchLogsRequest::Action action, DescribeSubscriptionFiltersRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscriptionFiltersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubscriptionFiltersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSubscriptionFiltersRequest instance.
 */
DescribeSubscriptionFiltersRequestPrivate::DescribeSubscriptionFiltersRequestPrivate(
    const DescribeSubscriptionFiltersRequestPrivate &other, DescribeSubscriptionFiltersRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws