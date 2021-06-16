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

#ifndef QTAWS_IAMCLIENT_H
#define QTAWS_IAMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IAM {

class IamClientPrivate;
class AddClientIDToOpenIDConnectProviderRequest;
class AddClientIDToOpenIDConnectProviderResponse;
class AddRoleToInstanceProfileRequest;
class AddRoleToInstanceProfileResponse;
class AddUserToGroupRequest;
class AddUserToGroupResponse;
class AttachGroupPolicyRequest;
class AttachGroupPolicyResponse;
class AttachRolePolicyRequest;
class AttachRolePolicyResponse;
class AttachUserPolicyRequest;
class AttachUserPolicyResponse;
class ChangePasswordRequest;
class ChangePasswordResponse;
class CreateAccessKeyRequest;
class CreateAccessKeyResponse;
class CreateAccountAliasRequest;
class CreateAccountAliasResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateInstanceProfileRequest;
class CreateInstanceProfileResponse;
class CreateLoginProfileRequest;
class CreateLoginProfileResponse;
class CreateOpenIDConnectProviderRequest;
class CreateOpenIDConnectProviderResponse;
class CreatePolicyRequest;
class CreatePolicyResponse;
class CreatePolicyVersionRequest;
class CreatePolicyVersionResponse;
class CreateRoleRequest;
class CreateRoleResponse;
class CreateSAMLProviderRequest;
class CreateSAMLProviderResponse;
class CreateServiceLinkedRoleRequest;
class CreateServiceLinkedRoleResponse;
class CreateServiceSpecificCredentialRequest;
class CreateServiceSpecificCredentialResponse;
class CreateUserRequest;
class CreateUserResponse;
class CreateVirtualMFADeviceRequest;
class CreateVirtualMFADeviceResponse;
class DeactivateMFADeviceRequest;
class DeactivateMFADeviceResponse;
class DeleteAccessKeyRequest;
class DeleteAccessKeyResponse;
class DeleteAccountAliasRequest;
class DeleteAccountAliasResponse;
class DeleteAccountPasswordPolicyRequest;
class DeleteAccountPasswordPolicyResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteGroupPolicyRequest;
class DeleteGroupPolicyResponse;
class DeleteInstanceProfileRequest;
class DeleteInstanceProfileResponse;
class DeleteLoginProfileRequest;
class DeleteLoginProfileResponse;
class DeleteOpenIDConnectProviderRequest;
class DeleteOpenIDConnectProviderResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DeletePolicyVersionRequest;
class DeletePolicyVersionResponse;
class DeleteRoleRequest;
class DeleteRoleResponse;
class DeleteRolePermissionsBoundaryRequest;
class DeleteRolePermissionsBoundaryResponse;
class DeleteRolePolicyRequest;
class DeleteRolePolicyResponse;
class DeleteSAMLProviderRequest;
class DeleteSAMLProviderResponse;
class DeleteSSHPublicKeyRequest;
class DeleteSSHPublicKeyResponse;
class DeleteServerCertificateRequest;
class DeleteServerCertificateResponse;
class DeleteServiceLinkedRoleRequest;
class DeleteServiceLinkedRoleResponse;
class DeleteServiceSpecificCredentialRequest;
class DeleteServiceSpecificCredentialResponse;
class DeleteSigningCertificateRequest;
class DeleteSigningCertificateResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeleteUserPermissionsBoundaryRequest;
class DeleteUserPermissionsBoundaryResponse;
class DeleteUserPolicyRequest;
class DeleteUserPolicyResponse;
class DeleteVirtualMFADeviceRequest;
class DeleteVirtualMFADeviceResponse;
class DetachGroupPolicyRequest;
class DetachGroupPolicyResponse;
class DetachRolePolicyRequest;
class DetachRolePolicyResponse;
class DetachUserPolicyRequest;
class DetachUserPolicyResponse;
class EnableMFADeviceRequest;
class EnableMFADeviceResponse;
class GenerateCredentialReportRequest;
class GenerateCredentialReportResponse;
class GenerateOrganizationsAccessReportRequest;
class GenerateOrganizationsAccessReportResponse;
class GenerateServiceLastAccessedDetailsRequest;
class GenerateServiceLastAccessedDetailsResponse;
class GetAccessKeyLastUsedRequest;
class GetAccessKeyLastUsedResponse;
class GetAccountAuthorizationDetailsRequest;
class GetAccountAuthorizationDetailsResponse;
class GetAccountPasswordPolicyRequest;
class GetAccountPasswordPolicyResponse;
class GetAccountSummaryRequest;
class GetAccountSummaryResponse;
class GetContextKeysForCustomPolicyRequest;
class GetContextKeysForCustomPolicyResponse;
class GetContextKeysForPrincipalPolicyRequest;
class GetContextKeysForPrincipalPolicyResponse;
class GetCredentialReportRequest;
class GetCredentialReportResponse;
class GetGroupRequest;
class GetGroupResponse;
class GetGroupPolicyRequest;
class GetGroupPolicyResponse;
class GetInstanceProfileRequest;
class GetInstanceProfileResponse;
class GetLoginProfileRequest;
class GetLoginProfileResponse;
class GetOpenIDConnectProviderRequest;
class GetOpenIDConnectProviderResponse;
class GetOrganizationsAccessReportRequest;
class GetOrganizationsAccessReportResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class GetPolicyVersionRequest;
class GetPolicyVersionResponse;
class GetRoleRequest;
class GetRoleResponse;
class GetRolePolicyRequest;
class GetRolePolicyResponse;
class GetSAMLProviderRequest;
class GetSAMLProviderResponse;
class GetSSHPublicKeyRequest;
class GetSSHPublicKeyResponse;
class GetServerCertificateRequest;
class GetServerCertificateResponse;
class GetServiceLastAccessedDetailsRequest;
class GetServiceLastAccessedDetailsResponse;
class GetServiceLastAccessedDetailsWithEntitiesRequest;
class GetServiceLastAccessedDetailsWithEntitiesResponse;
class GetServiceLinkedRoleDeletionStatusRequest;
class GetServiceLinkedRoleDeletionStatusResponse;
class GetUserRequest;
class GetUserResponse;
class GetUserPolicyRequest;
class GetUserPolicyResponse;
class ListAccessKeysRequest;
class ListAccessKeysResponse;
class ListAccountAliasesRequest;
class ListAccountAliasesResponse;
class ListAttachedGroupPoliciesRequest;
class ListAttachedGroupPoliciesResponse;
class ListAttachedRolePoliciesRequest;
class ListAttachedRolePoliciesResponse;
class ListAttachedUserPoliciesRequest;
class ListAttachedUserPoliciesResponse;
class ListEntitiesForPolicyRequest;
class ListEntitiesForPolicyResponse;
class ListGroupPoliciesRequest;
class ListGroupPoliciesResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListGroupsForUserRequest;
class ListGroupsForUserResponse;
class ListInstanceProfileTagsRequest;
class ListInstanceProfileTagsResponse;
class ListInstanceProfilesRequest;
class ListInstanceProfilesResponse;
class ListInstanceProfilesForRoleRequest;
class ListInstanceProfilesForRoleResponse;
class ListMFADeviceTagsRequest;
class ListMFADeviceTagsResponse;
class ListMFADevicesRequest;
class ListMFADevicesResponse;
class ListOpenIDConnectProviderTagsRequest;
class ListOpenIDConnectProviderTagsResponse;
class ListOpenIDConnectProvidersRequest;
class ListOpenIDConnectProvidersResponse;
class ListPoliciesRequest;
class ListPoliciesResponse;
class ListPoliciesGrantingServiceAccessRequest;
class ListPoliciesGrantingServiceAccessResponse;
class ListPolicyTagsRequest;
class ListPolicyTagsResponse;
class ListPolicyVersionsRequest;
class ListPolicyVersionsResponse;
class ListRolePoliciesRequest;
class ListRolePoliciesResponse;
class ListRoleTagsRequest;
class ListRoleTagsResponse;
class ListRolesRequest;
class ListRolesResponse;
class ListSAMLProviderTagsRequest;
class ListSAMLProviderTagsResponse;
class ListSAMLProvidersRequest;
class ListSAMLProvidersResponse;
class ListSSHPublicKeysRequest;
class ListSSHPublicKeysResponse;
class ListServerCertificateTagsRequest;
class ListServerCertificateTagsResponse;
class ListServerCertificatesRequest;
class ListServerCertificatesResponse;
class ListServiceSpecificCredentialsRequest;
class ListServiceSpecificCredentialsResponse;
class ListSigningCertificatesRequest;
class ListSigningCertificatesResponse;
class ListUserPoliciesRequest;
class ListUserPoliciesResponse;
class ListUserTagsRequest;
class ListUserTagsResponse;
class ListUsersRequest;
class ListUsersResponse;
class ListVirtualMFADevicesRequest;
class ListVirtualMFADevicesResponse;
class PutGroupPolicyRequest;
class PutGroupPolicyResponse;
class PutRolePermissionsBoundaryRequest;
class PutRolePermissionsBoundaryResponse;
class PutRolePolicyRequest;
class PutRolePolicyResponse;
class PutUserPermissionsBoundaryRequest;
class PutUserPermissionsBoundaryResponse;
class PutUserPolicyRequest;
class PutUserPolicyResponse;
class RemoveClientIDFromOpenIDConnectProviderRequest;
class RemoveClientIDFromOpenIDConnectProviderResponse;
class RemoveRoleFromInstanceProfileRequest;
class RemoveRoleFromInstanceProfileResponse;
class RemoveUserFromGroupRequest;
class RemoveUserFromGroupResponse;
class ResetServiceSpecificCredentialRequest;
class ResetServiceSpecificCredentialResponse;
class ResyncMFADeviceRequest;
class ResyncMFADeviceResponse;
class SetDefaultPolicyVersionRequest;
class SetDefaultPolicyVersionResponse;
class SetSecurityTokenServicePreferencesRequest;
class SetSecurityTokenServicePreferencesResponse;
class SimulateCustomPolicyRequest;
class SimulateCustomPolicyResponse;
class SimulatePrincipalPolicyRequest;
class SimulatePrincipalPolicyResponse;
class TagInstanceProfileRequest;
class TagInstanceProfileResponse;
class TagMFADeviceRequest;
class TagMFADeviceResponse;
class TagOpenIDConnectProviderRequest;
class TagOpenIDConnectProviderResponse;
class TagPolicyRequest;
class TagPolicyResponse;
class TagRoleRequest;
class TagRoleResponse;
class TagSAMLProviderRequest;
class TagSAMLProviderResponse;
class TagServerCertificateRequest;
class TagServerCertificateResponse;
class TagUserRequest;
class TagUserResponse;
class UntagInstanceProfileRequest;
class UntagInstanceProfileResponse;
class UntagMFADeviceRequest;
class UntagMFADeviceResponse;
class UntagOpenIDConnectProviderRequest;
class UntagOpenIDConnectProviderResponse;
class UntagPolicyRequest;
class UntagPolicyResponse;
class UntagRoleRequest;
class UntagRoleResponse;
class UntagSAMLProviderRequest;
class UntagSAMLProviderResponse;
class UntagServerCertificateRequest;
class UntagServerCertificateResponse;
class UntagUserRequest;
class UntagUserResponse;
class UpdateAccessKeyRequest;
class UpdateAccessKeyResponse;
class UpdateAccountPasswordPolicyRequest;
class UpdateAccountPasswordPolicyResponse;
class UpdateAssumeRolePolicyRequest;
class UpdateAssumeRolePolicyResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateLoginProfileRequest;
class UpdateLoginProfileResponse;
class UpdateOpenIDConnectProviderThumbprintRequest;
class UpdateOpenIDConnectProviderThumbprintResponse;
class UpdateRoleRequest;
class UpdateRoleResponse;
class UpdateRoleDescriptionRequest;
class UpdateRoleDescriptionResponse;
class UpdateSAMLProviderRequest;
class UpdateSAMLProviderResponse;
class UpdateSSHPublicKeyRequest;
class UpdateSSHPublicKeyResponse;
class UpdateServerCertificateRequest;
class UpdateServerCertificateResponse;
class UpdateServiceSpecificCredentialRequest;
class UpdateServiceSpecificCredentialResponse;
class UpdateSigningCertificateRequest;
class UpdateSigningCertificateResponse;
class UpdateUserRequest;
class UpdateUserResponse;
class UploadSSHPublicKeyRequest;
class UploadSSHPublicKeyResponse;
class UploadServerCertificateRequest;
class UploadServerCertificateResponse;
class UploadSigningCertificateRequest;
class UploadSigningCertificateResponse;

