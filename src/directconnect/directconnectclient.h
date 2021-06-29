/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DIRECTCONNECTCLIENT_H
#define QTAWS_DIRECTCONNECTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdirectconnectglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DirectConnect {

class DirectConnectClientPrivate;
class AcceptDirectConnectGatewayAssociationProposalRequest;
class AcceptDirectConnectGatewayAssociationProposalResponse;
class AllocateConnectionOnInterconnectRequest;
class AllocateConnectionOnInterconnectResponse;
class AllocateHostedConnectionRequest;
class AllocateHostedConnectionResponse;
class AllocatePrivateVirtualInterfaceRequest;
class AllocatePrivateVirtualInterfaceResponse;
class AllocatePublicVirtualInterfaceRequest;
class AllocatePublicVirtualInterfaceResponse;
class AllocateTransitVirtualInterfaceRequest;
class AllocateTransitVirtualInterfaceResponse;
class AssociateConnectionWithLagRequest;
class AssociateConnectionWithLagResponse;
class AssociateHostedConnectionRequest;
class AssociateHostedConnectionResponse;
class AssociateMacSecKeyRequest;
class AssociateMacSecKeyResponse;
class AssociateVirtualInterfaceRequest;
class AssociateVirtualInterfaceResponse;
class ConfirmConnectionRequest;
class ConfirmConnectionResponse;
class ConfirmPrivateVirtualInterfaceRequest;
class ConfirmPrivateVirtualInterfaceResponse;
class ConfirmPublicVirtualInterfaceRequest;
class ConfirmPublicVirtualInterfaceResponse;
class ConfirmTransitVirtualInterfaceRequest;
class ConfirmTransitVirtualInterfaceResponse;
class CreateBGPPeerRequest;
class CreateBGPPeerResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateDirectConnectGatewayRequest;
class CreateDirectConnectGatewayResponse;
class CreateDirectConnectGatewayAssociationRequest;
class CreateDirectConnectGatewayAssociationResponse;
class CreateDirectConnectGatewayAssociationProposalRequest;
class CreateDirectConnectGatewayAssociationProposalResponse;
class CreateInterconnectRequest;
class CreateInterconnectResponse;
class CreateLagRequest;
class CreateLagResponse;
class CreatePrivateVirtualInterfaceRequest;
class CreatePrivateVirtualInterfaceResponse;
class CreatePublicVirtualInterfaceRequest;
class CreatePublicVirtualInterfaceResponse;
class CreateTransitVirtualInterfaceRequest;
class CreateTransitVirtualInterfaceResponse;
class DeleteBGPPeerRequest;
class DeleteBGPPeerResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteDirectConnectGatewayRequest;
class DeleteDirectConnectGatewayResponse;
class DeleteDirectConnectGatewayAssociationRequest;
class DeleteDirectConnectGatewayAssociationResponse;
class DeleteDirectConnectGatewayAssociationProposalRequest;
class DeleteDirectConnectGatewayAssociationProposalResponse;
class DeleteInterconnectRequest;
class DeleteInterconnectResponse;
class DeleteLagRequest;
class DeleteLagResponse;
class DeleteVirtualInterfaceRequest;
class DeleteVirtualInterfaceResponse;
class DescribeConnectionLoaRequest;
class DescribeConnectionLoaResponse;
class DescribeConnectionsRequest;
class DescribeConnectionsResponse;
class DescribeConnectionsOnInterconnectRequest;
class DescribeConnectionsOnInterconnectResponse;
class DescribeDirectConnectGatewayAssociationProposalsRequest;
class DescribeDirectConnectGatewayAssociationProposalsResponse;
class DescribeDirectConnectGatewayAssociationsRequest;
class DescribeDirectConnectGatewayAssociationsResponse;
class DescribeDirectConnectGatewayAttachmentsRequest;
class DescribeDirectConnectGatewayAttachmentsResponse;
class DescribeDirectConnectGatewaysRequest;
class DescribeDirectConnectGatewaysResponse;
class DescribeHostedConnectionsRequest;
class DescribeHostedConnectionsResponse;
class DescribeInterconnectLoaRequest;
class DescribeInterconnectLoaResponse;
class DescribeInterconnectsRequest;
class DescribeInterconnectsResponse;
class DescribeLagsRequest;
class DescribeLagsResponse;
class DescribeLoaRequest;
class DescribeLoaResponse;
class DescribeLocationsRequest;
class DescribeLocationsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeVirtualGatewaysRequest;
class DescribeVirtualGatewaysResponse;
class DescribeVirtualInterfacesRequest;
class DescribeVirtualInterfacesResponse;
class DisassociateConnectionFromLagRequest;
class DisassociateConnectionFromLagResponse;
class DisassociateMacSecKeyRequest;
class DisassociateMacSecKeyResponse;
class ListVirtualInterfaceTestHistoryRequest;
class ListVirtualInterfaceTestHistoryResponse;
class StartBgpFailoverTestRequest;
class StartBgpFailoverTestResponse;
class StopBgpFailoverTestRequest;
class StopBgpFailoverTestResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateDirectConnectGatewayAssociationRequest;
class UpdateDirectConnectGatewayAssociationResponse;
class UpdateLagRequest;
class UpdateLagResponse;
class UpdateVirtualInterfaceAttributesRequest;
class UpdateVirtualInterfaceAttributesResponse;

