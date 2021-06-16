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

#ifndef QTAWS_SECURITYHUBCLIENT_H
#define QTAWS_SECURITYHUBCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SecurityHub {

class SecurityHubClientPrivate;
class AcceptAdministratorInvitationRequest;
class AcceptAdministratorInvitationResponse;
class AcceptInvitationRequest;
class AcceptInvitationResponse;
class BatchDisableStandardsRequest;
class BatchDisableStandardsResponse;
class BatchEnableStandardsRequest;
class BatchEnableStandardsResponse;
class BatchImportFindingsRequest;
class BatchImportFindingsResponse;
class BatchUpdateFindingsRequest;
class BatchUpdateFindingsResponse;
class CreateActionTargetRequest;
class CreateActionTargetResponse;
class CreateInsightRequest;
class CreateInsightResponse;
class CreateMembersRequest;
class CreateMembersResponse;
class DeclineInvitationsRequest;
class DeclineInvitationsResponse;
class DeleteActionTargetRequest;
class DeleteActionTargetResponse;
class DeleteInsightRequest;
class DeleteInsightResponse;
class DeleteInvitationsRequest;
class DeleteInvitationsResponse;
class DeleteMembersRequest;
class DeleteMembersResponse;
class DescribeActionTargetsRequest;
class DescribeActionTargetsResponse;
class DescribeHubRequest;
class DescribeHubResponse;
class DescribeOrganizationConfigurationRequest;
class DescribeOrganizationConfigurationResponse;
class DescribeProductsRequest;
class DescribeProductsResponse;
class DescribeStandardsRequest;
class DescribeStandardsResponse;
class DescribeStandardsControlsRequest;
class DescribeStandardsControlsResponse;
class DisableImportFindingsForProductRequest;
class DisableImportFindingsForProductResponse;
class DisableOrganizationAdminAccountRequest;
class DisableOrganizationAdminAccountResponse;
class DisableSecurityHubRequest;
class DisableSecurityHubResponse;
class DisassociateFromAdministratorAccountRequest;
class DisassociateFromAdministratorAccountResponse;
class DisassociateFromMasterAccountRequest;
class DisassociateFromMasterAccountResponse;
class DisassociateMembersRequest;
class DisassociateMembersResponse;
class EnableImportFindingsForProductRequest;
class EnableImportFindingsForProductResponse;
class EnableOrganizationAdminAccountRequest;
class EnableOrganizationAdminAccountResponse;
class EnableSecurityHubRequest;
class EnableSecurityHubResponse;
class GetAdministratorAccountRequest;
class GetAdministratorAccountResponse;
class GetEnabledStandardsRequest;
class GetEnabledStandardsResponse;
class GetFindingsRequest;
class GetFindingsResponse;
class GetInsightResultsRequest;
class GetInsightResultsResponse;
class GetInsightsRequest;
class GetInsightsResponse;
class GetInvitationsCountRequest;
class GetInvitationsCountResponse;
class GetMasterAccountRequest;
class GetMasterAccountResponse;
class GetMembersRequest;
class GetMembersResponse;
class InviteMembersRequest;
class InviteMembersResponse;
class ListEnabledProductsForImportRequest;
class ListEnabledProductsForImportResponse;
class ListInvitationsRequest;
class ListInvitationsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListOrganizationAdminAccountsRequest;
class ListOrganizationAdminAccountsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateActionTargetRequest;
class UpdateActionTargetResponse;
class UpdateFindingsRequest;
class UpdateFindingsResponse;
class UpdateInsightRequest;
class UpdateInsightResponse;
class UpdateOrganizationConfigurationRequest;
class UpdateOrganizationConfigurationResponse;
class UpdateSecurityHubConfigurationRequest;
class UpdateSecurityHubConfigurationResponse;
class UpdateStandardsControlRequest;
class UpdateStandardsControlResponse;