class QTAWS_EXPORT IamClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IamClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IamClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddClientIDToOpenIDConnectProviderResponse * addClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest &request);
    AddRoleToInstanceProfileResponse * addRoleToInstanceProfile(const AddRoleToInstanceProfileRequest &request);
    AddUserToGroupResponse * addUserToGroup(const AddUserToGroupRequest &request);
    AttachGroupPolicyResponse * attachGroupPolicy(const AttachGroupPolicyRequest &request);
    AttachRolePolicyResponse * attachRolePolicy(const AttachRolePolicyRequest &request);
    AttachUserPolicyResponse * attachUserPolicy(const AttachUserPolicyRequest &request);
    ChangePasswordResponse * changePassword(const ChangePasswordRequest &request);
    CreateAccessKeyResponse * createAccessKey(const CreateAccessKeyRequest &request);
    CreateAccountAliasResponse * createAccountAlias(const CreateAccountAliasRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateInstanceProfileResponse * createInstanceProfile(const CreateInstanceProfileRequest &request);
    CreateLoginProfileResponse * createLoginProfile(const CreateLoginProfileRequest &request);
    CreateOpenIDConnectProviderResponse * createOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest &request);
    CreatePolicyResponse * createPolicy(const CreatePolicyRequest &request);
    CreatePolicyVersionResponse * createPolicyVersion(const CreatePolicyVersionRequest &request);
    CreateRoleResponse * createRole(const CreateRoleRequest &request);
    CreateSAMLProviderResponse * createSAMLProvider(const CreateSAMLProviderRequest &request);
    CreateServiceLinkedRoleResponse * createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request);
    CreateServiceSpecificCredentialResponse * createServiceSpecificCredential(const CreateServiceSpecificCredentialRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    CreateVirtualMFADeviceResponse * createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request);
    DeactivateMFADeviceResponse * deactivateMFADevice(const DeactivateMFADeviceRequest &request);
    DeleteAccessKeyResponse * deleteAccessKey(const DeleteAccessKeyRequest &request);
    DeleteAccountAliasResponse * deleteAccountAlias(const DeleteAccountAliasRequest &request);
    DeleteAccountPasswordPolicyResponse * deleteAccountPasswordPolicy(const DeleteAccountPasswordPolicyRequest &request);
    DeleteAccountPasswordPolicyResponse * deleteAccountPasswordPolicy();
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteGroupPolicyResponse * deleteGroupPolicy(const DeleteGroupPolicyRequest &request);
    DeleteInstanceProfileResponse * deleteInstanceProfile(const DeleteInstanceProfileRequest &request);
    DeleteLoginProfileResponse * deleteLoginProfile(const DeleteLoginProfileRequest &request);
    DeleteOpenIDConnectProviderResponse * deleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeletePolicyVersionResponse * deletePolicyVersion(const DeletePolicyVersionRequest &request);
    DeleteRoleResponse * deleteRole(const DeleteRoleRequest &request);
    DeleteRolePermissionsBoundaryResponse * deleteRolePermissionsBoundary(const DeleteRolePermissionsBoundaryRequest &request);
    DeleteRolePolicyResponse * deleteRolePolicy(const DeleteRolePolicyRequest &request);
    DeleteSAMLProviderResponse * deleteSAMLProvider(const DeleteSAMLProviderRequest &request);
    DeleteSSHPublicKeyResponse * deleteSSHPublicKey(const DeleteSSHPublicKeyRequest &request);
    DeleteServerCertificateResponse * deleteServerCertificate(const DeleteServerCertificateRequest &request);
    DeleteServiceLinkedRoleResponse * deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request);
    DeleteServiceSpecificCredentialResponse * deleteServiceSpecificCredential(const DeleteServiceSpecificCredentialRequest &request);
    DeleteSigningCertificateResponse * deleteSigningCertificate(const DeleteSigningCertificateRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteUserPermissionsBoundaryResponse * deleteUserPermissionsBoundary(const DeleteUserPermissionsBoundaryRequest &request);
    DeleteUserPolicyResponse * deleteUserPolicy(const DeleteUserPolicyRequest &request);
    DeleteVirtualMFADeviceResponse * deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request);
    DetachGroupPolicyResponse * detachGroupPolicy(const DetachGroupPolicyRequest &request);
    DetachRolePolicyResponse * detachRolePolicy(const DetachRolePolicyRequest &request);
    DetachUserPolicyResponse * detachUserPolicy(const DetachUserPolicyRequest &request);
    EnableMFADeviceResponse * enableMFADevice(const EnableMFADeviceRequest &request);
    GenerateCredentialReportResponse * generateCredentialReport(const GenerateCredentialReportRequest &request);
    GenerateCredentialReportResponse * generateCredentialReport();
    GenerateOrganizationsAccessReportResponse * generateOrganizationsAccessReport(const GenerateOrganizationsAccessReportRequest &request);
    GenerateServiceLastAccessedDetailsResponse * generateServiceLastAccessedDetails(const GenerateServiceLastAccessedDetailsRequest &request);
    GetAccessKeyLastUsedResponse * getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request);
    GetAccountAuthorizationDetailsResponse * getAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest &request);
    GetAccountPasswordPolicyResponse * getAccountPasswordPolicy(const GetAccountPasswordPolicyRequest &request);
    GetAccountPasswordPolicyResponse * getAccountPasswordPolicy();
    GetAccountSummaryResponse * getAccountSummary(const GetAccountSummaryRequest &request);
    GetAccountSummaryResponse * getAccountSummary();
    GetContextKeysForCustomPolicyResponse * getContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest &request);
    GetContextKeysForPrincipalPolicyResponse * getContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest &request);
    GetCredentialReportResponse * getCredentialReport(const GetCredentialReportRequest &request);
    GetCredentialReportResponse * getCredentialReport();
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupPolicyResponse * getGroupPolicy(const GetGroupPolicyRequest &request);
    GetInstanceProfileResponse * getInstanceProfile(const GetInstanceProfileRequest &request);
    GetLoginProfileResponse * getLoginProfile(const GetLoginProfileRequest &request);
    GetOpenIDConnectProviderResponse * getOpenIDConnectProvider(const GetOpenIDConnectProviderRequest &request);
    GetOrganizationsAccessReportResponse * getOrganizationsAccessReport(const GetOrganizationsAccessReportRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetPolicyVersionResponse * getPolicyVersion(const GetPolicyVersionRequest &request);
    GetRoleResponse * getRole(const GetRoleRequest &request);
    GetRolePolicyResponse * getRolePolicy(const GetRolePolicyRequest &request);
    GetSAMLProviderResponse * getSAMLProvider(const GetSAMLProviderRequest &request);
    GetSSHPublicKeyResponse * getSSHPublicKey(const GetSSHPublicKeyRequest &request);
    GetServerCertificateResponse * getServerCertificate(const GetServerCertificateRequest &request);
    GetServiceLastAccessedDetailsResponse * getServiceLastAccessedDetails(const GetServiceLastAccessedDetailsRequest &request);
    GetServiceLastAccessedDetailsWithEntitiesResponse * getServiceLastAccessedDetailsWithEntities(const GetServiceLastAccessedDetailsWithEntitiesRequest &request);
    GetServiceLinkedRoleDeletionStatusResponse * getServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request);
    GetUserResponse * getUser(const GetUserRequest &request);
    GetUserPolicyResponse * getUserPolicy(const GetUserPolicyRequest &request);
    ListAccessKeysResponse * listAccessKeys(const ListAccessKeysRequest &request);
    ListAccountAliasesResponse * listAccountAliases(const ListAccountAliasesRequest &request);
    ListAttachedGroupPoliciesResponse * listAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest &request);
    ListAttachedRolePoliciesResponse * listAttachedRolePolicies(const ListAttachedRolePoliciesRequest &request);
    ListAttachedUserPoliciesResponse * listAttachedUserPolicies(const ListAttachedUserPoliciesRequest &request);
    ListEntitiesForPolicyResponse * listEntitiesForPolicy(const ListEntitiesForPolicyRequest &request);
    ListGroupPoliciesResponse * listGroupPolicies(const ListGroupPoliciesRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListGroupsForUserResponse * listGroupsForUser(const ListGroupsForUserRequest &request);
    ListInstanceProfileTagsResponse * listInstanceProfileTags(const ListInstanceProfileTagsRequest &request);
    ListInstanceProfilesResponse * listInstanceProfiles(const ListInstanceProfilesRequest &request);
    ListInstanceProfilesForRoleResponse * listInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest &request);
    ListMFADeviceTagsResponse * listMFADeviceTags(const ListMFADeviceTagsRequest &request);
    ListMFADevicesResponse * listMFADevices(const ListMFADevicesRequest &request);
    ListOpenIDConnectProviderTagsResponse * listOpenIDConnectProviderTags(const ListOpenIDConnectProviderTagsRequest &request);
    ListOpenIDConnectProvidersResponse * listOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListPoliciesGrantingServiceAccessResponse * listPoliciesGrantingServiceAccess(const ListPoliciesGrantingServiceAccessRequest &request);
    ListPolicyTagsResponse * listPolicyTags(const ListPolicyTagsRequest &request);
    ListPolicyVersionsResponse * listPolicyVersions(const ListPolicyVersionsRequest &request);
    ListRolePoliciesResponse * listRolePolicies(const ListRolePoliciesRequest &request);
    ListRoleTagsResponse * listRoleTags(const ListRoleTagsRequest &request);
    ListRolesResponse * listRoles(const ListRolesRequest &request);
    ListSAMLProviderTagsResponse * listSAMLProviderTags(const ListSAMLProviderTagsRequest &request);
    ListSAMLProvidersResponse * listSAMLProviders(const ListSAMLProvidersRequest &request);
    ListSSHPublicKeysResponse * listSSHPublicKeys(const ListSSHPublicKeysRequest &request);
    ListServerCertificateTagsResponse * listServerCertificateTags(const ListServerCertificateTagsRequest &request);
    ListServerCertificatesResponse * listServerCertificates(const ListServerCertificatesRequest &request);
    ListServiceSpecificCredentialsResponse * listServiceSpecificCredentials(const ListServiceSpecificCredentialsRequest &request);
    ListSigningCertificatesResponse * listSigningCertificates(const ListSigningCertificatesRequest &request);
    ListUserPoliciesResponse * listUserPolicies(const ListUserPoliciesRequest &request);
    ListUserTagsResponse * listUserTags(const ListUserTagsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ListVirtualMFADevicesResponse * listVirtualMFADevices(const ListVirtualMFADevicesRequest &request);
    PutGroupPolicyResponse * putGroupPolicy(const PutGroupPolicyRequest &request);
    PutRolePermissionsBoundaryResponse * putRolePermissionsBoundary(const PutRolePermissionsBoundaryRequest &request);
    PutRolePolicyResponse * putRolePolicy(const PutRolePolicyRequest &request);
    PutUserPermissionsBoundaryResponse * putUserPermissionsBoundary(const PutUserPermissionsBoundaryRequest &request);
    PutUserPolicyResponse * putUserPolicy(const PutUserPolicyRequest &request);
    RemoveClientIDFromOpenIDConnectProviderResponse * removeClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest &request);
    RemoveRoleFromInstanceProfileResponse * removeRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest &request);
    RemoveUserFromGroupResponse * removeUserFromGroup(const RemoveUserFromGroupRequest &request);
    ResetServiceSpecificCredentialResponse * resetServiceSpecificCredential(const ResetServiceSpecificCredentialRequest &request);
    ResyncMFADeviceResponse * resyncMFADevice(const ResyncMFADeviceRequest &request);
    SetDefaultPolicyVersionResponse * setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request);
    SetSecurityTokenServicePreferencesResponse * setSecurityTokenServicePreferences(const SetSecurityTokenServicePreferencesRequest &request);
    SimulateCustomPolicyResponse * simulateCustomPolicy(const SimulateCustomPolicyRequest &request);
    SimulatePrincipalPolicyResponse * simulatePrincipalPolicy(const SimulatePrincipalPolicyRequest &request);
    TagInstanceProfileResponse * tagInstanceProfile(const TagInstanceProfileRequest &request);
    TagMFADeviceResponse * tagMFADevice(const TagMFADeviceRequest &request);
    TagOpenIDConnectProviderResponse * tagOpenIDConnectProvider(const TagOpenIDConnectProviderRequest &request);
    TagPolicyResponse * tagPolicy(const TagPolicyRequest &request);
    TagRoleResponse * tagRole(const TagRoleRequest &request);
    TagSAMLProviderResponse * tagSAMLProvider(const TagSAMLProviderRequest &request);
    TagServerCertificateResponse * tagServerCertificate(const TagServerCertificateRequest &request);
    TagUserResponse * tagUser(const TagUserRequest &request);
    UntagInstanceProfileResponse * untagInstanceProfile(const UntagInstanceProfileRequest &request);
    UntagMFADeviceResponse * untagMFADevice(const UntagMFADeviceRequest &request);
    UntagOpenIDConnectProviderResponse * untagOpenIDConnectProvider(const UntagOpenIDConnectProviderRequest &request);
    UntagPolicyResponse * untagPolicy(const UntagPolicyRequest &request);
    UntagRoleResponse * untagRole(const UntagRoleRequest &request);
    UntagSAMLProviderResponse * untagSAMLProvider(const UntagSAMLProviderRequest &request);
    UntagServerCertificateResponse * untagServerCertificate(const UntagServerCertificateRequest &request);
    UntagUserResponse * untagUser(const UntagUserRequest &request);
    UpdateAccessKeyResponse * updateAccessKey(const UpdateAccessKeyRequest &request);
    UpdateAccountPasswordPolicyResponse * updateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest &request);
    UpdateAssumeRolePolicyResponse * updateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateLoginProfileResponse * updateLoginProfile(const UpdateLoginProfileRequest &request);
    UpdateOpenIDConnectProviderThumbprintResponse * updateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest &request);
    UpdateRoleResponse * updateRole(const UpdateRoleRequest &request);
    UpdateRoleDescriptionResponse * updateRoleDescription(const UpdateRoleDescriptionRequest &request);
    UpdateSAMLProviderResponse * updateSAMLProvider(const UpdateSAMLProviderRequest &request);
    UpdateSSHPublicKeyResponse * updateSSHPublicKey(const UpdateSSHPublicKeyRequest &request);
    UpdateServerCertificateResponse * updateServerCertificate(const UpdateServerCertificateRequest &request);
    UpdateServiceSpecificCredentialResponse * updateServiceSpecificCredential(const UpdateServiceSpecificCredentialRequest &request);
    UpdateSigningCertificateResponse * updateSigningCertificate(const UpdateSigningCertificateRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);
    UploadSSHPublicKeyResponse * uploadSSHPublicKey(const UploadSSHPublicKeyRequest &request);
    UploadServerCertificateResponse * uploadServerCertificate(const UploadServerCertificateRequest &request);
    UploadSigningCertificateResponse * uploadSigningCertificate(const UploadSigningCertificateRequest &request);

private:
    Q_DECLARE_PRIVATE(IamClient)
    Q_DISABLE_COPY(IamClient)

};

} // namespace IAM
} // namespace QtAws

#endif
