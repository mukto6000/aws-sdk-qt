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

#include "startapplicationrequest.h"
#include "startapplicationrequest_p.h"
#include "startapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  StartApplicationRequest
 *
 * @brief  Implements KinesisAnalytics StartApplication requests.
 *
 * @see    KinesisAnalyticsClient::startApplication
 */

/**
 * @brief  Constructs a new StartApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartApplicationRequest::StartApplicationRequest(const StartApplicationRequest &other)
    : KinesisAnalyticsRequest(new StartApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartApplicationRequest object.
 */
StartApplicationRequest::StartApplicationRequest()
    : KinesisAnalyticsRequest(new StartApplicationRequestPrivate(KinesisAnalyticsRequest::StartApplicationAction, this))
{

}

bool StartApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * StartApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartApplicationRequestPrivate
 *
 * @brief  Private implementation for StartApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartApplicationRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public StartApplicationRequest instance.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, StartApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartApplicationRequest instance.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const StartApplicationRequestPrivate &other, StartApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws