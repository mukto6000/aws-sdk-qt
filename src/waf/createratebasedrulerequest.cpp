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

#include "createratebasedrulerequest.h"
#include "createratebasedrulerequest_p.h"
#include "createratebasedruleresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  CreateRateBasedRuleRequest
 *
 * @brief  Implements WAF CreateRateBasedRule requests.
 *
 * @see    WAFClient::createRateBasedRule
 */

/**
 * @brief  Constructs a new CreateRateBasedRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRateBasedRuleRequest::CreateRateBasedRuleRequest(const CreateRateBasedRuleRequest &other)
    : WAFRequest(new CreateRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRateBasedRuleRequest object.
 */
CreateRateBasedRuleRequest::CreateRateBasedRuleRequest()
    : WAFRequest(new CreateRateBasedRuleRequestPrivate(WAFRequest::CreateRateBasedRuleAction, this))
{

}

bool CreateRateBasedRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRateBasedRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRateBasedRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRateBasedRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRateBasedRuleRequestPrivate
 *
 * @brief  Private implementation for CreateRateBasedRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRateBasedRuleRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateRateBasedRuleRequest instance.
 */
CreateRateBasedRuleRequestPrivate::CreateRateBasedRuleRequestPrivate(
    const WAFRequest::Action action, CreateRateBasedRuleRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRateBasedRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRateBasedRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRateBasedRuleRequest instance.
 */
CreateRateBasedRuleRequestPrivate::CreateRateBasedRuleRequestPrivate(
    const CreateRateBasedRuleRequestPrivate &other, CreateRateBasedRuleRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws