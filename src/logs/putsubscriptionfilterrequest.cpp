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

#include "putsubscriptionfilterrequest.h"
#include "putsubscriptionfilterrequest_p.h"
#include "putsubscriptionfilterresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  PutSubscriptionFilterRequest
 *
 * @brief  Implements CloudWatchLogs PutSubscriptionFilter requests.
 *
 * @see    CloudWatchLogsClient::putSubscriptionFilter
 */

/**
 * @brief  Constructs a new PutSubscriptionFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutSubscriptionFilterRequest::PutSubscriptionFilterRequest(const PutSubscriptionFilterRequest &other)
    : CloudWatchLogsRequest(new PutSubscriptionFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutSubscriptionFilterRequest object.
 */
PutSubscriptionFilterRequest::PutSubscriptionFilterRequest()
    : CloudWatchLogsRequest(new PutSubscriptionFilterRequestPrivate(CloudWatchLogsRequest::PutSubscriptionFilterAction, this))
{

}

bool PutSubscriptionFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutSubscriptionFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutSubscriptionFilterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSubscriptionFilterRequest::response(QNetworkReply * const reply) const
{
    return new PutSubscriptionFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutSubscriptionFilterRequestPrivate
 *
 * @brief  Private implementation for PutSubscriptionFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSubscriptionFilterRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutSubscriptionFilterRequest instance.
 */
PutSubscriptionFilterRequestPrivate::PutSubscriptionFilterRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutSubscriptionFilterRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutSubscriptionFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutSubscriptionFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutSubscriptionFilterRequest instance.
 */
PutSubscriptionFilterRequestPrivate::PutSubscriptionFilterRequestPrivate(
    const PutSubscriptionFilterRequestPrivate &other, PutSubscriptionFilterRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws