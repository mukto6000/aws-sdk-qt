// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbgppeerrequest.h"
#include "createbgppeerrequest_p.h"
#include "createbgppeerresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateBGPPeerRequest
 * \brief The CreateBGPPeerRequest class provides an interface for DirectConnect CreateBGPPeer requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::createBGPPeer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBGPPeerRequest::CreateBGPPeerRequest(const CreateBGPPeerRequest &other)
    : DirectConnectRequest(new CreateBGPPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBGPPeerRequest object.
 */
CreateBGPPeerRequest::CreateBGPPeerRequest()
    : DirectConnectRequest(new CreateBGPPeerRequestPrivate(DirectConnectRequest::CreateBGPPeerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBGPPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBGPPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBGPPeerRequest::response(QNetworkReply * const reply) const
{
    return new CreateBGPPeerResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateBGPPeerRequestPrivate
 * \brief The CreateBGPPeerRequestPrivate class provides private implementation for CreateBGPPeerRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateBGPPeerRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateBGPPeerRequestPrivate::CreateBGPPeerRequestPrivate(
    const DirectConnectRequest::Action action, CreateBGPPeerRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBGPPeerRequest
 * class' copy constructor.
 */
CreateBGPPeerRequestPrivate::CreateBGPPeerRequestPrivate(
    const CreateBGPPeerRequestPrivate &other, CreateBGPPeerRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
