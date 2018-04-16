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

#include "createvpcassociationauthorizationrequest.h"
#include "createvpcassociationauthorizationrequest_p.h"
#include "createvpcassociationauthorizationresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationRequest
 *
 * \brief The CreateVPCAssociationAuthorizationRequest class encapsulates Route53 CreateVPCAssociationAuthorization requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::createVPCAssociationAuthorization
 */

/*!
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest(const CreateVPCAssociationAuthorizationRequest &other)
    : Route53Request(new CreateVPCAssociationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequest object.
 */
CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest()
    : Route53Request(new CreateVPCAssociationAuthorizationRequestPrivate(Route53Request::CreateVPCAssociationAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVPCAssociationAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateVPCAssociationAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVPCAssociationAuthorizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateVPCAssociationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVPCAssociationAuthorizationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateVPCAssociationAuthorizationRequestPrivate
 *
 * @brief  Private implementation for CreateVPCAssociationAuthorizationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateVPCAssociationAuthorizationRequest instance.
 */
CreateVPCAssociationAuthorizationRequestPrivate::CreateVPCAssociationAuthorizationRequestPrivate(
    const Route53Request::Action action, CreateVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVPCAssociationAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVPCAssociationAuthorizationRequest instance.
 */
CreateVPCAssociationAuthorizationRequestPrivate::CreateVPCAssociationAuthorizationRequestPrivate(
    const CreateVPCAssociationAuthorizationRequestPrivate &other, CreateVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