class QTAWS_EXPORT SecurityHubClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SecurityHubClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SecurityHubClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptAdministratorInvitationResponse * acceptAdministratorInvitation(const AcceptAdministratorInvitationRequest &request);
    AcceptInvitationResponse * acceptInvitation(const AcceptInvitationRequest &request);
    BatchDisableStandardsResponse * batchDisableStandards(const BatchDisableStandardsRequest &request);
    BatchEnableStandardsResponse * batchEnableStandards(const BatchEnableStandardsRequest &request);
    BatchImportFindingsResponse * batchImportFindings(const BatchImportFindingsRequest &request);
    BatchUpdateFindingsResponse * batchUpdateFindings(const BatchUpdateFindingsRequest &request);
    CreateActionTargetResponse * createActionTarget(const CreateActionTargetRequest &request);
    CreateInsightResponse * createInsight(const CreateInsightRequest &request);
    CreateMembersResponse * createMembers(const CreateMembersRequest &request);
    DeclineInvitationsResponse * declineInvitations(const DeclineInvitationsRequest &request);
    DeleteActionTargetResponse * deleteActionTarget(const DeleteActionTargetRequest &request);
    DeleteInsightResponse * deleteInsight(const DeleteInsightRequest &request);
    DeleteInvitationsResponse * deleteInvitations(const DeleteInvitationsRequest &request);
    DeleteMembersResponse * deleteMembers(const DeleteMembersRequest &request);
    DescribeActionTargetsResponse * describeActionTargets(const DescribeActionTargetsRequest &request);
    DescribeHubResponse * describeHub(const DescribeHubRequest &request);
    DescribeOrganizationConfigurationResponse * describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request);
    DescribeProductsResponse * describeProducts(const DescribeProductsRequest &request);
    DescribeStandardsResponse * describeStandards(const DescribeStandardsRequest &request);
    DescribeStandardsControlsResponse * describeStandardsControls(const DescribeStandardsControlsRequest &request);
    DisableImportFindingsForProductResponse * disableImportFindingsForProduct(const DisableImportFindingsForProductRequest &request);
    DisableOrganizationAdminAccountResponse * disableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest &request);
    DisableSecurityHubResponse * disableSecurityHub(const DisableSecurityHubRequest &request);
    DisassociateFromAdministratorAccountResponse * disassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest &request);
    DisassociateFromMasterAccountResponse * disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request);
    DisassociateMembersResponse * disassociateMembers(const DisassociateMembersRequest &request);
    EnableImportFindingsForProductResponse * enableImportFindingsForProduct(const EnableImportFindingsForProductRequest &request);
    EnableOrganizationAdminAccountResponse * enableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest &request);
    EnableSecurityHubResponse * enableSecurityHub(const EnableSecurityHubRequest &request);
    GetAdministratorAccountResponse * getAdministratorAccount(const GetAdministratorAccountRequest &request);
    GetEnabledStandardsResponse * getEnabledStandards(const GetEnabledStandardsRequest &request);
    GetFindingsResponse * getFindings(const GetFindingsRequest &request);
    GetInsightResultsResponse * getInsightResults(const GetInsightResultsRequest &request);
    GetInsightsResponse * getInsights(const GetInsightsRequest &request);
    GetInvitationsCountResponse * getInvitationsCount(const GetInvitationsCountRequest &request);
    GetMasterAccountResponse * getMasterAccount(const GetMasterAccountRequest &request);
    GetMembersResponse * getMembers(const GetMembersRequest &request);
    InviteMembersResponse * inviteMembers(const InviteMembersRequest &request);
    ListEnabledProductsForImportResponse * listEnabledProductsForImport(const ListEnabledProductsForImportRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListOrganizationAdminAccountsResponse * listOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateActionTargetResponse * updateActionTarget(const UpdateActionTargetRequest &request);
    UpdateFindingsResponse * updateFindings(const UpdateFindingsRequest &request);
    UpdateInsightResponse * updateInsight(const UpdateInsightRequest &request);
    UpdateOrganizationConfigurationResponse * updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request);
    UpdateSecurityHubConfigurationResponse * updateSecurityHubConfiguration(const UpdateSecurityHubConfigurationRequest &request);
    UpdateStandardsControlResponse * updateStandardsControl(const UpdateStandardsControlRequest &request);

private:
    Q_DECLARE_PRIVATE(SecurityHubClient)
    Q_DISABLE_COPY(SecurityHubClient)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
