// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ORGANIZATIONSCLIENT_H
#define QTAWS_ORGANIZATIONSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsorganizationsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Organizations {

class OrganizationsClientPrivate;
class AcceptHandshakeRequest;
class AcceptHandshakeResponse;
class AttachPolicyRequest;
class AttachPolicyResponse;
class CancelHandshakeRequest;
class CancelHandshakeResponse;
class CloseAccountRequest;
class CloseAccountResponse;
class CreateAccountRequest;
class CreateAccountResponse;
class CreateGovCloudAccountRequest;
class CreateGovCloudAccountResponse;
class CreateOrganizationRequest;
class CreateOrganizationResponse;
class CreateOrganizationalUnitRequest;
class CreateOrganizationalUnitResponse;
class CreatePolicyRequest;
class CreatePolicyResponse;
class DeclineHandshakeRequest;
class DeclineHandshakeResponse;
class DeleteOrganizationRequest;
class DeleteOrganizationResponse;
class DeleteOrganizationalUnitRequest;
class DeleteOrganizationalUnitResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DeregisterDelegatedAdministratorRequest;
class DeregisterDelegatedAdministratorResponse;
class DescribeAccountRequest;
class DescribeAccountResponse;
class DescribeCreateAccountStatusRequest;
class DescribeCreateAccountStatusResponse;
class DescribeEffectivePolicyRequest;
class DescribeEffectivePolicyResponse;
class DescribeHandshakeRequest;
class DescribeHandshakeResponse;
class DescribeOrganizationRequest;
class DescribeOrganizationResponse;
class DescribeOrganizationalUnitRequest;
class DescribeOrganizationalUnitResponse;
class DescribePolicyRequest;
class DescribePolicyResponse;
class DetachPolicyRequest;
class DetachPolicyResponse;
class DisableAWSServiceAccessRequest;
class DisableAWSServiceAccessResponse;
class DisablePolicyTypeRequest;
class DisablePolicyTypeResponse;
class EnableAWSServiceAccessRequest;
class EnableAWSServiceAccessResponse;
class EnableAllFeaturesRequest;
class EnableAllFeaturesResponse;
class EnablePolicyTypeRequest;
class EnablePolicyTypeResponse;
class InviteAccountToOrganizationRequest;
class InviteAccountToOrganizationResponse;
class LeaveOrganizationRequest;
class LeaveOrganizationResponse;
class ListAWSServiceAccessForOrganizationRequest;
class ListAWSServiceAccessForOrganizationResponse;
class ListAccountsRequest;
class ListAccountsResponse;
class ListAccountsForParentRequest;
class ListAccountsForParentResponse;
class ListChildrenRequest;
class ListChildrenResponse;
class ListCreateAccountStatusRequest;
class ListCreateAccountStatusResponse;
class ListDelegatedAdministratorsRequest;
class ListDelegatedAdministratorsResponse;
class ListDelegatedServicesForAccountRequest;
class ListDelegatedServicesForAccountResponse;
class ListHandshakesForAccountRequest;
class ListHandshakesForAccountResponse;
class ListHandshakesForOrganizationRequest;
class ListHandshakesForOrganizationResponse;
class ListOrganizationalUnitsForParentRequest;
class ListOrganizationalUnitsForParentResponse;
class ListParentsRequest;
class ListParentsResponse;
class ListPoliciesRequest;
class ListPoliciesResponse;
class ListPoliciesForTargetRequest;
class ListPoliciesForTargetResponse;
class ListRootsRequest;
class ListRootsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTargetsForPolicyRequest;
class ListTargetsForPolicyResponse;
class MoveAccountRequest;
class MoveAccountResponse;
class RegisterDelegatedAdministratorRequest;
class RegisterDelegatedAdministratorResponse;
class RemoveAccountFromOrganizationRequest;
class RemoveAccountFromOrganizationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateOrganizationalUnitRequest;
class UpdateOrganizationalUnitResponse;
class UpdatePolicyRequest;
class UpdatePolicyResponse;