class QTAWSDIRECTCONNECT_EXPORT DirectConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DirectConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DirectConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptDirectConnectGatewayAssociationProposalResponse * acceptDirectConnectGatewayAssociationProposal(const AcceptDirectConnectGatewayAssociationProposalRequest &request);
    AllocateConnectionOnInterconnectResponse * allocateConnectionOnInterconnect(const AllocateConnectionOnInterconnectRequest &request);
    AllocateHostedConnectionResponse * allocateHostedConnection(const AllocateHostedConnectionRequest &request);
    AllocatePrivateVirtualInterfaceResponse * allocatePrivateVirtualInterface(const AllocatePrivateVirtualInterfaceRequest &request);
    AllocatePublicVirtualInterfaceResponse * allocatePublicVirtualInterface(const AllocatePublicVirtualInterfaceRequest &request);
    AllocateTransitVirtualInterfaceResponse * allocateTransitVirtualInterface(const AllocateTransitVirtualInterfaceRequest &request);
    AssociateConnectionWithLagResponse * associateConnectionWithLag(const AssociateConnectionWithLagRequest &request);
    AssociateHostedConnectionResponse * associateHostedConnection(const AssociateHostedConnectionRequest &request);
    AssociateMacSecKeyResponse * associateMacSecKey(const AssociateMacSecKeyRequest &request);
    AssociateVirtualInterfaceResponse * associateVirtualInterface(const AssociateVirtualInterfaceRequest &request);
    ConfirmConnectionResponse * confirmConnection(const ConfirmConnectionRequest &request);
    ConfirmPrivateVirtualInterfaceResponse * confirmPrivateVirtualInterface(const ConfirmPrivateVirtualInterfaceRequest &request);
    ConfirmPublicVirtualInterfaceResponse * confirmPublicVirtualInterface(const ConfirmPublicVirtualInterfaceRequest &request);
    ConfirmTransitVirtualInterfaceResponse * confirmTransitVirtualInterface(const ConfirmTransitVirtualInterfaceRequest &request);
    CreateBGPPeerResponse * createBGPPeer(const CreateBGPPeerRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateDirectConnectGatewayResponse * createDirectConnectGateway(const CreateDirectConnectGatewayRequest &request);
    CreateDirectConnectGatewayAssociationResponse * createDirectConnectGatewayAssociation(const CreateDirectConnectGatewayAssociationRequest &request);
    CreateDirectConnectGatewayAssociationProposalResponse * createDirectConnectGatewayAssociationProposal(const CreateDirectConnectGatewayAssociationProposalRequest &request);
    CreateInterconnectResponse * createInterconnect(const CreateInterconnectRequest &request);
    CreateLagResponse * createLag(const CreateLagRequest &request);
    CreatePrivateVirtualInterfaceResponse * createPrivateVirtualInterface(const CreatePrivateVirtualInterfaceRequest &request);
    CreatePublicVirtualInterfaceResponse * createPublicVirtualInterface(const CreatePublicVirtualInterfaceRequest &request);
    CreateTransitVirtualInterfaceResponse * createTransitVirtualInterface(const CreateTransitVirtualInterfaceRequest &request);
    DeleteBGPPeerResponse * deleteBGPPeer(const DeleteBGPPeerRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteDirectConnectGatewayResponse * deleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request);
    DeleteDirectConnectGatewayAssociationResponse * deleteDirectConnectGatewayAssociation(const DeleteDirectConnectGatewayAssociationRequest &request);
    DeleteDirectConnectGatewayAssociationProposalResponse * deleteDirectConnectGatewayAssociationProposal(const DeleteDirectConnectGatewayAssociationProposalRequest &request);
    DeleteInterconnectResponse * deleteInterconnect(const DeleteInterconnectRequest &request);
    DeleteLagResponse * deleteLag(const DeleteLagRequest &request);
    DeleteVirtualInterfaceResponse * deleteVirtualInterface(const DeleteVirtualInterfaceRequest &request);
    DescribeConnectionLoaResponse * describeConnectionLoa(const DescribeConnectionLoaRequest &request);
    DescribeConnectionsResponse * describeConnections(const DescribeConnectionsRequest &request);
    DescribeConnectionsOnInterconnectResponse * describeConnectionsOnInterconnect(const DescribeConnectionsOnInterconnectRequest &request);
    DescribeDirectConnectGatewayAssociationProposalsResponse * describeDirectConnectGatewayAssociationProposals(const DescribeDirectConnectGatewayAssociationProposalsRequest &request);
    DescribeDirectConnectGatewayAssociationsResponse * describeDirectConnectGatewayAssociations(const DescribeDirectConnectGatewayAssociationsRequest &request);
    DescribeDirectConnectGatewayAttachmentsResponse * describeDirectConnectGatewayAttachments(const DescribeDirectConnectGatewayAttachmentsRequest &request);
    DescribeDirectConnectGatewaysResponse * describeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request);
    DescribeHostedConnectionsResponse * describeHostedConnections(const DescribeHostedConnectionsRequest &request);
    DescribeInterconnectLoaResponse * describeInterconnectLoa(const DescribeInterconnectLoaRequest &request);
    DescribeInterconnectsResponse * describeInterconnects(const DescribeInterconnectsRequest &request);
    DescribeLagsResponse * describeLags(const DescribeLagsRequest &request);
    DescribeLoaResponse * describeLoa(const DescribeLoaRequest &request);
    DescribeLocationsResponse * describeLocations(const DescribeLocationsRequest &request);
    DescribeLocationsResponse * describeLocations();
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeVirtualGatewaysResponse * describeVirtualGateways(const DescribeVirtualGatewaysRequest &request);
    DescribeVirtualGatewaysResponse * describeVirtualGateways();
    DescribeVirtualInterfacesResponse * describeVirtualInterfaces(const DescribeVirtualInterfacesRequest &request);
    DisassociateConnectionFromLagResponse * disassociateConnectionFromLag(const DisassociateConnectionFromLagRequest &request);
    DisassociateMacSecKeyResponse * disassociateMacSecKey(const DisassociateMacSecKeyRequest &request);
    ListVirtualInterfaceTestHistoryResponse * listVirtualInterfaceTestHistory(const ListVirtualInterfaceTestHistoryRequest &request);
    StartBgpFailoverTestResponse * startBgpFailoverTest(const StartBgpFailoverTestRequest &request);
    StopBgpFailoverTestResponse * stopBgpFailoverTest(const StopBgpFailoverTestRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateDirectConnectGatewayAssociationResponse * updateDirectConnectGatewayAssociation(const UpdateDirectConnectGatewayAssociationRequest &request);
    UpdateLagResponse * updateLag(const UpdateLagRequest &request);
    UpdateVirtualInterfaceAttributesResponse * updateVirtualInterfaceAttributes(const UpdateVirtualInterfaceAttributesRequest &request);

protected:
    /// @cond internal
    DirectConnectClientPrivate * const d_ptr; ///< Internal d-pointer.
    DirectConnectClient(DirectConnectClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DirectConnectClient)
    Q_DISABLE_COPY(DirectConnectClient)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
