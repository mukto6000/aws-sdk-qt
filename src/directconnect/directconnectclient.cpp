// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "directconnectclient.h"
#include "directconnectclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptdirectconnectgatewayassociationproposalrequest.h"
#include "acceptdirectconnectgatewayassociationproposalresponse.h"
#include "allocateconnectiononinterconnectrequest.h"
#include "allocateconnectiononinterconnectresponse.h"
#include "allocatehostedconnectionrequest.h"
#include "allocatehostedconnectionresponse.h"
#include "allocateprivatevirtualinterfacerequest.h"
#include "allocateprivatevirtualinterfaceresponse.h"
#include "allocatepublicvirtualinterfacerequest.h"
#include "allocatepublicvirtualinterfaceresponse.h"
#include "allocatetransitvirtualinterfacerequest.h"
#include "allocatetransitvirtualinterfaceresponse.h"
#include "associateconnectionwithlagrequest.h"
#include "associateconnectionwithlagresponse.h"
#include "associatehostedconnectionrequest.h"
#include "associatehostedconnectionresponse.h"
#include "associatemacseckeyrequest.h"
#include "associatemacseckeyresponse.h"
#include "associatevirtualinterfacerequest.h"
#include "associatevirtualinterfaceresponse.h"
#include "confirmconnectionrequest.h"
#include "confirmconnectionresponse.h"
#include "confirmcustomeragreementrequest.h"
#include "confirmcustomeragreementresponse.h"
#include "confirmprivatevirtualinterfacerequest.h"
#include "confirmprivatevirtualinterfaceresponse.h"
#include "confirmpublicvirtualinterfacerequest.h"
#include "confirmpublicvirtualinterfaceresponse.h"
#include "confirmtransitvirtualinterfacerequest.h"
#include "confirmtransitvirtualinterfaceresponse.h"
#include "createbgppeerrequest.h"
#include "createbgppeerresponse.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createdirectconnectgatewayrequest.h"
#include "createdirectconnectgatewayresponse.h"
#include "createdirectconnectgatewayassociationrequest.h"
#include "createdirectconnectgatewayassociationresponse.h"
#include "createdirectconnectgatewayassociationproposalrequest.h"
#include "createdirectconnectgatewayassociationproposalresponse.h"
#include "createinterconnectrequest.h"
#include "createinterconnectresponse.h"
#include "createlagrequest.h"
#include "createlagresponse.h"
#include "createprivatevirtualinterfacerequest.h"
#include "createprivatevirtualinterfaceresponse.h"
#include "createpublicvirtualinterfacerequest.h"
#include "createpublicvirtualinterfaceresponse.h"
#include "createtransitvirtualinterfacerequest.h"
#include "createtransitvirtualinterfaceresponse.h"
#include "deletebgppeerrequest.h"
#include "deletebgppeerresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deletedirectconnectgatewayrequest.h"
#include "deletedirectconnectgatewayresponse.h"
#include "deletedirectconnectgatewayassociationrequest.h"
#include "deletedirectconnectgatewayassociationresponse.h"
#include "deletedirectconnectgatewayassociationproposalrequest.h"
#include "deletedirectconnectgatewayassociationproposalresponse.h"
#include "deleteinterconnectrequest.h"
#include "deleteinterconnectresponse.h"
#include "deletelagrequest.h"
#include "deletelagresponse.h"
#include "deletevirtualinterfacerequest.h"
#include "deletevirtualinterfaceresponse.h"
#include "describeconnectionloarequest.h"
#include "describeconnectionloaresponse.h"
#include "describeconnectionsrequest.h"
#include "describeconnectionsresponse.h"
#include "describeconnectionsoninterconnectrequest.h"
#include "describeconnectionsoninterconnectresponse.h"
#include "describecustomermetadatarequest.h"
#include "describecustomermetadataresponse.h"
#include "describedirectconnectgatewayassociationproposalsrequest.h"
#include "describedirectconnectgatewayassociationproposalsresponse.h"
#include "describedirectconnectgatewayassociationsrequest.h"
#include "describedirectconnectgatewayassociationsresponse.h"
#include "describedirectconnectgatewayattachmentsrequest.h"
#include "describedirectconnectgatewayattachmentsresponse.h"
#include "describedirectconnectgatewaysrequest.h"
#include "describedirectconnectgatewaysresponse.h"
#include "describehostedconnectionsrequest.h"
#include "describehostedconnectionsresponse.h"
#include "describeinterconnectloarequest.h"
#include "describeinterconnectloaresponse.h"
#include "describeinterconnectsrequest.h"
#include "describeinterconnectsresponse.h"
#include "describelagsrequest.h"
#include "describelagsresponse.h"
#include "describeloarequest.h"
#include "describeloaresponse.h"
#include "describelocationsrequest.h"
#include "describelocationsresponse.h"
#include "describerouterconfigurationrequest.h"
#include "describerouterconfigurationresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describevirtualgatewaysrequest.h"
#include "describevirtualgatewaysresponse.h"
#include "describevirtualinterfacesrequest.h"
#include "describevirtualinterfacesresponse.h"
#include "disassociateconnectionfromlagrequest.h"
#include "disassociateconnectionfromlagresponse.h"
#include "disassociatemacseckeyrequest.h"
#include "disassociatemacseckeyresponse.h"
#include "listvirtualinterfacetesthistoryrequest.h"
#include "listvirtualinterfacetesthistoryresponse.h"
#include "startbgpfailovertestrequest.h"
#include "startbgpfailovertestresponse.h"
#include "stopbgpfailovertestrequest.h"
#include "stopbgpfailovertestresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconnectionrequest.h"
#include "updateconnectionresponse.h"
#include "updatedirectconnectgatewayrequest.h"
#include "updatedirectconnectgatewayresponse.h"
#include "updatedirectconnectgatewayassociationrequest.h"
#include "updatedirectconnectgatewayassociationresponse.h"
#include "updatelagrequest.h"
#include "updatelagresponse.h"
#include "updatevirtualinterfaceattributesrequest.h"
#include "updatevirtualinterfaceattributesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DirectConnect
 * \brief Contains classess for accessing AWS Direct Connect.
 *
 * \inmodule QtAwsDirectConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DirectConnectClient
 * \brief The DirectConnectClient class provides access to the AWS Direct Connect service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 */

