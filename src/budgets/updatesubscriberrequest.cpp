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

#include "updatesubscriberrequest.h"
#include "updatesubscriberrequest_p.h"
#include "updatesubscriberresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/**
 * @class  UpdateSubscriberRequest
 *
 * @brief  Implements Budgets UpdateSubscriber requests.
 *
 * @see    BudgetsClient::updateSubscriber
 */

/**
 * @brief  Constructs a new UpdateSubscriberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSubscriberRequest::UpdateSubscriberRequest(const UpdateSubscriberRequest &other)
    : BudgetsRequest(new UpdateSubscriberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSubscriberRequest object.
 */
UpdateSubscriberRequest::UpdateSubscriberRequest()
    : BudgetsRequest(new UpdateSubscriberRequestPrivate(BudgetsRequest::UpdateSubscriberAction, this))
{

}

bool UpdateSubscriberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSubscriberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSubscriberResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubscriberRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSubscriberRequestPrivate
 *
 * @brief  Private implementation for UpdateSubscriberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriberRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public UpdateSubscriberRequest instance.
 */
UpdateSubscriberRequestPrivate::UpdateSubscriberRequestPrivate(
    const BudgetsRequest::Action action, UpdateSubscriberRequest * const q)
    : BudgetsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSubscriberRequest instance.
 */
UpdateSubscriberRequestPrivate::UpdateSubscriberRequestPrivate(
    const UpdateSubscriberRequestPrivate &other, UpdateSubscriberRequest * const q)
    : BudgetsRequestPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws