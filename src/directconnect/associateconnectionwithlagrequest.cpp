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

#include "associateconnectionwithlagrequest.h"
#include "associateconnectionwithlagrequest_p.h"
#include "associateconnectionwithlagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateConnectionWithLagRequest
 *
 * \brief The AssociateConnectionWithLagRequest class encapsulates DirectConnect AssociateConnectionWithLag requests.
 *
 * \ingroup DirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::associateConnectionWithLag
 */

/*!
 * @brief  Constructs a new AssociateConnectionWithLagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest(const AssociateConnectionWithLagRequest &other)
    : DirectConnectRequest(new AssociateConnectionWithLagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AssociateConnectionWithLagRequest object.
 */
AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest()
    : DirectConnectRequest(new AssociateConnectionWithLagRequestPrivate(DirectConnectRequest::AssociateConnectionWithLagAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateConnectionWithLagRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AssociateConnectionWithLagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateConnectionWithLagResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateConnectionWithLagRequest::response(QNetworkReply * const reply) const
{
    return new AssociateConnectionWithLagResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AssociateConnectionWithLagRequestPrivate
 *
 * @brief  Private implementation for AssociateConnectionWithLagRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateConnectionWithLagRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AssociateConnectionWithLagRequest instance.
 */
AssociateConnectionWithLagRequestPrivate::AssociateConnectionWithLagRequestPrivate(
    const DirectConnectRequest::Action action, AssociateConnectionWithLagRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateConnectionWithLagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateConnectionWithLagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateConnectionWithLagRequest instance.
 */
AssociateConnectionWithLagRequestPrivate::AssociateConnectionWithLagRequestPrivate(
    const AssociateConnectionWithLagRequestPrivate &other, AssociateConnectionWithLagRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
