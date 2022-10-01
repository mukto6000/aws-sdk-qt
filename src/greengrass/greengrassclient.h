// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSCLIENT_H
#define QTAWS_GREENGRASSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsgreengrassglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Greengrass {

class GreengrassClientPrivate;
class AssociateRoleToGroupRequest;
class AssociateRoleToGroupResponse;
class AssociateServiceRoleToAccountRequest;
class AssociateServiceRoleToAccountResponse;
class CreateConnectorDefinitionRequest;
class CreateConnectorDefinitionResponse;
class CreateConnectorDefinitionVersionRequest;
class CreateConnectorDefinitionVersionResponse;
class CreateCoreDefinitionRequest;
class CreateCoreDefinitionResponse;
class CreateCoreDefinitionVersionRequest;
class CreateCoreDefinitionVersionResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateDeviceDefinitionRequest;
class CreateDeviceDefinitionResponse;
class CreateDeviceDefinitionVersionRequest;
class CreateDeviceDefinitionVersionResponse;
class CreateFunctionDefinitionRequest;
class CreateFunctionDefinitionResponse;
class CreateFunctionDefinitionVersionRequest;
class CreateFunctionDefinitionVersionResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateGroupCertificateAuthorityRequest;
class CreateGroupCertificateAuthorityResponse;
class CreateGroupVersionRequest;
class CreateGroupVersionResponse;
class CreateLoggerDefinitionRequest;
class CreateLoggerDefinitionResponse;
class CreateLoggerDefinitionVersionRequest;
class CreateLoggerDefinitionVersionResponse;
class CreateResourceDefinitionRequest;
class CreateResourceDefinitionResponse;
class CreateResourceDefinitionVersionRequest;
class CreateResourceDefinitionVersionResponse;
class CreateSoftwareUpdateJobRequest;
class CreateSoftwareUpdateJobResponse;
class CreateSubscriptionDefinitionRequest;
class CreateSubscriptionDefinitionResponse;
class CreateSubscriptionDefinitionVersionRequest;
class CreateSubscriptionDefinitionVersionResponse;
class DeleteConnectorDefinitionRequest;
class DeleteConnectorDefinitionResponse;
class DeleteCoreDefinitionRequest;
class DeleteCoreDefinitionResponse;
class DeleteDeviceDefinitionRequest;
class DeleteDeviceDefinitionResponse;
class DeleteFunctionDefinitionRequest;
class DeleteFunctionDefinitionResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteLoggerDefinitionRequest;
class DeleteLoggerDefinitionResponse;
class DeleteResourceDefinitionRequest;
class DeleteResourceDefinitionResponse;
class DeleteSubscriptionDefinitionRequest;
class DeleteSubscriptionDefinitionResponse;
class DisassociateRoleFromGroupRequest;
class DisassociateRoleFromGroupResponse;
class DisassociateServiceRoleFromAccountRequest;
class DisassociateServiceRoleFromAccountResponse;
class GetAssociatedRoleRequest;
class GetAssociatedRoleResponse;
class GetBulkDeploymentStatusRequest;
class GetBulkDeploymentStatusResponse;
class GetConnectivityInfoRequest;
class GetConnectivityInfoResponse;
class GetConnectorDefinitionRequest;
class GetConnectorDefinitionResponse;
class GetConnectorDefinitionVersionRequest;
class GetConnectorDefinitionVersionResponse;
class GetCoreDefinitionRequest;
class GetCoreDefinitionResponse;
class GetCoreDefinitionVersionRequest;
class GetCoreDefinitionVersionResponse;
class GetDeploymentStatusRequest;
class GetDeploymentStatusResponse;
class GetDeviceDefinitionRequest;
class GetDeviceDefinitionResponse;
class GetDeviceDefinitionVersionRequest;
class GetDeviceDefinitionVersionResponse;
class GetFunctionDefinitionRequest;
class GetFunctionDefinitionResponse;
class GetFunctionDefinitionVersionRequest;
class GetFunctionDefinitionVersionResponse;
class GetGroupRequest;
class GetGroupResponse;
class GetGroupCertificateAuthorityRequest;
class GetGroupCertificateAuthorityResponse;
class GetGroupCertificateConfigurationRequest;
class GetGroupCertificateConfigurationResponse;
class GetGroupVersionRequest;
class GetGroupVersionResponse;
class GetLoggerDefinitionRequest;
class GetLoggerDefinitionResponse;
class GetLoggerDefinitionVersionRequest;
class GetLoggerDefinitionVersionResponse;
class GetResourceDefinitionRequest;
class GetResourceDefinitionResponse;
class GetResourceDefinitionVersionRequest;
class GetResourceDefinitionVersionResponse;
class GetServiceRoleForAccountRequest;
class GetServiceRoleForAccountResponse;
class GetSubscriptionDefinitionRequest;
class GetSubscriptionDefinitionResponse;
class GetSubscriptionDefinitionVersionRequest;
class GetSubscriptionDefinitionVersionResponse;
class GetThingRuntimeConfigurationRequest;
class GetThingRuntimeConfigurationResponse;
class ListBulkDeploymentDetailedReportsRequest;
class ListBulkDeploymentDetailedReportsResponse;
class ListBulkDeploymentsRequest;
class ListBulkDeploymentsResponse;
class ListConnectorDefinitionVersionsRequest;
class ListConnectorDefinitionVersionsResponse;
class ListConnectorDefinitionsRequest;
class ListConnectorDefinitionsResponse;
class ListCoreDefinitionVersionsRequest;
class ListCoreDefinitionVersionsResponse;
class ListCoreDefinitionsRequest;
class ListCoreDefinitionsResponse;
class ListDeploymentsRequest;
class ListDeploymentsResponse;
class ListDeviceDefinitionVersionsRequest;
class ListDeviceDefinitionVersionsResponse;
class ListDeviceDefinitionsRequest;
class ListDeviceDefinitionsResponse;
class ListFunctionDefinitionVersionsRequest;
class ListFunctionDefinitionVersionsResponse;
class ListFunctionDefinitionsRequest;
class ListFunctionDefinitionsResponse;
class ListGroupCertificateAuthoritiesRequest;
class ListGroupCertificateAuthoritiesResponse;
class ListGroupVersionsRequest;
class ListGroupVersionsResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListLoggerDefinitionVersionsRequest;
class ListLoggerDefinitionVersionsResponse;
class ListLoggerDefinitionsRequest;
class ListLoggerDefinitionsResponse;
class ListResourceDefinitionVersionsRequest;
class ListResourceDefinitionVersionsResponse;
class ListResourceDefinitionsRequest;
class ListResourceDefinitionsResponse;
class ListSubscriptionDefinitionVersionsRequest;
class ListSubscriptionDefinitionVersionsResponse;
class ListSubscriptionDefinitionsRequest;
class ListSubscriptionDefinitionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ResetDeploymentsRequest;
class ResetDeploymentsResponse;
class StartBulkDeploymentRequest;
class StartBulkDeploymentResponse;
class StopBulkDeploymentRequest;
class StopBulkDeploymentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConnectivityInfoRequest;
class UpdateConnectivityInfoResponse;
class UpdateConnectorDefinitionRequest;
class UpdateConnectorDefinitionResponse;
class UpdateCoreDefinitionRequest;
class UpdateCoreDefinitionResponse;
class UpdateDeviceDefinitionRequest;
class UpdateDeviceDefinitionResponse;
class UpdateFunctionDefinitionRequest;
class UpdateFunctionDefinitionResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateGroupCertificateConfigurationRequest;
class UpdateGroupCertificateConfigurationResponse;
class UpdateLoggerDefinitionRequest;
class UpdateLoggerDefinitionResponse;
class UpdateResourceDefinitionRequest;
class UpdateResourceDefinitionResponse;
class UpdateSubscriptionDefinitionRequest;
class UpdateSubscriptionDefinitionResponse;
class UpdateThingRuntimeConfigurationRequest;
class UpdateThingRuntimeConfigurationResponse;

