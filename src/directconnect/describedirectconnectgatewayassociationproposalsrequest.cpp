// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedirectconnectgatewayassociationproposalsrequest.h"
#include "describedirectconnectgatewayassociationproposalsrequest_p.h"
#include "describedirectconnectgatewayassociationproposalsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAssociationProposalsRequest
 * \brief The DescribeDirectConnectGatewayAssociationProposalsRequest class provides an interface for DirectConnect DescribeDirectConnectGatewayAssociationProposals requests.
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
 * \sa DirectConnectClient::describeDirectConnectGatewayAssociationProposals
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDirectConnectGatewayAssociationProposalsRequest::DescribeDirectConnectGatewayAssociationProposalsRequest(const DescribeDirectConnectGatewayAssociationProposalsRequest &other)
    : DirectConnectRequest(new DescribeDirectConnectGatewayAssociationProposalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDirectConnectGatewayAssociationProposalsRequest object.
 */
DescribeDirectConnectGatewayAssociationProposalsRequest::DescribeDirectConnectGatewayAssociationProposalsRequest()
    : DirectConnectRequest(new DescribeDirectConnectGatewayAssociationProposalsRequestPrivate(DirectConnectRequest::DescribeDirectConnectGatewayAssociationProposalsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDirectConnectGatewayAssociationProposalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDirectConnectGatewayAssociationProposalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDirectConnectGatewayAssociationProposalsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectConnectGatewayAssociationProposalsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAssociationProposalsRequestPrivate
 * \brief The DescribeDirectConnectGatewayAssociationProposalsRequestPrivate class provides private implementation for DescribeDirectConnectGatewayAssociationProposalsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAssociationProposalsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeDirectConnectGatewayAssociationProposalsRequestPrivate::DescribeDirectConnectGatewayAssociationProposalsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeDirectConnectGatewayAssociationProposalsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectConnectGatewayAssociationProposalsRequest
 * class' copy constructor.
 */
DescribeDirectConnectGatewayAssociationProposalsRequestPrivate::DescribeDirectConnectGatewayAssociationProposalsRequestPrivate(
    const DescribeDirectConnectGatewayAssociationProposalsRequestPrivate &other, DescribeDirectConnectGatewayAssociationProposalsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
