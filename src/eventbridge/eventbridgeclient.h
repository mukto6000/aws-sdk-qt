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

#ifndef QTAWS_EVENTBRIDGECLIENT_H
#define QTAWS_EVENTBRIDGECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawseventbridgeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace EventBridge {

class EventBridgeClientPrivate;
class ActivateEventSourceRequest;
class ActivateEventSourceResponse;
class CancelReplayRequest;
class CancelReplayResponse;
class CreateApiDestinationRequest;
class CreateApiDestinationResponse;
class CreateArchiveRequest;
class CreateArchiveResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateEndpointRequest;
class CreateEndpointResponse;
class CreateEventBusRequest;
class CreateEventBusResponse;
class CreatePartnerEventSourceRequest;
class CreatePartnerEventSourceResponse;
class DeactivateEventSourceRequest;
class DeactivateEventSourceResponse;
class DeauthorizeConnectionRequest;
class DeauthorizeConnectionResponse;
class DeleteApiDestinationRequest;
class DeleteApiDestinationResponse;
class DeleteArchiveRequest;
class DeleteArchiveResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEventBusRequest;
class DeleteEventBusResponse;
class DeletePartnerEventSourceRequest;
class DeletePartnerEventSourceResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DescribeApiDestinationRequest;
class DescribeApiDestinationResponse;
class DescribeArchiveRequest;
class DescribeArchiveResponse;
class DescribeConnectionRequest;
class DescribeConnectionResponse;
class DescribeEndpointRequest;
class DescribeEndpointResponse;
class DescribeEventBusRequest;
class DescribeEventBusResponse;
class DescribeEventSourceRequest;
class DescribeEventSourceResponse;
class DescribePartnerEventSourceRequest;
class DescribePartnerEventSourceResponse;
class DescribeReplayRequest;
class DescribeReplayResponse;
class DescribeRuleRequest;
class DescribeRuleResponse;
class DisableRuleRequest;
class DisableRuleResponse;
class EnableRuleRequest;
class EnableRuleResponse;
class ListApiDestinationsRequest;
class ListApiDestinationsResponse;
class ListArchivesRequest;
class ListArchivesResponse;
class ListConnectionsRequest;
class ListConnectionsResponse;
class ListEndpointsRequest;
class ListEndpointsResponse;
class ListEventBusesRequest;
class ListEventBusesResponse;
class ListEventSourcesRequest;
class ListEventSourcesResponse;
class ListPartnerEventSourceAccountsRequest;
class ListPartnerEventSourceAccountsResponse;
class ListPartnerEventSourcesRequest;
class ListPartnerEventSourcesResponse;
class ListReplaysRequest;
class ListReplaysResponse;
class ListRuleNamesByTargetRequest;
class ListRuleNamesByTargetResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTargetsByRuleRequest;
class ListTargetsByRuleResponse;
class PutEventsRequest;
class PutEventsResponse;
class PutPartnerEventsRequest;
class PutPartnerEventsResponse;
class PutPermissionRequest;
class PutPermissionResponse;
class PutRuleRequest;
class PutRuleResponse;
class PutTargetsRequest;
class PutTargetsResponse;
class RemovePermissionRequest;
class RemovePermissionResponse;
class RemoveTargetsRequest;
class RemoveTargetsResponse;
class StartReplayRequest;
class StartReplayResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestEventPatternRequest;
class TestEventPatternResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApiDestinationRequest;
class UpdateApiDestinationResponse;
class UpdateArchiveRequest;
class UpdateArchiveResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateEndpointRequest;
class UpdateEndpointResponse;

class QTAWSEVENTBRIDGE_EXPORT EventBridgeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EventBridgeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EventBridgeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ActivateEventSourceResponse * activateEventSource(const ActivateEventSourceRequest &request);
    CancelReplayResponse * cancelReplay(const CancelReplayRequest &request);
    CreateApiDestinationResponse * createApiDestination(const CreateApiDestinationRequest &request);
    CreateArchiveResponse * createArchive(const CreateArchiveRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateEventBusResponse * createEventBus(const CreateEventBusRequest &request);
    CreatePartnerEventSourceResponse * createPartnerEventSource(const CreatePartnerEventSourceRequest &request);
    DeactivateEventSourceResponse * deactivateEventSource(const DeactivateEventSourceRequest &request);
    DeauthorizeConnectionResponse * deauthorizeConnection(const DeauthorizeConnectionRequest &request);
    DeleteApiDestinationResponse * deleteApiDestination(const DeleteApiDestinationRequest &request);
    DeleteArchiveResponse * deleteArchive(const DeleteArchiveRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEventBusResponse * deleteEventBus(const DeleteEventBusRequest &request);
    DeletePartnerEventSourceResponse * deletePartnerEventSource(const DeletePartnerEventSourceRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DescribeApiDestinationResponse * describeApiDestination(const DescribeApiDestinationRequest &request);
    DescribeArchiveResponse * describeArchive(const DescribeArchiveRequest &request);
    DescribeConnectionResponse * describeConnection(const DescribeConnectionRequest &request);
    DescribeEndpointResponse * describeEndpoint(const DescribeEndpointRequest &request);
    DescribeEventBusResponse * describeEventBus(const DescribeEventBusRequest &request);
    DescribeEventSourceResponse * describeEventSource(const DescribeEventSourceRequest &request);
    DescribePartnerEventSourceResponse * describePartnerEventSource(const DescribePartnerEventSourceRequest &request);
    DescribeReplayResponse * describeReplay(const DescribeReplayRequest &request);
    DescribeRuleResponse * describeRule(const DescribeRuleRequest &request);
    DisableRuleResponse * disableRule(const DisableRuleRequest &request);
    EnableRuleResponse * enableRule(const EnableRuleRequest &request);
    ListApiDestinationsResponse * listApiDestinations(const ListApiDestinationsRequest &request);
    ListArchivesResponse * listArchives(const ListArchivesRequest &request);
    ListConnectionsResponse * listConnections(const ListConnectionsRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);
    ListEventBusesResponse * listEventBuses(const ListEventBusesRequest &request);
    ListEventSourcesResponse * listEventSources(const ListEventSourcesRequest &request);
    ListPartnerEventSourceAccountsResponse * listPartnerEventSourceAccounts(const ListPartnerEventSourceAccountsRequest &request);
    ListPartnerEventSourcesResponse * listPartnerEventSources(const ListPartnerEventSourcesRequest &request);
    ListReplaysResponse * listReplays(const ListReplaysRequest &request);
    ListRuleNamesByTargetResponse * listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTargetsByRuleResponse * listTargetsByRule(const ListTargetsByRuleRequest &request);
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    PutPartnerEventsResponse * putPartnerEvents(const PutPartnerEventsRequest &request);
    PutPermissionResponse * putPermission(const PutPermissionRequest &request);
    PutRuleResponse * putRule(const PutRuleRequest &request);
    PutTargetsResponse * putTargets(const PutTargetsRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    RemoveTargetsResponse * removeTargets(const RemoveTargetsRequest &request);
    StartReplayResponse * startReplay(const StartReplayRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestEventPatternResponse * testEventPattern(const TestEventPatternRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApiDestinationResponse * updateApiDestination(const UpdateApiDestinationRequest &request);
    UpdateArchiveResponse * updateArchive(const UpdateArchiveRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);

private:
    Q_DECLARE_PRIVATE(EventBridgeClient)
    Q_DISABLE_COPY(EventBridgeClient)

};

} // namespace EventBridge
} // namespace QtAws

#endif