class QTAWSGREENGRASS_EXPORT GreengrassClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GreengrassClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GreengrassClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateRoleToGroupResponse * associateRoleToGroup(const AssociateRoleToGroupRequest &request);
    AssociateServiceRoleToAccountResponse * associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request);
    CreateConnectorDefinitionResponse * createConnectorDefinition(const CreateConnectorDefinitionRequest &request);
    CreateConnectorDefinitionVersionResponse * createConnectorDefinitionVersion(const CreateConnectorDefinitionVersionRequest &request);
    CreateCoreDefinitionResponse * createCoreDefinition(const CreateCoreDefinitionRequest &request);
    CreateCoreDefinitionVersionResponse * createCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDeviceDefinitionResponse * createDeviceDefinition(const CreateDeviceDefinitionRequest &request);
    CreateDeviceDefinitionVersionResponse * createDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest &request);
    CreateFunctionDefinitionResponse * createFunctionDefinition(const CreateFunctionDefinitionRequest &request);
    CreateFunctionDefinitionVersionResponse * createFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateGroupCertificateAuthorityResponse * createGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest &request);
    CreateGroupVersionResponse * createGroupVersion(const CreateGroupVersionRequest &request);
    CreateLoggerDefinitionResponse * createLoggerDefinition(const CreateLoggerDefinitionRequest &request);
    CreateLoggerDefinitionVersionResponse * createLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest &request);
    CreateResourceDefinitionResponse * createResourceDefinition(const CreateResourceDefinitionRequest &request);
    CreateResourceDefinitionVersionResponse * createResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest &request);
    CreateSoftwareUpdateJobResponse * createSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest &request);
    CreateSubscriptionDefinitionResponse * createSubscriptionDefinition(const CreateSubscriptionDefinitionRequest &request);
    CreateSubscriptionDefinitionVersionResponse * createSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest &request);
    DeleteConnectorDefinitionResponse * deleteConnectorDefinition(const DeleteConnectorDefinitionRequest &request);
    DeleteCoreDefinitionResponse * deleteCoreDefinition(const DeleteCoreDefinitionRequest &request);
    DeleteDeviceDefinitionResponse * deleteDeviceDefinition(const DeleteDeviceDefinitionRequest &request);
    DeleteFunctionDefinitionResponse * deleteFunctionDefinition(const DeleteFunctionDefinitionRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteLoggerDefinitionResponse * deleteLoggerDefinition(const DeleteLoggerDefinitionRequest &request);
    DeleteResourceDefinitionResponse * deleteResourceDefinition(const DeleteResourceDefinitionRequest &request);
    DeleteSubscriptionDefinitionResponse * deleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest &request);
    DisassociateRoleFromGroupResponse * disassociateRoleFromGroup(const DisassociateRoleFromGroupRequest &request);
    DisassociateServiceRoleFromAccountResponse * disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request);
    GetAssociatedRoleResponse * getAssociatedRole(const GetAssociatedRoleRequest &request);
    GetBulkDeploymentStatusResponse * getBulkDeploymentStatus(const GetBulkDeploymentStatusRequest &request);
    GetConnectivityInfoResponse * getConnectivityInfo(const GetConnectivityInfoRequest &request);
    GetConnectorDefinitionResponse * getConnectorDefinition(const GetConnectorDefinitionRequest &request);
    GetConnectorDefinitionVersionResponse * getConnectorDefinitionVersion(const GetConnectorDefinitionVersionRequest &request);
    GetCoreDefinitionResponse * getCoreDefinition(const GetCoreDefinitionRequest &request);
    GetCoreDefinitionVersionResponse * getCoreDefinitionVersion(const GetCoreDefinitionVersionRequest &request);
    GetDeploymentStatusResponse * getDeploymentStatus(const GetDeploymentStatusRequest &request);
    GetDeviceDefinitionResponse * getDeviceDefinition(const GetDeviceDefinitionRequest &request);
    GetDeviceDefinitionVersionResponse * getDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest &request);
    GetFunctionDefinitionResponse * getFunctionDefinition(const GetFunctionDefinitionRequest &request);
    GetFunctionDefinitionVersionResponse * getFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupCertificateAuthorityResponse * getGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest &request);
    GetGroupCertificateConfigurationResponse * getGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest &request);
    GetGroupVersionResponse * getGroupVersion(const GetGroupVersionRequest &request);
    GetLoggerDefinitionResponse * getLoggerDefinition(const GetLoggerDefinitionRequest &request);
    GetLoggerDefinitionVersionResponse * getLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest &request);
    GetResourceDefinitionResponse * getResourceDefinition(const GetResourceDefinitionRequest &request);
    GetResourceDefinitionVersionResponse * getResourceDefinitionVersion(const GetResourceDefinitionVersionRequest &request);
    GetServiceRoleForAccountResponse * getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request);
    GetSubscriptionDefinitionResponse * getSubscriptionDefinition(const GetSubscriptionDefinitionRequest &request);
    GetSubscriptionDefinitionVersionResponse * getSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest &request);
    GetThingRuntimeConfigurationResponse * getThingRuntimeConfiguration(const GetThingRuntimeConfigurationRequest &request);
    ListBulkDeploymentDetailedReportsResponse * listBulkDeploymentDetailedReports(const ListBulkDeploymentDetailedReportsRequest &request);
    ListBulkDeploymentsResponse * listBulkDeployments(const ListBulkDeploymentsRequest &request);
    ListConnectorDefinitionVersionsResponse * listConnectorDefinitionVersions(const ListConnectorDefinitionVersionsRequest &request);
    ListConnectorDefinitionsResponse * listConnectorDefinitions(const ListConnectorDefinitionsRequest &request);
    ListCoreDefinitionVersionsResponse * listCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest &request);
    ListCoreDefinitionsResponse * listCoreDefinitions(const ListCoreDefinitionsRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListDeviceDefinitionVersionsResponse * listDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest &request);
    ListDeviceDefinitionsResponse * listDeviceDefinitions(const ListDeviceDefinitionsRequest &request);
    ListFunctionDefinitionVersionsResponse * listFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest &request);
    ListFunctionDefinitionsResponse * listFunctionDefinitions(const ListFunctionDefinitionsRequest &request);
    ListGroupCertificateAuthoritiesResponse * listGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest &request);
    ListGroupVersionsResponse * listGroupVersions(const ListGroupVersionsRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListLoggerDefinitionVersionsResponse * listLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest &request);
    ListLoggerDefinitionsResponse * listLoggerDefinitions(const ListLoggerDefinitionsRequest &request);
    ListResourceDefinitionVersionsResponse * listResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest &request);
    ListResourceDefinitionsResponse * listResourceDefinitions(const ListResourceDefinitionsRequest &request);
    ListSubscriptionDefinitionVersionsResponse * listSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest &request);
    ListSubscriptionDefinitionsResponse * listSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ResetDeploymentsResponse * resetDeployments(const ResetDeploymentsRequest &request);
    StartBulkDeploymentResponse * startBulkDeployment(const StartBulkDeploymentRequest &request);
    StopBulkDeploymentResponse * stopBulkDeployment(const StopBulkDeploymentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConnectivityInfoResponse * updateConnectivityInfo(const UpdateConnectivityInfoRequest &request);
    UpdateConnectorDefinitionResponse * updateConnectorDefinition(const UpdateConnectorDefinitionRequest &request);
    UpdateCoreDefinitionResponse * updateCoreDefinition(const UpdateCoreDefinitionRequest &request);
    UpdateDeviceDefinitionResponse * updateDeviceDefinition(const UpdateDeviceDefinitionRequest &request);
    UpdateFunctionDefinitionResponse * updateFunctionDefinition(const UpdateFunctionDefinitionRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateGroupCertificateConfigurationResponse * updateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest &request);
    UpdateLoggerDefinitionResponse * updateLoggerDefinition(const UpdateLoggerDefinitionRequest &request);
    UpdateResourceDefinitionResponse * updateResourceDefinition(const UpdateResourceDefinitionRequest &request);
    UpdateSubscriptionDefinitionResponse * updateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest &request);
    UpdateThingRuntimeConfigurationResponse * updateThingRuntimeConfiguration(const UpdateThingRuntimeConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(GreengrassClient)
    Q_DISABLE_COPY(GreengrassClient)

};

} // namespace Greengrass
} // namespace QtAws

#endif