class QTAWSORGANIZATIONS_EXPORT OrganizationsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OrganizationsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit OrganizationsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptHandshakeResponse * acceptHandshake(const AcceptHandshakeRequest &request);
    AttachPolicyResponse * attachPolicy(const AttachPolicyRequest &request);
    CancelHandshakeResponse * cancelHandshake(const CancelHandshakeRequest &request);
    CloseAccountResponse * closeAccount(const CloseAccountRequest &request);
    CreateAccountResponse * createAccount(const CreateAccountRequest &request);
    CreateGovCloudAccountResponse * createGovCloudAccount(const CreateGovCloudAccountRequest &request);
    CreateOrganizationResponse * createOrganization(const CreateOrganizationRequest &request);
    CreateOrganizationalUnitResponse * createOrganizationalUnit(const CreateOrganizationalUnitRequest &request);
    CreatePolicyResponse * createPolicy(const CreatePolicyRequest &request);
    DeclineHandshakeResponse * declineHandshake(const DeclineHandshakeRequest &request);
    DeleteOrganizationResponse * deleteOrganization(const DeleteOrganizationRequest &request);
    DeleteOrganizationalUnitResponse * deleteOrganizationalUnit(const DeleteOrganizationalUnitRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeregisterDelegatedAdministratorResponse * deregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest &request);
    DescribeAccountResponse * describeAccount(const DescribeAccountRequest &request);
    DescribeCreateAccountStatusResponse * describeCreateAccountStatus(const DescribeCreateAccountStatusRequest &request);
    DescribeEffectivePolicyResponse * describeEffectivePolicy(const DescribeEffectivePolicyRequest &request);
    DescribeHandshakeResponse * describeHandshake(const DescribeHandshakeRequest &request);
    DescribeOrganizationResponse * describeOrganization(const DescribeOrganizationRequest &request);
    DescribeOrganizationalUnitResponse * describeOrganizationalUnit(const DescribeOrganizationalUnitRequest &request);
    DescribePolicyResponse * describePolicy(const DescribePolicyRequest &request);
    DetachPolicyResponse * detachPolicy(const DetachPolicyRequest &request);
    DisableAWSServiceAccessResponse * disableAWSServiceAccess(const DisableAWSServiceAccessRequest &request);
    DisablePolicyTypeResponse * disablePolicyType(const DisablePolicyTypeRequest &request);
    EnableAWSServiceAccessResponse * enableAWSServiceAccess(const EnableAWSServiceAccessRequest &request);
    EnableAllFeaturesResponse * enableAllFeatures(const EnableAllFeaturesRequest &request);
    EnablePolicyTypeResponse * enablePolicyType(const EnablePolicyTypeRequest &request);
    InviteAccountToOrganizationResponse * inviteAccountToOrganization(const InviteAccountToOrganizationRequest &request);
    LeaveOrganizationResponse * leaveOrganization(const LeaveOrganizationRequest &request);
    ListAWSServiceAccessForOrganizationResponse * listAWSServiceAccessForOrganization(const ListAWSServiceAccessForOrganizationRequest &request);
    ListAccountsResponse * listAccounts(const ListAccountsRequest &request);
    ListAccountsForParentResponse * listAccountsForParent(const ListAccountsForParentRequest &request);
    ListChildrenResponse * listChildren(const ListChildrenRequest &request);
    ListCreateAccountStatusResponse * listCreateAccountStatus(const ListCreateAccountStatusRequest &request);
    ListDelegatedAdministratorsResponse * listDelegatedAdministrators(const ListDelegatedAdministratorsRequest &request);
    ListDelegatedServicesForAccountResponse * listDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest &request);
    ListHandshakesForAccountResponse * listHandshakesForAccount(const ListHandshakesForAccountRequest &request);
    ListHandshakesForOrganizationResponse * listHandshakesForOrganization(const ListHandshakesForOrganizationRequest &request);
    ListOrganizationalUnitsForParentResponse * listOrganizationalUnitsForParent(const ListOrganizationalUnitsForParentRequest &request);
    ListParentsResponse * listParents(const ListParentsRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListPoliciesForTargetResponse * listPoliciesForTarget(const ListPoliciesForTargetRequest &request);
    ListRootsResponse * listRoots(const ListRootsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTargetsForPolicyResponse * listTargetsForPolicy(const ListTargetsForPolicyRequest &request);
    MoveAccountResponse * moveAccount(const MoveAccountRequest &request);
    RegisterDelegatedAdministratorResponse * registerDelegatedAdministrator(const RegisterDelegatedAdministratorRequest &request);
    RemoveAccountFromOrganizationResponse * removeAccountFromOrganization(const RemoveAccountFromOrganizationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateOrganizationalUnitResponse * updateOrganizationalUnit(const UpdateOrganizationalUnitRequest &request);
    UpdatePolicyResponse * updatePolicy(const UpdatePolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(OrganizationsClient)
    Q_DISABLE_COPY(OrganizationsClient)

};

} // namespace Organizations
} // namespace QtAws

#endif
