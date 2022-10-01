// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebgppeerrequest.h"
#include "deletebgppeerrequest_p.h"
#include "deletebgppeerresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteBGPPeerRequest
 * \brief The DeleteBGPPeerRequest class provides an interface for DirectConnect DeleteBGPPeer requests.
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
 * \sa DirectConnectClient::deleteBGPPeer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBGPPeerRequest::DeleteBGPPeerRequest(const DeleteBGPPeerRequest &other)
    : DirectConnectRequest(new DeleteBGPPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBGPPeerRequest object.
 */
DeleteBGPPeerRequest::DeleteBGPPeerRequest()
    : DirectConnectRequest(new DeleteBGPPeerRequestPrivate(DirectConnectRequest::DeleteBGPPeerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBGPPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBGPPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBGPPeerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBGPPeerResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteBGPPeerRequestPrivate
 * \brief The DeleteBGPPeerRequestPrivate class provides private implementation for DeleteBGPPeerRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteBGPPeerRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteBGPPeerRequestPrivate::DeleteBGPPeerRequestPrivate(
    const DirectConnectRequest::Action action, DeleteBGPPeerRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBGPPeerRequest
 * class' copy constructor.
 */
DeleteBGPPeerRequestPrivate::DeleteBGPPeerRequestPrivate(
    const DeleteBGPPeerRequestPrivate &other, DeleteBGPPeerRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
