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

#ifndef QTAWS_COGNITOIDENTITYPROVIDERREQUEST_H
#define QTAWS_COGNITOIDENTITYPROVIDERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscognitoidentityproviderglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CognitoIdentityProviderRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CognitoIdentityProvider.
    enum Action {
        AddCustomAttributesAction,
        AdminAddUserToGroupAction,
        AdminConfirmSignUpAction,
        AdminCreateUserAction,
        AdminDeleteUserAction,
        AdminDeleteUserAttributesAction,
        AdminDisableProviderForUserAction,
        AdminDisableUserAction,
        AdminEnableUserAction,
        AdminForgetDeviceAction,
        AdminGetDeviceAction,
        AdminGetUserAction,
        AdminInitiateAuthAction,
        AdminLinkProviderForUserAction,
        AdminListDevicesAction,
        AdminListGroupsForUserAction,
        AdminListUserAuthEventsAction,
        AdminRemoveUserFromGroupAction,
        AdminResetUserPasswordAction,
        AdminRespondToAuthChallengeAction,
        AdminSetUserMFAPreferenceAction,
        AdminSetUserPasswordAction,
        AdminSetUserSettingsAction,
        AdminUpdateAuthEventFeedbackAction,
        AdminUpdateDeviceStatusAction,
        AdminUpdateUserAttributesAction,
        AdminUserGlobalSignOutAction,
        AssociateSoftwareTokenAction,
        ChangePasswordAction,
        ConfirmDeviceAction,
        ConfirmForgotPasswordAction,
        ConfirmSignUpAction,
        CreateGroupAction,
        CreateIdentityProviderAction,
        CreateResourceServerAction,
        CreateUserImportJobAction,
        CreateUserPoolAction,
        CreateUserPoolClientAction,
        CreateUserPoolDomainAction,
        DeleteGroupAction,
        DeleteIdentityProviderAction,
        DeleteResourceServerAction,
        DeleteUserAction,
        DeleteUserAttributesAction,
        DeleteUserPoolAction,
        DeleteUserPoolClientAction,
        DeleteUserPoolDomainAction,
        DescribeIdentityProviderAction,
        DescribeResourceServerAction,
        DescribeRiskConfigurationAction,
        DescribeUserImportJobAction,
        DescribeUserPoolAction,
        DescribeUserPoolClientAction,
        DescribeUserPoolDomainAction,
        ForgetDeviceAction,
        ForgotPasswordAction,
        GetCSVHeaderAction,
        GetDeviceAction,
        GetGroupAction,
        GetIdentityProviderByIdentifierAction,
        GetSigningCertificateAction,
        GetUICustomizationAction,
        GetUserAction,
        GetUserAttributeVerificationCodeAction,
        GetUserPoolMfaConfigAction,
        GlobalSignOutAction,
        InitiateAuthAction,
        ListDevicesAction,
        ListGroupsAction,
        ListIdentityProvidersAction,
        ListResourceServersAction,
        ListTagsForResourceAction,
        ListUserImportJobsAction,
        ListUserPoolClientsAction,
        ListUserPoolsAction,
        ListUsersAction,
        ListUsersInGroupAction,
        ResendConfirmationCodeAction,
        RespondToAuthChallengeAction,
        RevokeTokenAction,
        SetRiskConfigurationAction,
        SetUICustomizationAction,
        SetUserMFAPreferenceAction,
        SetUserPoolMfaConfigAction,
        SetUserSettingsAction,
        SignUpAction,
        StartUserImportJobAction,
        StopUserImportJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAuthEventFeedbackAction,
        UpdateDeviceStatusAction,
        UpdateGroupAction,
        UpdateIdentityProviderAction,
        UpdateResourceServerAction,
        UpdateUserAttributesAction,
        UpdateUserPoolAction,
        UpdateUserPoolClientAction,
        UpdateUserPoolDomainAction,
        VerifySoftwareTokenAction,
        VerifyUserAttributeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CognitoIdentityProviderRequest(const Action action);
    CognitoIdentityProviderRequest(const CognitoIdentityProviderRequest &other);
    CognitoIdentityProviderRequest &operator=(const CognitoIdentityProviderRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CognitoIdentityProviderRequest &other) const;


protected:
    /// @cond internal
    explicit CognitoIdentityProviderRequest(CognitoIdentityProviderRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CognitoIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
