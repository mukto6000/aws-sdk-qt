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

#include "createdbsecuritygrouprequest.h"
#include "createdbsecuritygrouprequest_p.h"
#include "createdbsecuritygroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBSecurityGroupRequest
 *
 * @brief  Implements RDS CreateDBSecurityGroup requests.
 *
 * @see    RDSClient::createDBSecurityGroup
 */

/**
 * @brief  Constructs a new CreateDBSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBSecurityGroupRequest::CreateDBSecurityGroupRequest(const CreateDBSecurityGroupRequest &other)
    : RDSRequest(new CreateDBSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBSecurityGroupRequest object.
 */
CreateDBSecurityGroupRequest::CreateDBSecurityGroupRequest()
    : RDSRequest(new CreateDBSecurityGroupRequestPrivate(RDSRequest::CreateDBSecurityGroupAction, this))
{

}

bool CreateDBSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBSecurityGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for CreateDBSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSecurityGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBSecurityGroupRequest instance.
 */
CreateDBSecurityGroupRequestPrivate::CreateDBSecurityGroupRequestPrivate(
    const RDSRequest::Action action, CreateDBSecurityGroupRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBSecurityGroupRequest instance.
 */
CreateDBSecurityGroupRequestPrivate::CreateDBSecurityGroupRequestPrivate(
    const CreateDBSecurityGroupRequestPrivate &other, CreateDBSecurityGroupRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws