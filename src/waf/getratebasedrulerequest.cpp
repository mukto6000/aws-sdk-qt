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

#include "getratebasedrulerequest.h"
#include "getratebasedrulerequest_p.h"
#include "getratebasedruleresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  GetRateBasedRuleRequest
 *
 * @brief  Implements WAF GetRateBasedRule requests.
 *
 * @see    WAFClient::getRateBasedRule
 */

/**
 * @brief  Constructs a new GetRateBasedRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRateBasedRuleRequest::GetRateBasedRuleRequest(const GetRateBasedRuleRequest &other)
    : WAFRequest(new GetRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRateBasedRuleRequest object.
 */
GetRateBasedRuleRequest::GetRateBasedRuleRequest()
    : WAFRequest(new GetRateBasedRuleRequestPrivate(WAFRequest::GetRateBasedRuleAction, this))
{

}

bool GetRateBasedRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRateBasedRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRateBasedRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new GetRateBasedRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRateBasedRuleRequestPrivate
 *
 * @brief  Private implementation for GetRateBasedRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRateBasedRuleRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetRateBasedRuleRequest instance.
 */
GetRateBasedRuleRequestPrivate::GetRateBasedRuleRequestPrivate(
    const WAFRequest::Action action, GetRateBasedRuleRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRateBasedRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRateBasedRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRateBasedRuleRequest instance.
 */
GetRateBasedRuleRequestPrivate::GetRateBasedRuleRequestPrivate(
    const GetRateBasedRuleRequestPrivate &other, GetRateBasedRuleRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws