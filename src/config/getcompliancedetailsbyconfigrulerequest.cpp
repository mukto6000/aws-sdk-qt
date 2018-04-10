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

#include "getcompliancedetailsbyconfigrulerequest.h"
#include "getcompliancedetailsbyconfigrulerequest_p.h"
#include "getcompliancedetailsbyconfigruleresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetComplianceDetailsByConfigRuleRequest
 *
 * @brief  Implements ConfigService GetComplianceDetailsByConfigRule requests.
 *
 * @see    ConfigServiceClient::getComplianceDetailsByConfigRule
 */

/**
 * @brief  Constructs a new GetComplianceDetailsByConfigRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetComplianceDetailsByConfigRuleRequest::GetComplianceDetailsByConfigRuleRequest(const GetComplianceDetailsByConfigRuleRequest &other)
    : ConfigServiceRequest(new GetComplianceDetailsByConfigRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetComplianceDetailsByConfigRuleRequest object.
 */
GetComplianceDetailsByConfigRuleRequest::GetComplianceDetailsByConfigRuleRequest()
    : ConfigServiceRequest(new GetComplianceDetailsByConfigRuleRequestPrivate(ConfigServiceRequest::GetComplianceDetailsByConfigRuleAction, this))
{

}

bool GetComplianceDetailsByConfigRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetComplianceDetailsByConfigRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetComplianceDetailsByConfigRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComplianceDetailsByConfigRuleRequest::response(QNetworkReply * const reply) const
{
    return new GetComplianceDetailsByConfigRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetComplianceDetailsByConfigRuleRequestPrivate
 *
 * @brief  Private implementation for GetComplianceDetailsByConfigRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailsByConfigRuleRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetComplianceDetailsByConfigRuleRequest instance.
 */
GetComplianceDetailsByConfigRuleRequestPrivate::GetComplianceDetailsByConfigRuleRequestPrivate(
    const ConfigServiceRequest::Action action, GetComplianceDetailsByConfigRuleRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailsByConfigRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetComplianceDetailsByConfigRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetComplianceDetailsByConfigRuleRequest instance.
 */
GetComplianceDetailsByConfigRuleRequestPrivate::GetComplianceDetailsByConfigRuleRequestPrivate(
    const GetComplianceDetailsByConfigRuleRequestPrivate &other, GetComplianceDetailsByConfigRuleRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws