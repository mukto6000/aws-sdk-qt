/*
    Copyright 2013-2020 Paul Colby

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

#include "managedblockchainclient.h"
#include "managedblockchainclient_p.h"

#include "core/awssignaturev4.h"
#include "creatememberrequest.h"
#include "creatememberresponse.h"
#include "createnetworkrequest.h"
#include "createnetworkresponse.h"
#include "createnoderequest.h"
#include "createnoderesponse.h"
#include "createproposalrequest.h"
#include "createproposalresponse.h"
#include "deletememberrequest.h"
#include "deletememberresponse.h"
#include "deletenoderequest.h"
#include "deletenoderesponse.h"
#include "getmemberrequest.h"
#include "getmemberresponse.h"
#include "getnetworkrequest.h"
#include "getnetworkresponse.h"
#include "getnoderequest.h"
#include "getnoderesponse.h"
#include "getproposalrequest.h"
#include "getproposalresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listnetworksrequest.h"
#include "listnetworksresponse.h"
#include "listnodesrequest.h"
#include "listnodesresponse.h"
#include "listproposalvotesrequest.h"
#include "listproposalvotesresponse.h"
#include "listproposalsrequest.h"
#include "listproposalsresponse.h"
#include "rejectinvitationrequest.h"
#include "rejectinvitationresponse.h"
#include "voteonproposalrequest.h"
#include "voteonproposalresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ManagedBlockchain
 * \brief Contains classess for accessing Amazon Managed Blockchain (ManagedBlockchain).
 *
 * \inmodule QtAwsManagedBlockchain
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ManagedBlockchainClient
 * \brief The ManagedBlockchainClient class provides access to the Amazon Managed Blockchain (ManagedBlockchain) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
 */

/*!
 * \brief Constructs a ManagedBlockchainClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ManagedBlockchainClient::ManagedBlockchainClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ManagedBlockchainClientPrivate(this), parent)
{
    Q_D(ManagedBlockchainClient);
    d->apiVersion = QStringLiteral("2018-09-24");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("managedblockchain");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Managed Blockchain");
    d->serviceName = QStringLiteral("managedblockchain");
}

/*!
 * \overload ManagedBlockchainClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ManagedBlockchainClient::ManagedBlockchainClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ManagedBlockchainClientPrivate(this), parent)
{
    Q_D(ManagedBlockchainClient);
    d->apiVersion = QStringLiteral("2018-09-24");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("managedblockchain");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Managed Blockchain");
    d->serviceName = QStringLiteral("managedblockchain");
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * CreateMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a member within a Managed Blockchain
 */
CreateMemberResponse * ManagedBlockchainClient::createMember(const CreateMemberRequest &request)
{
    return qobject_cast<CreateMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * CreateNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new blockchain network using Amazon Managed
 */
CreateNetworkResponse * ManagedBlockchainClient::createNetwork(const CreateNetworkRequest &request)
{
    return qobject_cast<CreateNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * CreateNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a peer node in a
 */
CreateNodeResponse * ManagedBlockchainClient::createNode(const CreateNodeRequest &request)
{
    return qobject_cast<CreateNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * CreateProposalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a proposal for a change to the network that other members of the network can vote on, for example, a proposal to
 * add a new member to the network. Any member can create a
 */
CreateProposalResponse * ManagedBlockchainClient::createProposal(const CreateProposalRequest &request)
{
    return qobject_cast<CreateProposalResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * DeleteMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a member. Deleting a member removes the member and all associated resources from the network.
 * <code>DeleteMember</code> can only be called for a specified <code>MemberId</code> if the principal performing the
 * action is associated with the AWS account that owns the member. In all other cases, the <code>DeleteMember</code> action
 * is carried out as the result of an approved proposal to remove a member. If <code>MemberId</code> is the last member in
 * a network specified by the last AWS account, the network is deleted
 */
DeleteMemberResponse * ManagedBlockchainClient::deleteMember(const DeleteMemberRequest &request)
{
    return qobject_cast<DeleteMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * DeleteNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a peer node from a member that your AWS account owns. All data on the node is lost and cannot be
 */
DeleteNodeResponse * ManagedBlockchainClient::deleteNode(const DeleteNodeRequest &request)
{
    return qobject_cast<DeleteNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * GetMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about a
 */
GetMemberResponse * ManagedBlockchainClient::getMember(const GetMemberRequest &request)
{
    return qobject_cast<GetMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * GetNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about a
 */
GetNetworkResponse * ManagedBlockchainClient::getNetwork(const GetNetworkRequest &request)
{
    return qobject_cast<GetNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * GetNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about a peer
 */
GetNodeResponse * ManagedBlockchainClient::getNode(const GetNodeRequest &request)
{
    return qobject_cast<GetNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * GetProposalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about a
 */
GetProposalResponse * ManagedBlockchainClient::getProposal(const GetProposalRequest &request)
{
    return qobject_cast<GetProposalResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a listing of all invitations made on the specified
 */
ListInvitationsResponse * ManagedBlockchainClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a listing of the members in a network and properties of their
 */
ListMembersResponse * ManagedBlockchainClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * ListNetworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the networks in which the current AWS account has
 */
ListNetworksResponse * ManagedBlockchainClient::listNetworks(const ListNetworksRequest &request)
{
    return qobject_cast<ListNetworksResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * ListNodesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the nodes within a
 */
ListNodesResponse * ManagedBlockchainClient::listNodes(const ListNodesRequest &request)
{
    return qobject_cast<ListNodesResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * ListProposalVotesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the listing of votes for a specified proposal, including the value of each vote and the unique identifier of the
 * member that cast the
 */
ListProposalVotesResponse * ManagedBlockchainClient::listProposalVotes(const ListProposalVotesRequest &request)
{
    return qobject_cast<ListProposalVotesResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * ListProposalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a listing of proposals for the
 */
ListProposalsResponse * ManagedBlockchainClient::listProposals(const ListProposalsRequest &request)
{
    return qobject_cast<ListProposalsResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * RejectInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects an invitation to join a network. This action can be called by a principal in an AWS account that has received an
 * invitation to create a member and join a
 */
RejectInvitationResponse * ManagedBlockchainClient::rejectInvitation(const RejectInvitationRequest &request)
{
    return qobject_cast<RejectInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the ManagedBlockchainClient service, and returns a pointer to an
 * VoteOnProposalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Casts a vote for a specified <code>ProposalId</code> on behalf of a member. The member to vote as, specified by
 * <code>VoterMemberId</code>, must be in the same AWS account as the principal that calls the
 */
VoteOnProposalResponse * ManagedBlockchainClient::voteOnProposal(const VoteOnProposalRequest &request)
{
    return qobject_cast<VoteOnProposalResponse *>(send(request));
}

/*!
 * \class QtAws::ManagedBlockchain::ManagedBlockchainClientPrivate
 * \brief The ManagedBlockchainClientPrivate class provides private implementation for ManagedBlockchainClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ManagedBlockchainClientPrivate object with public implementation \a q.
 */
ManagedBlockchainClientPrivate::ManagedBlockchainClientPrivate(ManagedBlockchainClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ManagedBlockchain
} // namespace QtAws