/*!
 * \brief Constructs a DirectConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DirectConnectClient::DirectConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DirectConnectClientPrivate(this), parent)
{
    Q_D(DirectConnectClient);
    d->apiVersion = QStringLiteral("2012-10-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("directconnect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Direct Connect");
    d->serviceName = QStringLiteral("directconnect");
}

/*!
 * \overload DirectConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DirectConnectClient::DirectConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DirectConnectClientPrivate(this), parent)
{
    Q_D(DirectConnectClient);
    d->apiVersion = QStringLiteral("2012-10-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("directconnect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Direct Connect");
    d->serviceName = QStringLiteral("directconnect");
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AcceptDirectConnectGatewayAssociationProposalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a proposal request to attach a virtual private gateway or transit gateway to a Direct Connect
 */
AcceptDirectConnectGatewayAssociationProposalResponse * DirectConnectClient::acceptDirectConnectGatewayAssociationProposal(const AcceptDirectConnectGatewayAssociationProposalRequest &request)
{
    return qobject_cast<AcceptDirectConnectGatewayAssociationProposalResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AllocateConnectionOnInterconnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <a>AllocateHostedConnection</a>
 *
 * instead>
 *
 * Creates a hosted connection on an
 *
 * interconnect>
 *
 * Allocates a VLAN number and a specified amount of bandwidth for use by a hosted connection on the specified
 *
 * interconnect> <note>
 *
 * Intended for use by Direct Connect Partners
 */
AllocateConnectionOnInterconnectResponse * DirectConnectClient::allocateConnectionOnInterconnect(const AllocateConnectionOnInterconnectRequest &request)
{
    return qobject_cast<AllocateConnectionOnInterconnectResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AllocateHostedConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a hosted connection on the specified interconnect or a link aggregation group (LAG) of
 *
 * interconnects>
 *
 * Allocates a VLAN number and a specified amount of capacity (bandwidth) for use by a hosted connection on the specified
 * interconnect or LAG of interconnects. Amazon Web Services polices the hosted connection for the specified capacity and
 * the Direct Connect Partner must also police the hosted connection for the specified
 *
 * capacity> <note>
 *
 * Intended for use by Direct Connect Partners
 */
AllocateHostedConnectionResponse * DirectConnectClient::allocateHostedConnection(const AllocateHostedConnectionRequest &request)
{
    return qobject_cast<AllocateHostedConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AllocatePrivateVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a private virtual interface to be owned by the specified Amazon Web Services
 *
 * account>
 *
 * Virtual interfaces created using this action must be confirmed by the owner using <a>ConfirmPrivateVirtualInterface</a>.
 * Until then, the virtual interface is in the <code>Confirming</code> state and is not available to handle
 */
AllocatePrivateVirtualInterfaceResponse * DirectConnectClient::allocatePrivateVirtualInterface(const AllocatePrivateVirtualInterfaceRequest &request)
{
    return qobject_cast<AllocatePrivateVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AllocatePublicVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a public virtual interface to be owned by the specified Amazon Web Services
 *
 * account>
 *
 * The owner of a connection calls this function to provision a public virtual interface to be owned by the specified
 * Amazon Web Services
 *
 * account>
 *
 * Virtual interfaces created using this function must be confirmed by the owner using
 * <a>ConfirmPublicVirtualInterface</a>. Until this step has been completed, the virtual interface is in the
 * <code>confirming</code> state and is not available to handle
 *
 * traffic>
 *
 * When creating an IPv6 public virtual interface, omit the Amazon address and customer address. IPv6 addresses are
 * automatically assigned from the Amazon pool of IPv6 addresses; you cannot specify custom IPv6
 */
AllocatePublicVirtualInterfaceResponse * DirectConnectClient::allocatePublicVirtualInterface(const AllocatePublicVirtualInterfaceRequest &request)
{
    return qobject_cast<AllocatePublicVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AllocateTransitVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a transit virtual interface to be owned by the specified Amazon Web Services account. Use this type of
 * interface to connect a transit gateway to your Direct Connect
 *
 * gateway>
 *
 * The owner of a connection provisions a transit virtual interface to be owned by the specified Amazon Web Services
 *
 * account>
 *
 * After you create a transit virtual interface, it must be confirmed by the owner using
 * <a>ConfirmTransitVirtualInterface</a>. Until this step has been completed, the transit virtual interface is in the
 * <code>requested</code> state and is not available to handle
 */
AllocateTransitVirtualInterfaceResponse * DirectConnectClient::allocateTransitVirtualInterface(const AllocateTransitVirtualInterfaceRequest &request)
{
    return qobject_cast<AllocateTransitVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AssociateConnectionWithLagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an existing connection with a link aggregation group (LAG). The connection is interrupted and re-established
 * as a member of the LAG (connectivity to Amazon Web Services is interrupted). The connection must be hosted on the same
 * Direct Connect endpoint as the LAG, and its bandwidth must match the bandwidth for the LAG. You can re-associate a
 * connection that's currently associated with a different LAG; however, if removing the connection would cause the
 * original LAG to fall below its setting for minimum number of operational connections, the request
 *
 * fails>
 *
 * Any virtual interfaces that are directly associated with the connection are automatically re-associated with the LAG. If
 * the connection was originally associated with a different LAG, the virtual interfaces remain associated with the
 * original
 *
 * LAG>
 *
 * For interconnects, any hosted connections are automatically re-associated with the LAG. If the interconnect was
 * originally associated with a different LAG, the hosted connections remain associated with the original
 */
AssociateConnectionWithLagResponse * DirectConnectClient::associateConnectionWithLag(const AssociateConnectionWithLagRequest &request)
{
    return qobject_cast<AssociateConnectionWithLagResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AssociateHostedConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a hosted connection and its virtual interfaces with a link aggregation group (LAG) or interconnect. If the
 * target interconnect or LAG has an existing hosted connection with a conflicting VLAN number or IP address, the operation
 * fails. This action temporarily interrupts the hosted connection's connectivity to Amazon Web Services as it is being
 *
 * migrated> <note>
 *
 * Intended for use by Direct Connect Partners
 */
AssociateHostedConnectionResponse * DirectConnectClient::associateHostedConnection(const AssociateHostedConnectionRequest &request)
{
    return qobject_cast<AssociateHostedConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AssociateMacSecKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a MAC Security (MACsec) Connection Key Name (CKN)/ Connectivity Association Key (CAK) pair with an Direct
 * Connect dedicated
 *
 * connection>
 *
 * You must supply either the <code>secretARN,</code> or the CKN/CAK (<code>ckn</code> and <code>cak</code>) pair in the
 *
 * request>
 *
 * For information about MAC Security (MACsec) key considerations, see <a
 * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/direct-connect-mac-sec-getting-started.html#mac-sec-key-consideration">MACsec
 * pre-shared CKN/CAK key considerations </a> in the <i>Direct Connect User
 */
AssociateMacSecKeyResponse * DirectConnectClient::associateMacSecKey(const AssociateMacSecKeyRequest &request)
{
    return qobject_cast<AssociateMacSecKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * AssociateVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a virtual interface with a specified link aggregation group (LAG) or connection. Connectivity to Amazon Web
 * Services is temporarily interrupted as the virtual interface is being migrated. If the target connection or LAG has an
 * associated virtual interface with a conflicting VLAN number or a conflicting IP address, the operation
 *
 * fails>
 *
 * Virtual interfaces associated with a hosted connection cannot be associated with a LAG; hosted connections must be
 * migrated along with their virtual interfaces using
 *
 * <a>AssociateHostedConnection</a>>
 *
 * To reassociate a virtual interface to a new connection or LAG, the requester must own either the virtual interface
 * itself or the connection to which the virtual interface is currently associated. Additionally, the requester must own
 * the connection or LAG for the
 */
AssociateVirtualInterfaceResponse * DirectConnectClient::associateVirtualInterface(const AssociateVirtualInterfaceRequest &request)
{
    return qobject_cast<AssociateVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * ConfirmConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Confirms the creation of the specified hosted connection on an
 *
 * interconnect>
 *
 * Upon creation, the hosted connection is initially in the <code>Ordering</code> state, and remains in this state until
 * the owner confirms creation of the hosted
 */
ConfirmConnectionResponse * DirectConnectClient::confirmConnection(const ConfirmConnectionRequest &request)
{
    return qobject_cast<ConfirmConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * ConfirmCustomerAgreementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The confirmation of the terms of agreement when creating the connection/link aggregation group (LAG).
 */
ConfirmCustomerAgreementResponse * DirectConnectClient::confirmCustomerAgreement(const ConfirmCustomerAgreementRequest &request)
{
    return qobject_cast<ConfirmCustomerAgreementResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * ConfirmPrivateVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts ownership of a private virtual interface created by another Amazon Web Services
 *
 * account>
 *
 * After the virtual interface owner makes this call, the virtual interface is created and attached to the specified
 * virtual private gateway or Direct Connect gateway, and is made available to handle
 */
ConfirmPrivateVirtualInterfaceResponse * DirectConnectClient::confirmPrivateVirtualInterface(const ConfirmPrivateVirtualInterfaceRequest &request)
{
    return qobject_cast<ConfirmPrivateVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * ConfirmPublicVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts ownership of a public virtual interface created by another Amazon Web Services
 *
 * account>
 *
 * After the virtual interface owner makes this call, the specified virtual interface is created and made available to
 * handle
 */
ConfirmPublicVirtualInterfaceResponse * DirectConnectClient::confirmPublicVirtualInterface(const ConfirmPublicVirtualInterfaceRequest &request)
{
    return qobject_cast<ConfirmPublicVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * ConfirmTransitVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts ownership of a transit virtual interface created by another Amazon Web Services
 *
 * account>
 *
 * After the owner of the transit virtual interface makes this call, the specified transit virtual interface is created and
 * made available to handle
 */
ConfirmTransitVirtualInterfaceResponse * DirectConnectClient::confirmTransitVirtualInterface(const ConfirmTransitVirtualInterfaceRequest &request)
{
    return qobject_cast<ConfirmTransitVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateBGPPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a BGP peer on the specified virtual
 *
 * interface>
 *
 * You must create a BGP peer for the corresponding address family (IPv4/IPv6) in order to access Amazon Web Services
 * resources that also use that address
 *
 * family>
 *
 * If logical redundancy is not supported by the connection, interconnect, or LAG, the BGP peer cannot be in the same
 * address family as an existing BGP peer on the virtual
 *
 * interface>
 *
 * When creating a IPv6 BGP peer, omit the Amazon address and customer address. IPv6 addresses are automatically assigned
 * from the Amazon pool of IPv6 addresses; you cannot specify custom IPv6
 *
 * addresses>
 *
 * For a public virtual interface, the Autonomous System Number (ASN) must be private or already on the allow list for the
 * virtual
 */
CreateBGPPeerResponse * DirectConnectClient::createBGPPeer(const CreateBGPPeerRequest &request)
{
    return qobject_cast<CreateBGPPeerResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connection between a customer network and a specific Direct Connect
 *
 * location>
 *
 * A connection links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 * end of the cable is connected to your router, the other to an Direct Connect
 *
 * router>
 *
 * To find the locations for your Region, use
 *
 * <a>DescribeLocations</a>>
 *
 * You can automatically add the new connection to a link aggregation group (LAG) by specifying a LAG ID in the request.
 * This ensures that the new connection is allocated on the same Direct Connect endpoint that hosts the specified LAG. If
 * there are no available ports on the endpoint, the request fails and no connection is
 */
CreateConnectionResponse * DirectConnectClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateDirectConnectGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Direct Connect gateway, which is an intermediate object that enables you to connect a set of virtual
 * interfaces and virtual private gateways. A Direct Connect gateway is global and visible in any Amazon Web Services
 * Region after it is created. The virtual interfaces and virtual private gateways that are connected through a Direct
 * Connect gateway can be in different Amazon Web Services Regions. This enables you to connect to a VPC in any Region,
 * regardless of the Region in which the virtual interfaces are located, and pass traffic between
 */
CreateDirectConnectGatewayResponse * DirectConnectClient::createDirectConnectGateway(const CreateDirectConnectGatewayRequest &request)
{
    return qobject_cast<CreateDirectConnectGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateDirectConnectGatewayAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between a Direct Connect gateway and a virtual private gateway. The virtual private gateway must
 * be attached to a VPC and must not be associated with another Direct Connect
 */
CreateDirectConnectGatewayAssociationResponse * DirectConnectClient::createDirectConnectGatewayAssociation(const CreateDirectConnectGatewayAssociationRequest &request)
{
    return qobject_cast<CreateDirectConnectGatewayAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateDirectConnectGatewayAssociationProposalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a proposal to associate the specified virtual private gateway or transit gateway with the specified Direct
 * Connect
 *
 * gateway>
 *
 * You can associate a Direct Connect gateway and virtual private gateway or transit gateway that is owned by any Amazon
 * Web Services account.
 */
CreateDirectConnectGatewayAssociationProposalResponse * DirectConnectClient::createDirectConnectGatewayAssociationProposal(const CreateDirectConnectGatewayAssociationProposalRequest &request)
{
    return qobject_cast<CreateDirectConnectGatewayAssociationProposalResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateInterconnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an interconnect between an Direct Connect Partner's network and a specific Direct Connect
 *
 * location>
 *
 * An interconnect is a connection that is capable of hosting other connections. The Direct Connect Partner can use an
 * interconnect to provide Direct Connect hosted connections to customers through their own network services. Like a
 * standard connection, an interconnect links the partner's network to an Direct Connect location over a standard Ethernet
 * fiber-optic cable. One end is connected to the partner's router, the other to an Direct Connect
 *
 * router>
 *
 * You can automatically add the new interconnect to a link aggregation group (LAG) by specifying a LAG ID in the request.
 * This ensures that the new interconnect is allocated on the same Direct Connect endpoint that hosts the specified LAG. If
 * there are no available ports on the endpoint, the request fails and no interconnect is
 *
 * created>
 *
 * For each end customer, the Direct Connect Partner provisions a connection on their interconnect by calling
 * <a>AllocateHostedConnection</a>. The end customer can then connect to Amazon Web Services resources by creating a
 * virtual interface on their connection, using the VLAN assigned to them by the Direct Connect
 *
 * Partner> <note>
 *
 * Intended for use by Direct Connect Partners
 */
CreateInterconnectResponse * DirectConnectClient::createInterconnect(const CreateInterconnectRequest &request)
{
    return qobject_cast<CreateInterconnectResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateLagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a link aggregation group (LAG) with the specified number of bundled physical dedicated connections between the
 * customer network and a specific Direct Connect location. A LAG is a logical interface that uses the Link Aggregation
 * Control Protocol (LACP) to aggregate multiple interfaces, enabling you to treat them as a single
 *
 * interface>
 *
 * All connections in a LAG must use the same bandwidth (either 1Gbps or 10Gbps) and must terminate at the same Direct
 * Connect
 *
 * endpoint>
 *
 * You can have up to 10 dedicated connections per LAG. Regardless of this limit, if you request more connections for the
 * LAG than Direct Connect can allocate on a single endpoint, no LAG is
 *
 * created>
 *
 * You can specify an existing physical dedicated connection or interconnect to include in the LAG (which counts towards
 * the total number of connections). Doing so interrupts the current physical dedicated connection, and re-establishes them
 * as a member of the LAG. The LAG will be created on the same Direct Connect endpoint to which the dedicated connection
 * terminates. Any virtual interfaces associated with the dedicated connection are automatically disassociated and
 * re-associated with the LAG. The connection ID does not
 *
 * change>
 *
 * If the Amazon Web Services account used to create a LAG is a registered Direct Connect Partner, the LAG is automatically
 * enabled to host sub-connections. For a LAG owned by a partner, any associated virtual interfaces cannot be directly
 */
CreateLagResponse * DirectConnectClient::createLag(const CreateLagRequest &request)
{
    return qobject_cast<CreateLagResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreatePrivateVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a private virtual interface. A virtual interface is the VLAN that transports Direct Connect traffic. A private
 * virtual interface can be connected to either a Direct Connect gateway or a Virtual Private Gateway (VGW). Connecting the
 * private virtual interface to a Direct Connect gateway enables the possibility for connecting to multiple VPCs, including
 * VPCs in different Amazon Web Services Regions. Connecting the private virtual interface to a VGW only provides access to
 * a single VPC within the same
 *
 * Region>
 *
 * Setting the MTU of a virtual interface to 9001 (jumbo frames) can cause an update to the underlying physical connection
 * if it wasn't updated to support jumbo frames. Updating the connection disrupts network connectivity for all virtual
 * interfaces associated with the connection for up to 30 seconds. To check whether your connection supports jumbo frames,
 * call <a>DescribeConnections</a>. To check whether your virtual interface supports jumbo frames, call
 */
CreatePrivateVirtualInterfaceResponse * DirectConnectClient::createPrivateVirtualInterface(const CreatePrivateVirtualInterfaceRequest &request)
{
    return qobject_cast<CreatePrivateVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreatePublicVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a public virtual interface. A virtual interface is the VLAN that transports Direct Connect traffic. A public
 * virtual interface supports sending traffic to public services of Amazon Web Services such as Amazon
 *
 * S3>
 *
 * When creating an IPv6 public virtual interface (<code>addressFamily</code> is <code>ipv6</code>), leave the
 * <code>customer</code> and <code>amazon</code> address fields blank to use auto-assigned IPv6 space. Custom IPv6
 * addresses are not
 */
CreatePublicVirtualInterfaceResponse * DirectConnectClient::createPublicVirtualInterface(const CreatePublicVirtualInterfaceRequest &request)
{
    return qobject_cast<CreatePublicVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * CreateTransitVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a transit virtual interface. A transit virtual interface should be used to access one or more transit gateways
 * associated with Direct Connect gateways. A transit virtual interface enables the connection of multiple VPCs attached to
 * a transit gateway to a Direct Connect
 *
 * gateway> <b>
 *
 * If you associate your transit gateway with one or more Direct Connect gateways, the Autonomous System Number (ASN) used
 * by the transit gateway and the Direct Connect gateway must be different. For example, if you use the default ASN 64512
 * for both your the transit gateway and Direct Connect gateway, the association request
 *
 * fails> </b>
 *
 * Setting the MTU of a virtual interface to 8500 (jumbo frames) can cause an update to the underlying physical connection
 * if it wasn't updated to support jumbo frames. Updating the connection disrupts network connectivity for all virtual
 * interfaces associated with the connection for up to 30 seconds. To check whether your connection supports jumbo frames,
 * call <a>DescribeConnections</a>. To check whether your virtual interface supports jumbo frames, call
 */
CreateTransitVirtualInterfaceResponse * DirectConnectClient::createTransitVirtualInterface(const CreateTransitVirtualInterfaceRequest &request)
{
    return qobject_cast<CreateTransitVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteBGPPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified BGP peer on the specified virtual interface with the specified customer address and
 *
 * ASN>
 *
 * You cannot delete the last BGP peer from a virtual
 */
DeleteBGPPeerResponse * DirectConnectClient::deleteBGPPeer(const DeleteBGPPeerRequest &request)
{
    return qobject_cast<DeleteBGPPeerResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * connection>
 *
 * Deleting a connection only stops the Direct Connect port hour and data transfer charges. If you are partnering with any
 * third parties to connect with the Direct Connect location, you must cancel your service with them
 */
DeleteConnectionResponse * DirectConnectClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteDirectConnectGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Direct Connect gateway. You must first delete all virtual interfaces that are attached to the
 * Direct Connect gateway and disassociate all virtual private gateways associated with the Direct Connect
 */
DeleteDirectConnectGatewayResponse * DirectConnectClient::deleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request)
{
    return qobject_cast<DeleteDirectConnectGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteDirectConnectGatewayAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association between the specified Direct Connect gateway and virtual private
 *
 * gateway>
 *
 * We recommend that you specify the <code>associationID</code> to delete the association. Alternatively, if you own
 * virtual gateway and a Direct Connect gateway association, you can specify the <code>virtualGatewayId</code> and
 * <code>directConnectGatewayId</code> to delete an
 */
DeleteDirectConnectGatewayAssociationResponse * DirectConnectClient::deleteDirectConnectGatewayAssociation(const DeleteDirectConnectGatewayAssociationRequest &request)
{
    return qobject_cast<DeleteDirectConnectGatewayAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteDirectConnectGatewayAssociationProposalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association proposal request between the specified Direct Connect gateway and virtual private gateway or
 * transit
 */
DeleteDirectConnectGatewayAssociationProposalResponse * DirectConnectClient::deleteDirectConnectGatewayAssociationProposal(const DeleteDirectConnectGatewayAssociationProposalRequest &request)
{
    return qobject_cast<DeleteDirectConnectGatewayAssociationProposalResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteInterconnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * interconnect> <note>
 *
 * Intended for use by Direct Connect Partners
 */
DeleteInterconnectResponse * DirectConnectClient::deleteInterconnect(const DeleteInterconnectRequest &request)
{
    return qobject_cast<DeleteInterconnectResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteLagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified link aggregation group (LAG). You cannot delete a LAG if it has active virtual interfaces or
 * hosted
 */
DeleteLagResponse * DirectConnectClient::deleteLag(const DeleteLagRequest &request)
{
    return qobject_cast<DeleteLagResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DeleteVirtualInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a virtual
 */
DeleteVirtualInterfaceResponse * DirectConnectClient::deleteVirtualInterface(const DeleteVirtualInterfaceRequest &request)
{
    return qobject_cast<DeleteVirtualInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeConnectionLoaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <a>DescribeLoa</a>
 *
 * instead>
 *
 * Gets the LOA-CFA for a
 *
 * connection>
 *
 * The Letter of Authorization - Connecting Facility Assignment (LOA-CFA) is a document that your APN partner or service
 * provider uses when establishing your cross connect to Amazon Web Services at the colocation facility. For more
 * information, see <a href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting Cross
 * Connects at Direct Connect Locations</a> in the <i>Direct Connect User
 */
DescribeConnectionLoaResponse * DirectConnectClient::describeConnectionLoa(const DescribeConnectionLoaRequest &request)
{
    return qobject_cast<DescribeConnectionLoaResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the specified connection or all connections in this
 */
DescribeConnectionsResponse * DirectConnectClient::describeConnections(const DescribeConnectionsRequest &request)
{
    return qobject_cast<DescribeConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeConnectionsOnInterconnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <a>DescribeHostedConnections</a>
 *
 * instead>
 *
 * Lists the connections that have been provisioned on the specified
 *
 * interconnect> <note>
 *
 * Intended for use by Direct Connect Partners
 */
DescribeConnectionsOnInterconnectResponse * DirectConnectClient::describeConnectionsOnInterconnect(const DescribeConnectionsOnInterconnectRequest &request)
{
    return qobject_cast<DescribeConnectionsOnInterconnectResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeCustomerMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get and view a list of customer agreements, along with their signed status and whether the customer is an NNIPartner,
 * NNIPartnerV2, or a nonPartner.
 */
DescribeCustomerMetadataResponse * DirectConnectClient::describeCustomerMetadata(const DescribeCustomerMetadataRequest &request)
{
    return qobject_cast<DescribeCustomerMetadataResponse *>(send(request));
}

/*!
 * Sends a DescribeCustomerMetadata request to the DirectConnectClient service, and returns a pointer to an
 * DescribeCustomerMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get and view a list of customer agreements, along with their signed status and whether the customer is an NNIPartner,
 * NNIPartnerV2, or a nonPartner.
 */
DescribeCustomerMetadataResponse * DirectConnectClient::describeCustomerMetadata()
{
    return describeCustomerMetadata(DescribeCustomerMetadataRequest());
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeDirectConnectGatewayAssociationProposalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more association proposals for connection between a virtual private gateway or transit gateway and a
 * Direct Connect gateway.
 */
DescribeDirectConnectGatewayAssociationProposalsResponse * DirectConnectClient::describeDirectConnectGatewayAssociationProposals(const DescribeDirectConnectGatewayAssociationProposalsRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewayAssociationProposalsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeDirectConnectGatewayAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the associations between your Direct Connect gateways and virtual private gateways and transit gateways. You must
 * specify one of the
 *
 * following> <ul> <li>
 *
 * A Direct Connect
 *
 * gatewa>
 *
 * The response contains all virtual private gateways and transit gateways associated with the Direct Connect
 *
 * gateway> </li> <li>
 *
 * A virtual private
 *
 * gatewa>
 *
 * The response contains the Direct Connect
 *
 * gateway> </li> <li>
 *
 * A transit
 *
 * gatewa>
 *
 * The response contains the Direct Connect
 *
 * gateway> </li> <li>
 *
 * A Direct Connect gateway and a virtual private
 *
 * gatewa>
 *
 * The response contains the association between the Direct Connect gateway and virtual private
 *
 * gateway> </li> <li>
 *
 * A Direct Connect gateway and a transit
 *
 * gatewa>
 *
 * The response contains the association between the Direct Connect gateway and transit
 */
DescribeDirectConnectGatewayAssociationsResponse * DirectConnectClient::describeDirectConnectGatewayAssociations(const DescribeDirectConnectGatewayAssociationsRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewayAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeDirectConnectGatewayAttachmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the attachments between your Direct Connect gateways and virtual interfaces. You must specify a Direct Connect
 * gateway, a virtual interface, or both. If you specify a Direct Connect gateway, the response contains all virtual
 * interfaces attached to the Direct Connect gateway. If you specify a virtual interface, the response contains all Direct
 * Connect gateways attached to the virtual interface. If you specify both, the response contains the attachment between
 * the Direct Connect gateway and the virtual
 */
DescribeDirectConnectGatewayAttachmentsResponse * DirectConnectClient::describeDirectConnectGatewayAttachments(const DescribeDirectConnectGatewayAttachmentsRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewayAttachmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeDirectConnectGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all your Direct Connect gateways or only the specified Direct Connect gateway. Deleted Direct Connect gateways are
 * not
 */
DescribeDirectConnectGatewaysResponse * DirectConnectClient::describeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeHostedConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the hosted connections that have been provisioned on the specified interconnect or link aggregation group
 *
 * (LAG)> <note>
 *
 * Intended for use by Direct Connect Partners
 */
DescribeHostedConnectionsResponse * DirectConnectClient::describeHostedConnections(const DescribeHostedConnectionsRequest &request)
{
    return qobject_cast<DescribeHostedConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeInterconnectLoaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <a>DescribeLoa</a>
 *
 * instead>
 *
 * Gets the LOA-CFA for the specified
 *
 * interconnect>
 *
 * The Letter of Authorization - Connecting Facility Assignment (LOA-CFA) is a document that is used when establishing your
 * cross connect to Amazon Web Services at the colocation facility. For more information, see <a
 * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting Cross Connects at Direct
 * Connect Locations</a> in the <i>Direct Connect User
 */
DescribeInterconnectLoaResponse * DirectConnectClient::describeInterconnectLoa(const DescribeInterconnectLoaRequest &request)
{
    return qobject_cast<DescribeInterconnectLoaResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeInterconnectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the interconnects owned by the Amazon Web Services account or only the specified
 */
DescribeInterconnectsResponse * DirectConnectClient::describeInterconnects(const DescribeInterconnectsRequest &request)
{
    return qobject_cast<DescribeInterconnectsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeLagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes all your link aggregation groups (LAG) or the specified
 */
DescribeLagsResponse * DirectConnectClient::describeLags(const DescribeLagsRequest &request)
{
    return qobject_cast<DescribeLagsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeLoaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the LOA-CFA for a connection, interconnect, or link aggregation group
 *
 * (LAG)>
 *
 * The Letter of Authorization - Connecting Facility Assignment (LOA-CFA) is a document that is used when establishing your
 * cross connect to Amazon Web Services at the colocation facility. For more information, see <a
 * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting Cross Connects at Direct
 * Connect Locations</a> in the <i>Direct Connect User
 */
DescribeLoaResponse * DirectConnectClient::describeLoa(const DescribeLoaRequest &request)
{
    return qobject_cast<DescribeLoaResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Direct Connect locations in the current Amazon Web Services Region. These are the locations that can be
 * selected when calling <a>CreateConnection</a> or
 */
DescribeLocationsResponse * DirectConnectClient::describeLocations(const DescribeLocationsRequest &request)
{
    return qobject_cast<DescribeLocationsResponse *>(send(request));
}

/*!
 * Sends a DescribeLocations request to the DirectConnectClient service, and returns a pointer to an
 * DescribeLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Direct Connect locations in the current Amazon Web Services Region. These are the locations that can be
 * selected when calling <a>CreateConnection</a> or
 */
DescribeLocationsResponse * DirectConnectClient::describeLocations()
{
    return describeLocations(DescribeLocationsRequest());
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeRouterConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Details about the router.
 */
DescribeRouterConfigurationResponse * DirectConnectClient::describeRouterConfiguration(const DescribeRouterConfigurationRequest &request)
{
    return qobject_cast<DescribeRouterConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the tags associated with the specified Direct Connect
 */
DescribeTagsResponse * DirectConnectClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeVirtualGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the virtual private gateways owned by the Amazon Web Services
 *
 * account>
 *
 * You can create one or more Direct Connect private virtual interfaces linked to a virtual private
 */
DescribeVirtualGatewaysResponse * DirectConnectClient::describeVirtualGateways(const DescribeVirtualGatewaysRequest &request)
{
    return qobject_cast<DescribeVirtualGatewaysResponse *>(send(request));
}

/*!
 * Sends a DescribeVirtualGateways request to the DirectConnectClient service, and returns a pointer to an
 * DescribeVirtualGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the virtual private gateways owned by the Amazon Web Services
 *
 * account>
 *
 * You can create one or more Direct Connect private virtual interfaces linked to a virtual private
 */
DescribeVirtualGatewaysResponse * DirectConnectClient::describeVirtualGateways()
{
    return describeVirtualGateways(DescribeVirtualGatewaysRequest());
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DescribeVirtualInterfacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays all virtual interfaces for an Amazon Web Services account. Virtual interfaces deleted fewer than 15 minutes
 * before you make the request are also returned. If you specify a connection ID, only the virtual interfaces associated
 * with the connection are returned. If you specify a virtual interface ID, then only a single virtual interface is
 *
 * returned>
 *
 * A virtual interface (VLAN) transmits the traffic between the Direct Connect location and the customer
 */
DescribeVirtualInterfacesResponse * DirectConnectClient::describeVirtualInterfaces(const DescribeVirtualInterfacesRequest &request)
{
    return qobject_cast<DescribeVirtualInterfacesResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DisassociateConnectionFromLagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a connection from a link aggregation group (LAG). The connection is interrupted and re-established as a
 * standalone connection (the connection is not deleted; to delete the connection, use the <a>DeleteConnection</a>
 * request). If the LAG has associated virtual interfaces or hosted connections, they remain associated with the LAG. A
 * disassociated connection owned by an Direct Connect Partner is automatically converted to an
 *
 * interconnect>
 *
 * If disassociating the connection would cause the LAG to fall below its setting for minimum number of operational
 * connections, the request fails, except when it's the last member of the LAG. If all connections are disassociated, the
 * LAG continues to exist as an empty LAG with no physical connections.
 */
DisassociateConnectionFromLagResponse * DirectConnectClient::disassociateConnectionFromLag(const DisassociateConnectionFromLagRequest &request)
{
    return qobject_cast<DisassociateConnectionFromLagResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * DisassociateMacSecKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between a MAC Security (MACsec) security key and an Direct Connect dedicated
 */
DisassociateMacSecKeyResponse * DirectConnectClient::disassociateMacSecKey(const DisassociateMacSecKeyRequest &request)
{
    return qobject_cast<DisassociateMacSecKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * ListVirtualInterfaceTestHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the virtual interface failover test
 */
ListVirtualInterfaceTestHistoryResponse * DirectConnectClient::listVirtualInterfaceTestHistory(const ListVirtualInterfaceTestHistoryRequest &request)
{
    return qobject_cast<ListVirtualInterfaceTestHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * StartBgpFailoverTestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the virtual interface failover test that verifies your configuration meets your resiliency requirements by
 * placing the BGP peering session in the DOWN state. You can then send traffic to verify that there are no
 *
 * outages>
 *
 * You can run the test on public, private, transit, and hosted virtual
 *
 * interfaces>
 *
 * You can use <a
 * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_ListVirtualInterfaceTestHistory.html">ListVirtualInterfaceTestHistory</a>
 * to view the virtual interface test
 *
 * history>
 *
 * If you need to stop the test before the test interval completes, use <a
 */
StartBgpFailoverTestResponse * DirectConnectClient::startBgpFailoverTest(const StartBgpFailoverTestRequest &request)
{
    return qobject_cast<StartBgpFailoverTestResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * StopBgpFailoverTestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the virtual interface failover
 */
StopBgpFailoverTestResponse * DirectConnectClient::stopBgpFailoverTest(const StopBgpFailoverTestRequest &request)
{
    return qobject_cast<StopBgpFailoverTestResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified Direct Connect resource. Each resource can have a maximum of 50
 *
 * tags>
 *
 * Each tag consists of a key and an optional value. If a tag with the same key is already associated with the resource,
 * this action updates its
 */
TagResourceResponse * DirectConnectClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified Direct Connect
 */
UntagResourceResponse * DirectConnectClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * UpdateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Direct Connect dedicated connection
 *
 * configuration>
 *
 * You can update the following parameters for a
 *
 * connection> <ul> <li>
 *
 * The connection
 *
 * nam> </li> <li>
 *
 * The connection's MAC Security (MACsec) encryption
 */
UpdateConnectionResponse * DirectConnectClient::updateConnection(const UpdateConnectionRequest &request)
{
    return qobject_cast<UpdateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * UpdateDirectConnectGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of a current Direct Connect
 */
UpdateDirectConnectGatewayResponse * DirectConnectClient::updateDirectConnectGateway(const UpdateDirectConnectGatewayRequest &request)
{
    return qobject_cast<UpdateDirectConnectGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * UpdateDirectConnectGatewayAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified attributes of the Direct Connect gateway
 *
 * association>
 *
 * Add or remove prefixes from the
 */
UpdateDirectConnectGatewayAssociationResponse * DirectConnectClient::updateDirectConnectGatewayAssociation(const UpdateDirectConnectGatewayAssociationRequest &request)
{
    return qobject_cast<UpdateDirectConnectGatewayAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * UpdateLagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the attributes of the specified link aggregation group
 *
 * (LAG)>
 *
 * You can update the following LAG
 *
 * attributes> <ul> <li>
 *
 * The name of the
 *
 * LAG> </li> <li>
 *
 * The value for the minimum number of connections that must be operational for the LAG itself to be operational.
 *
 * </p </li> <li>
 *
 * The LAG's MACsec encryption
 *
 * mode>
 *
 * Amazon Web Services assigns this value to each connection which is part of the
 *
 * LAG> </li> <li>
 *
 * The
 *
 * tag> </li> </ul> <note>
 *
 * If you adjust the threshold value for the minimum number of operational connections, ensure that the new value does not
 * cause the LAG to fall below the threshold and become
 */
UpdateLagResponse * DirectConnectClient::updateLag(const UpdateLagRequest &request)
{
    return qobject_cast<UpdateLagResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectConnectClient service, and returns a pointer to an
 * UpdateVirtualInterfaceAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified attributes of the specified virtual private
 *
 * interface>
 *
 * Setting the MTU of a virtual interface to 9001 (jumbo frames) can cause an update to the underlying physical connection
 * if it wasn't updated to support jumbo frames. Updating the connection disrupts network connectivity for all virtual
 * interfaces associated with the connection for up to 30 seconds. To check whether your connection supports jumbo frames,
 * call <a>DescribeConnections</a>. To check whether your virtual q interface supports jumbo frames, call
 */
UpdateVirtualInterfaceAttributesResponse * DirectConnectClient::updateVirtualInterfaceAttributes(const UpdateVirtualInterfaceAttributesRequest &request)
{
    return qobject_cast<UpdateVirtualInterfaceAttributesResponse *>(send(request));
}

/*!
 * \class QtAws::DirectConnect::DirectConnectClientPrivate
 * \brief The DirectConnectClientPrivate class provides private implementation for DirectConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DirectConnectClientPrivate object with public implementation \a q.
 */
DirectConnectClientPrivate::DirectConnectClientPrivate(DirectConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DirectConnect
} // namespace QtAws
