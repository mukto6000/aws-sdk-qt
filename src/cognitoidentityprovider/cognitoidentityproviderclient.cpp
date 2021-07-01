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

#include "cognitoidentityproviderclient.h"
#include "cognitoidentityproviderclient_p.h"

#include "core/awssignaturev4.h"
#include "addcustomattributesrequest.h"
#include "addcustomattributesresponse.h"
#include "adminaddusertogrouprequest.h"
#include "adminaddusertogroupresponse.h"
#include "adminconfirmsignuprequest.h"
#include "adminconfirmsignupresponse.h"
#include "admincreateuserrequest.h"
#include "admincreateuserresponse.h"
#include "admindeleteuserrequest.h"
#include "admindeleteuserresponse.h"
#include "admindeleteuserattributesrequest.h"
#include "admindeleteuserattributesresponse.h"
#include "admindisableproviderforuserrequest.h"
#include "admindisableproviderforuserresponse.h"
#include "admindisableuserrequest.h"
#include "admindisableuserresponse.h"
#include "adminenableuserrequest.h"
#include "adminenableuserresponse.h"
#include "adminforgetdevicerequest.h"
#include "adminforgetdeviceresponse.h"
#include "admingetdevicerequest.h"
#include "admingetdeviceresponse.h"
#include "admingetuserrequest.h"
#include "admingetuserresponse.h"
#include "admininitiateauthrequest.h"
#include "admininitiateauthresponse.h"
#include "adminlinkproviderforuserrequest.h"
#include "adminlinkproviderforuserresponse.h"
#include "adminlistdevicesrequest.h"
#include "adminlistdevicesresponse.h"
#include "adminlistgroupsforuserrequest.h"
#include "adminlistgroupsforuserresponse.h"
#include "adminlistuserautheventsrequest.h"
#include "adminlistuserautheventsresponse.h"
#include "adminremoveuserfromgrouprequest.h"
#include "adminremoveuserfromgroupresponse.h"
#include "adminresetuserpasswordrequest.h"
#include "adminresetuserpasswordresponse.h"
#include "adminrespondtoauthchallengerequest.h"
#include "adminrespondtoauthchallengeresponse.h"
#include "adminsetusermfapreferencerequest.h"
#include "adminsetusermfapreferenceresponse.h"
#include "adminsetuserpasswordrequest.h"
#include "adminsetuserpasswordresponse.h"
#include "adminsetusersettingsrequest.h"
#include "adminsetusersettingsresponse.h"
#include "adminupdateautheventfeedbackrequest.h"
#include "adminupdateautheventfeedbackresponse.h"
#include "adminupdatedevicestatusrequest.h"
#include "adminupdatedevicestatusresponse.h"
#include "adminupdateuserattributesrequest.h"
#include "adminupdateuserattributesresponse.h"
#include "adminuserglobalsignoutrequest.h"
#include "adminuserglobalsignoutresponse.h"
#include "associatesoftwaretokenrequest.h"
#include "associatesoftwaretokenresponse.h"
#include "changepasswordrequest.h"
#include "changepasswordresponse.h"
#include "confirmdevicerequest.h"
#include "confirmdeviceresponse.h"
#include "confirmforgotpasswordrequest.h"
#include "confirmforgotpasswordresponse.h"
#include "confirmsignuprequest.h"
#include "confirmsignupresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "createidentityproviderrequest.h"
#include "createidentityproviderresponse.h"
#include "createresourceserverrequest.h"
#include "createresourceserverresponse.h"
#include "createuserimportjobrequest.h"
#include "createuserimportjobresponse.h"
#include "createuserpoolrequest.h"
#include "createuserpoolresponse.h"
#include "createuserpoolclientrequest.h"
#include "createuserpoolclientresponse.h"
#include "createuserpooldomainrequest.h"
#include "createuserpooldomainresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deleteidentityproviderrequest.h"
#include "deleteidentityproviderresponse.h"
#include "deleteresourceserverrequest.h"
#include "deleteresourceserverresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deleteuserattributesrequest.h"
#include "deleteuserattributesresponse.h"
#include "deleteuserpoolrequest.h"
#include "deleteuserpoolresponse.h"
#include "deleteuserpoolclientrequest.h"
#include "deleteuserpoolclientresponse.h"
#include "deleteuserpooldomainrequest.h"
#include "deleteuserpooldomainresponse.h"
#include "describeidentityproviderrequest.h"
#include "describeidentityproviderresponse.h"
#include "describeresourceserverrequest.h"
#include "describeresourceserverresponse.h"
#include "describeriskconfigurationrequest.h"
#include "describeriskconfigurationresponse.h"
#include "describeuserimportjobrequest.h"
#include "describeuserimportjobresponse.h"
#include "describeuserpoolrequest.h"
#include "describeuserpoolresponse.h"
#include "describeuserpoolclientrequest.h"
#include "describeuserpoolclientresponse.h"
#include "describeuserpooldomainrequest.h"
#include "describeuserpooldomainresponse.h"
#include "forgetdevicerequest.h"
#include "forgetdeviceresponse.h"
#include "forgotpasswordrequest.h"
#include "forgotpasswordresponse.h"
#include "getcsvheaderrequest.h"
#include "getcsvheaderresponse.h"
#include "getdevicerequest.h"
#include "getdeviceresponse.h"
#include "getgrouprequest.h"
#include "getgroupresponse.h"
#include "getidentityproviderbyidentifierrequest.h"
#include "getidentityproviderbyidentifierresponse.h"
#include "getsigningcertificaterequest.h"
#include "getsigningcertificateresponse.h"
#include "getuicustomizationrequest.h"
#include "getuicustomizationresponse.h"
#include "getuserrequest.h"
#include "getuserresponse.h"
#include "getuserattributeverificationcoderequest.h"
#include "getuserattributeverificationcoderesponse.h"
#include "getuserpoolmfaconfigrequest.h"
#include "getuserpoolmfaconfigresponse.h"
#include "globalsignoutrequest.h"
#include "globalsignoutresponse.h"
#include "initiateauthrequest.h"
#include "initiateauthresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listidentityprovidersrequest.h"
#include "listidentityprovidersresponse.h"
#include "listresourceserversrequest.h"
#include "listresourceserversresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listuserimportjobsrequest.h"
#include "listuserimportjobsresponse.h"
#include "listuserpoolclientsrequest.h"
#include "listuserpoolclientsresponse.h"
#include "listuserpoolsrequest.h"
#include "listuserpoolsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "listusersingrouprequest.h"
#include "listusersingroupresponse.h"
#include "resendconfirmationcoderequest.h"
#include "resendconfirmationcoderesponse.h"
#include "respondtoauthchallengerequest.h"
#include "respondtoauthchallengeresponse.h"
#include "revoketokenrequest.h"
#include "revoketokenresponse.h"
#include "setriskconfigurationrequest.h"
#include "setriskconfigurationresponse.h"
#include "setuicustomizationrequest.h"
#include "setuicustomizationresponse.h"
#include "setusermfapreferencerequest.h"
#include "setusermfapreferenceresponse.h"
#include "setuserpoolmfaconfigrequest.h"
#include "setuserpoolmfaconfigresponse.h"
#include "setusersettingsrequest.h"
#include "setusersettingsresponse.h"
#include "signuprequest.h"
#include "signupresponse.h"
#include "startuserimportjobrequest.h"
#include "startuserimportjobresponse.h"
#include "stopuserimportjobrequest.h"
#include "stopuserimportjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateautheventfeedbackrequest.h"
#include "updateautheventfeedbackresponse.h"
#include "updatedevicestatusrequest.h"
#include "updatedevicestatusresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updateidentityproviderrequest.h"
#include "updateidentityproviderresponse.h"
#include "updateresourceserverrequest.h"
#include "updateresourceserverresponse.h"
#include "updateuserattributesrequest.h"
#include "updateuserattributesresponse.h"
#include "updateuserpoolrequest.h"
#include "updateuserpoolresponse.h"
#include "updateuserpoolclientrequest.h"
#include "updateuserpoolclientresponse.h"
#include "updateuserpooldomainrequest.h"
#include "updateuserpooldomainresponse.h"
#include "verifysoftwaretokenrequest.h"
#include "verifysoftwaretokenresponse.h"
#include "verifyuserattributerequest.h"
#include "verifyuserattributeresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CognitoIdentityProvider
 * \brief Contains classess for accessing Amazon Cognito Identity Provider.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CognitoIdentityProviderClient
 * \brief The CognitoIdentityProviderClient class provides access to the Amazon Cognito Identity Provider service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 */

/*!
 * \brief Constructs a CognitoIdentityProviderClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoIdentityProviderClientPrivate(this), parent)
{
    Q_D(CognitoIdentityProviderClient);
    d->apiVersion = QStringLiteral("2016-04-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cognito-idp");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Cognito Identity Provider");
    d->serviceName = QStringLiteral("cognito-idp");
}

/*!
 * \overload CognitoIdentityProviderClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoIdentityProviderClientPrivate(this), parent)
{
    Q_D(CognitoIdentityProviderClient);
    d->apiVersion = QStringLiteral("2016-04-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cognito-idp");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Cognito Identity Provider");
    d->serviceName = QStringLiteral("cognito-idp");
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AddCustomAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds additional user attributes to the user pool
 */
AddCustomAttributesResponse * CognitoIdentityProviderClient::addCustomAttributes(const AddCustomAttributesRequest &request)
{
    return qobject_cast<AddCustomAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminAddUserToGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified user to the specified
 *
 * group>
 *
 * Calling this action requires developer
 */
AdminAddUserToGroupResponse * CognitoIdentityProviderClient::adminAddUserToGroup(const AdminAddUserToGroupRequest &request)
{
    return qobject_cast<AdminAddUserToGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminConfirmSignUpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Confirms user registration as an admin without using a confirmation code. Works on any
 *
 * user>
 *
 * Calling this action requires developer
 */
AdminConfirmSignUpResponse * CognitoIdentityProviderClient::adminConfirmSignUp(const AdminConfirmSignUpRequest &request)
{
    return qobject_cast<AdminConfirmSignUpResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminCreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user in the specified user
 *
 * pool>
 *
 * If <code>MessageAction</code> is not set, the default is to send a welcome message via email or phone
 *
 * (SMS)> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 *
 * </p </note>
 *
 * This message is based on a template that you configured in your call to create or update a user pool. This template
 * includes your custom sign-up instructions and placeholders for user name and temporary
 *
 * password>
 *
 * Alternatively, you can call <code>AdminCreateUser</code> with “SUPPRESS” for the <code>MessageAction</code> parameter,
 * and Amazon Cognito will not send any email.
 *
 * </p
 *
 * In either case, the user will be in the <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
 *
 * password>
 *
 * <code>AdminCreateUser</code> requires developer
 */
AdminCreateUserResponse * CognitoIdentityProviderClient::adminCreateUser(const AdminCreateUserRequest &request)
{
    return qobject_cast<AdminCreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminDeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user as an administrator. Works on any
 *
 * user>
 *
 * Calling this action requires developer
 */
AdminDeleteUserResponse * CognitoIdentityProviderClient::adminDeleteUser(const AdminDeleteUserRequest &request)
{
    return qobject_cast<AdminDeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminDeleteUserAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the user attributes in a user pool as an administrator. Works on any
 *
 * user>
 *
 * Calling this action requires developer
 */
AdminDeleteUserAttributesResponse * CognitoIdentityProviderClient::adminDeleteUserAttributes(const AdminDeleteUserAttributesRequest &request)
{
    return qobject_cast<AdminDeleteUserAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminDisableProviderForUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the user from signing in with the specified external (SAML or social) identity provider. If the user to disable
 * is a Cognito User Pools native username + password user, they are not permitted to use their password to sign-in. If the
 * user to disable is a linked external IdP user, any link between that user and an existing user is removed. The next time
 * the external user (no longer attached to the previously linked <code>DestinationUser</code>) signs in, they must create
 * a new user account. See <a
 *
 * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>>
 *
 * This action is enabled only for admin access and requires developer
 *
 * credentials>
 *
 * The <code>ProviderName</code> must match the value specified when creating an IdP for the pool.
 *
 * </p
 *
 * To disable a native username + password user, the <code>ProviderName</code> value must be <code>Cognito</code> and the
 * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>, with the <code>ProviderAttributeValue</code>
 * being the name that is used in the user pool for the
 *
 * user>
 *
 * The <code>ProviderAttributeName</code> must always be <code>Cognito_Subject</code> for social identity providers. The
 * <code>ProviderAttributeValue</code> must always be the exact subject that was used when the user was originally linked
 * as a source
 *
 * user>
 *
 * For de-linking a SAML identity, there are two scenarios. If the linked identity has not yet been used to sign-in, the
 * <code>ProviderAttributeName</code> and <code>ProviderAttributeValue</code> must be the same values that were used for
 * the <code>SourceUser</code> when the identities were originally linked using <code> AdminLinkProviderForUser</code>
 * call. (If the linking was done with <code>ProviderAttributeName</code> set to <code>Cognito_Subject</code>, the same
 * applies here). However, if the user has already signed in, the <code>ProviderAttributeName</code> must be
 * <code>Cognito_Subject</code> and <code>ProviderAttributeValue</code> must be the subject of the SAML
 */
AdminDisableProviderForUserResponse * CognitoIdentityProviderClient::adminDisableProviderForUser(const AdminDisableProviderForUserRequest &request)
{
    return qobject_cast<AdminDisableProviderForUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminDisableUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified
 *
 * user>
 *
 * Calling this action requires developer
 */
AdminDisableUserResponse * CognitoIdentityProviderClient::adminDisableUser(const AdminDisableUserRequest &request)
{
    return qobject_cast<AdminDisableUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminEnableUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified user as an administrator. Works on any
 *
 * user>
 *
 * Calling this action requires developer
 */
AdminEnableUserResponse * CognitoIdentityProviderClient::adminEnableUser(const AdminEnableUserRequest &request)
{
    return qobject_cast<AdminEnableUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminForgetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forgets the device, as an
 *
 * administrator>
 *
 * Calling this action requires developer
 */
AdminForgetDeviceResponse * CognitoIdentityProviderClient::adminForgetDevice(const AdminForgetDeviceRequest &request)
{
    return qobject_cast<AdminForgetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminGetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the device, as an
 *
 * administrator>
 *
 * Calling this action requires developer
 */
AdminGetDeviceResponse * CognitoIdentityProviderClient::adminGetDevice(const AdminGetDeviceRequest &request)
{
    return qobject_cast<AdminGetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminGetUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified user by user name in a user pool as an administrator. Works on any
 *
 * user>
 *
 * Calling this action requires developer
 */
AdminGetUserResponse * CognitoIdentityProviderClient::adminGetUser(const AdminGetUserRequest &request)
{
    return qobject_cast<AdminGetUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminInitiateAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates the authentication flow, as an
 *
 * administrator> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 *
 * </p </note>
 *
 * Calling this action requires developer
 */
AdminInitiateAuthResponse * CognitoIdentityProviderClient::adminInitiateAuth(const AdminInitiateAuthRequest &request)
{
    return qobject_cast<AdminInitiateAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminLinkProviderForUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Links an existing user account in a user pool (<code>DestinationUser</code>) to an identity from an external identity
 * provider (<code>SourceUser</code>) based on a specified attribute name and value from the external identity provider.
 * This allows you to create a link from the existing user account to an external federated user identity that has not yet
 * been used to sign in, so that the federated user identity can be used to sign in as the existing user account.
 *
 * </p
 *
 * For example, if there is an existing user with a username and password, this API links that user to a federated user
 * identity, so that when the federated user identity is used, the user signs in as the existing user account.
 *
 * </p <note>
 *
 * The maximum number of federated identities linked to a user is
 *
 * 5> </note> <b>
 *
 * Because this API allows a user with an external federated identity to sign in as an existing user in the user pool, it
 * is critical that it only be used with external identity providers and provider attributes that have been trusted by the
 * application
 *
 * owner> </b>
 *
 * This action is enabled only for admin access and requires developer
 */
AdminLinkProviderForUserResponse * CognitoIdentityProviderClient::adminLinkProviderForUser(const AdminLinkProviderForUserRequest &request)
{
    return qobject_cast<AdminLinkProviderForUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists devices, as an
 *
 * administrator>
 *
 * Calling this action requires developer
 */
AdminListDevicesResponse * CognitoIdentityProviderClient::adminListDevices(const AdminListDevicesRequest &request)
{
    return qobject_cast<AdminListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminListGroupsForUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the groups that the user belongs
 *
 * to>
 *
 * Calling this action requires developer
 */
AdminListGroupsForUserResponse * CognitoIdentityProviderClient::adminListGroupsForUser(const AdminListGroupsForUserRequest &request)
{
    return qobject_cast<AdminListGroupsForUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminListUserAuthEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists a history of user activity and any risks detected as part of Amazon Cognito advanced
 */
AdminListUserAuthEventsResponse * CognitoIdentityProviderClient::adminListUserAuthEvents(const AdminListUserAuthEventsRequest &request)
{
    return qobject_cast<AdminListUserAuthEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminRemoveUserFromGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified user from the specified
 *
 * group>
 *
 * Calling this action requires developer
 */
AdminRemoveUserFromGroupResponse * CognitoIdentityProviderClient::adminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest &request)
{
    return qobject_cast<AdminRemoveUserFromGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminResetUserPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the specified user's password in a user pool as an administrator. Works on any
 *
 * user>
 *
 * When a developer calls this API, the current password is invalidated, so it must be changed. If a user tries to sign in
 * after the API is called, the app will get a PasswordResetRequiredException exception back and should direct the user
 * down the flow to reset the password, which is the same as the forgot password flow. In addition, if the user pool has
 * phone verification selected and a verified phone number exists for the user, or if email verification is selected and a
 * verified email exists for the user, calling this API will also result in sending a message to the end user with the code
 * to change their
 *
 * password> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 *
 * </p </note>
 *
 * Calling this action requires developer
 */
AdminResetUserPasswordResponse * CognitoIdentityProviderClient::adminResetUserPassword(const AdminResetUserPasswordRequest &request)
{
    return qobject_cast<AdminResetUserPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminRespondToAuthChallengeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Responds to an authentication challenge, as an
 *
 * administrator> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 *
 * </p </note>
 *
 * Calling this action requires developer
 */
AdminRespondToAuthChallengeResponse * CognitoIdentityProviderClient::adminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest &request)
{
    return qobject_cast<AdminRespondToAuthChallengeResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminSetUserMFAPreferenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the user's multi-factor authentication (MFA) preference, including which MFA options are enabled and if any are
 * preferred. Only one factor can be set as preferred. The preferred MFA factor will be used to authenticate a user if
 * multiple factors are enabled. If multiple options are enabled and no preference is set, a challenge to choose an MFA
 * option will be returned during sign
 */
AdminSetUserMFAPreferenceResponse * CognitoIdentityProviderClient::adminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest &request)
{
    return qobject_cast<AdminSetUserMFAPreferenceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminSetUserPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the specified user's password in a user pool as an administrator. Works on any user.
 *
 * </p
 *
 * The password can be temporary or permanent. If it is temporary, the user status will be placed into the
 * <code>FORCE_CHANGE_PASSWORD</code> state. When the user next tries to sign in, the InitiateAuth/AdminInitiateAuth
 * response will contain the <code>NEW_PASSWORD_REQUIRED</code> challenge. If the user does not sign in before it expires,
 * the user will not be able to sign in and their password will need to be reset by an administrator.
 *
 * </p
 *
 * Once the user has set a new password, or the password is permanent, the user status will be set to
 */
AdminSetUserPasswordResponse * CognitoIdentityProviderClient::adminSetUserPassword(const AdminSetUserPasswordRequest &request)
{
    return qobject_cast<AdminSetUserPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminSetUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <i>This action is no longer supported.</i> You can use it to configure only SMS MFA. You can't use it to configure TOTP
 * software token MFA. To configure either type of MFA, use <a
 * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminSetUserMFAPreference.html">AdminSetUserMFAPreference</a>
 */
AdminSetUserSettingsResponse * CognitoIdentityProviderClient::adminSetUserSettings(const AdminSetUserSettingsRequest &request)
{
    return qobject_cast<AdminSetUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminUpdateAuthEventFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides feedback for an authentication event as to whether it was from a valid user. This feedback is used for
 * improving the risk evaluation decision for the user pool as part of Amazon Cognito advanced
 */
AdminUpdateAuthEventFeedbackResponse * CognitoIdentityProviderClient::adminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest &request)
{
    return qobject_cast<AdminUpdateAuthEventFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminUpdateDeviceStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the device status as an
 *
 * administrator>
 *
 * Calling this action requires developer
 */
AdminUpdateDeviceStatusResponse * CognitoIdentityProviderClient::adminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest &request)
{
    return qobject_cast<AdminUpdateDeviceStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminUpdateUserAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified user's attributes, including developer attributes, as an administrator. Works on any
 *
 * user>
 *
 * For custom attributes, you must prepend the <code>custom:</code> prefix to the attribute
 *
 * name>
 *
 * In addition to updating user attributes, this API can also be used to mark phone and email as
 *
 * verified> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 *
 * </p </note>
 *
 * Calling this action requires developer
 */
AdminUpdateUserAttributesResponse * CognitoIdentityProviderClient::adminUpdateUserAttributes(const AdminUpdateUserAttributesRequest &request)
{
    return qobject_cast<AdminUpdateUserAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AdminUserGlobalSignOutResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Signs out users from all devices, as an administrator. It also invalidates all refresh tokens issued to a user. The
 * user's current access and Id tokens remain valid until their expiry. Access and Id tokens expire one hour after they are
 *
 * issued>
 *
 * Calling this action requires developer
 */
AdminUserGlobalSignOutResponse * CognitoIdentityProviderClient::adminUserGlobalSignOut(const AdminUserGlobalSignOutRequest &request)
{
    return qobject_cast<AdminUserGlobalSignOutResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * AssociateSoftwareTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a unique generated shared secret key code for the user account. The request takes an access token or a session
 * string, but not
 *
 * both> <note>
 *
 * Calling AssociateSoftwareToken immediately disassociates the existing software token from the user account. If the user
 * doesn't subsequently verify the software token, their account is essentially set up to authenticate without MFA. If MFA
 * config is set to Optional at the user pool level, the user can then login without MFA. However, if MFA is set to
 * Required for the user pool, the user will be asked to setup a new software token MFA during sign
 */
AssociateSoftwareTokenResponse * CognitoIdentityProviderClient::associateSoftwareToken(const AssociateSoftwareTokenRequest &request)
{
    return qobject_cast<AssociateSoftwareTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ChangePasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the password for a specified user in a user
 */
ChangePasswordResponse * CognitoIdentityProviderClient::changePassword(const ChangePasswordRequest &request)
{
    return qobject_cast<ChangePasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ConfirmDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Confirms tracking of the device. This API call is the call that begins device
 */
ConfirmDeviceResponse * CognitoIdentityProviderClient::confirmDevice(const ConfirmDeviceRequest &request)
{
    return qobject_cast<ConfirmDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ConfirmForgotPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a user to enter a confirmation code to reset a forgotten
 */
ConfirmForgotPasswordResponse * CognitoIdentityProviderClient::confirmForgotPassword(const ConfirmForgotPasswordRequest &request)
{
    return qobject_cast<ConfirmForgotPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ConfirmSignUpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Confirms registration of a user and handles the existing alias from a previous
 */
ConfirmSignUpResponse * CognitoIdentityProviderClient::confirmSignUp(const ConfirmSignUpRequest &request)
{
    return qobject_cast<ConfirmSignUpResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new group in the specified user
 *
 * pool>
 *
 * Calling this action requires developer
 */
CreateGroupResponse * CognitoIdentityProviderClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an identity provider for a user
 */
CreateIdentityProviderResponse * CognitoIdentityProviderClient::createIdentityProvider(const CreateIdentityProviderRequest &request)
{
    return qobject_cast<CreateIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateResourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new OAuth2.0 resource server and defines custom scopes in
 */
CreateResourceServerResponse * CognitoIdentityProviderClient::createResourceServer(const CreateResourceServerRequest &request)
{
    return qobject_cast<CreateResourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateUserImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the user import
 */
CreateUserImportJobResponse * CognitoIdentityProviderClient::createUserImportJob(const CreateUserImportJobRequest &request)
{
    return qobject_cast<CreateUserImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateUserPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Cognito user pool and sets the password policy for the
 *
 * pool> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
CreateUserPoolResponse * CognitoIdentityProviderClient::createUserPool(const CreateUserPoolRequest &request)
{
    return qobject_cast<CreateUserPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateUserPoolClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the user pool
 *
 * client>
 *
 * When you create a new user pool client, token revocation is automatically enabled. For more information about revoking
 * tokens, see <a
 */
CreateUserPoolClientResponse * CognitoIdentityProviderClient::createUserPoolClient(const CreateUserPoolClientRequest &request)
{
    return qobject_cast<CreateUserPoolClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * CreateUserPoolDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new domain for a user
 */
CreateUserPoolDomainResponse * CognitoIdentityProviderClient::createUserPoolDomain(const CreateUserPoolDomainRequest &request)
{
    return qobject_cast<CreateUserPoolDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * group>
 *
 * Calling this action requires developer
 */
DeleteGroupResponse * CognitoIdentityProviderClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an identity provider for a user
 */
DeleteIdentityProviderResponse * CognitoIdentityProviderClient::deleteIdentityProvider(const DeleteIdentityProviderRequest &request)
{
    return qobject_cast<DeleteIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteResourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource
 */
DeleteResourceServerResponse * CognitoIdentityProviderClient::deleteResourceServer(const DeleteResourceServerRequest &request)
{
    return qobject_cast<DeleteResourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a user to delete himself or
 */
DeleteUserResponse * CognitoIdentityProviderClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteUserAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the attributes for a
 */
DeleteUserAttributesResponse * CognitoIdentityProviderClient::deleteUserAttributes(const DeleteUserAttributesRequest &request)
{
    return qobject_cast<DeleteUserAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteUserPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Cognito user
 */
DeleteUserPoolResponse * CognitoIdentityProviderClient::deleteUserPool(const DeleteUserPoolRequest &request)
{
    return qobject_cast<DeleteUserPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteUserPoolClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the developer to delete the user pool
 */
DeleteUserPoolClientResponse * CognitoIdentityProviderClient::deleteUserPoolClient(const DeleteUserPoolClientRequest &request)
{
    return qobject_cast<DeleteUserPoolClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DeleteUserPoolDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a domain for a user
 */
DeleteUserPoolDomainResponse * CognitoIdentityProviderClient::deleteUserPoolDomain(const DeleteUserPoolDomainRequest &request)
{
    return qobject_cast<DeleteUserPoolDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specific identity
 */
DescribeIdentityProviderResponse * CognitoIdentityProviderClient::describeIdentityProvider(const DescribeIdentityProviderRequest &request)
{
    return qobject_cast<DescribeIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeResourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a resource
 */
DescribeResourceServerResponse * CognitoIdentityProviderClient::describeResourceServer(const DescribeResourceServerRequest &request)
{
    return qobject_cast<DescribeResourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeRiskConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the risk
 */
DescribeRiskConfigurationResponse * CognitoIdentityProviderClient::describeRiskConfiguration(const DescribeRiskConfigurationRequest &request)
{
    return qobject_cast<DescribeRiskConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeUserImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the user import
 */
DescribeUserImportJobResponse * CognitoIdentityProviderClient::describeUserImportJob(const DescribeUserImportJobRequest &request)
{
    return qobject_cast<DescribeUserImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeUserPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the configuration information and metadata of the specified user
 */
DescribeUserPoolResponse * CognitoIdentityProviderClient::describeUserPool(const DescribeUserPoolRequest &request)
{
    return qobject_cast<DescribeUserPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeUserPoolClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Client method for returning the configuration information and metadata of the specified user pool app
 */
DescribeUserPoolClientResponse * CognitoIdentityProviderClient::describeUserPoolClient(const DescribeUserPoolClientRequest &request)
{
    return qobject_cast<DescribeUserPoolClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * DescribeUserPoolDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
DescribeUserPoolDomainResponse * CognitoIdentityProviderClient::describeUserPoolDomain(const DescribeUserPoolDomainRequest &request)
{
    return qobject_cast<DescribeUserPoolDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ForgetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forgets the specified
 */
ForgetDeviceResponse * CognitoIdentityProviderClient::forgetDevice(const ForgetDeviceRequest &request)
{
    return qobject_cast<ForgetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ForgotPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Calling this API causes a message to be sent to the end user with a confirmation code that is required to change the
 * user's password. For the <code>Username</code> parameter, you can use the username or user alias. The method used to
 * send the confirmation code is sent according to the specified AccountRecoverySetting. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/how-to-recover-a-user-account.html">Recovering User
 * Accounts</a> in the <i>Amazon Cognito Developer Guide</i>. If neither a verified phone number nor a verified email
 * exists, an <code>InvalidParameterException</code> is thrown. To use the confirmation code for resetting the password,
 * call <a
 *
 * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmForgotPassword.html">ConfirmForgotPassword</a>>
 * <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
ForgotPasswordResponse * CognitoIdentityProviderClient::forgotPassword(const ForgotPasswordRequest &request)
{
    return qobject_cast<ForgotPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetCSVHeaderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the header information for the .csv file to be used as input for the user import
 */
GetCSVHeaderResponse * CognitoIdentityProviderClient::getCSVHeader(const GetCSVHeaderRequest &request)
{
    return qobject_cast<GetCSVHeaderResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the
 */
GetDeviceResponse * CognitoIdentityProviderClient::getDevice(const GetDeviceRequest &request)
{
    return qobject_cast<GetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 *
 * group>
 *
 * Calling this action requires developer
 */
GetGroupResponse * CognitoIdentityProviderClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetIdentityProviderByIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified identity
 */
GetIdentityProviderByIdentifierResponse * CognitoIdentityProviderClient::getIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest &request)
{
    return qobject_cast<GetIdentityProviderByIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetSigningCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This method takes a user pool ID, and returns the signing
 */
GetSigningCertificateResponse * CognitoIdentityProviderClient::getSigningCertificate(const GetSigningCertificateRequest &request)
{
    return qobject_cast<GetSigningCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetUICustomizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the UI Customization information for a particular app client's app UI, if there is something set. If nothing is set
 * for the particular client, but there is an existing pool level customization (app <code>clientId</code> will be
 * <code>ALL</code>), then that is returned. If nothing is present, then an empty shape is
 */
GetUICustomizationResponse * CognitoIdentityProviderClient::getUICustomization(const GetUICustomizationRequest &request)
{
    return qobject_cast<GetUICustomizationResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the user attributes and metadata for a
 */
GetUserResponse * CognitoIdentityProviderClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetUserAttributeVerificationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the user attribute verification code for the specified attribute
 *
 * name> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
GetUserAttributeVerificationCodeResponse * CognitoIdentityProviderClient::getUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest &request)
{
    return qobject_cast<GetUserAttributeVerificationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GetUserPoolMfaConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the user pool multi-factor authentication (MFA)
 */
GetUserPoolMfaConfigResponse * CognitoIdentityProviderClient::getUserPoolMfaConfig(const GetUserPoolMfaConfigRequest &request)
{
    return qobject_cast<GetUserPoolMfaConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * GlobalSignOutResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Signs out users from all devices. It also invalidates all refresh tokens issued to a user. The user's current access and
 * Id tokens remain valid until their expiry. Access and Id tokens expire one hour after they are
 */
GlobalSignOutResponse * CognitoIdentityProviderClient::globalSignOut(const GlobalSignOutRequest &request)
{
    return qobject_cast<GlobalSignOutResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * InitiateAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates the authentication
 *
 * flow> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
InitiateAuthResponse * CognitoIdentityProviderClient::initiateAuth(const InitiateAuthRequest &request)
{
    return qobject_cast<InitiateAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the
 */
ListDevicesResponse * CognitoIdentityProviderClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the groups associated with a user
 *
 * pool>
 *
 * Calling this action requires developer
 */
ListGroupsResponse * CognitoIdentityProviderClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListIdentityProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about all identity providers for a user
 */
ListIdentityProvidersResponse * CognitoIdentityProviderClient::listIdentityProviders(const ListIdentityProvidersRequest &request)
{
    return qobject_cast<ListIdentityProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListResourceServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resource servers for a user
 */
ListResourceServersResponse * CognitoIdentityProviderClient::listResourceServers(const ListResourceServersRequest &request)
{
    return qobject_cast<ListResourceServersResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are assigned to an Amazon Cognito user
 *
 * pool>
 *
 * A tag is a label that you can apply to user pools to categorize and manage them in different ways, such as by purpose,
 * owner, environment, or other
 *
 * criteria>
 *
 * You can use this action up to 10 times per second, per
 */
ListTagsForResourceResponse * CognitoIdentityProviderClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListUserImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the user import
 */
ListUserImportJobsResponse * CognitoIdentityProviderClient::listUserImportJobs(const ListUserImportJobsRequest &request)
{
    return qobject_cast<ListUserImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListUserPoolClientsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the clients that have been created for the specified user
 */
ListUserPoolClientsResponse * CognitoIdentityProviderClient::listUserPoolClients(const ListUserPoolClientsRequest &request)
{
    return qobject_cast<ListUserPoolClientsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListUserPoolsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the user pools associated with an AWS
 */
ListUserPoolsResponse * CognitoIdentityProviderClient::listUserPools(const ListUserPoolsRequest &request)
{
    return qobject_cast<ListUserPoolsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the users in the Amazon Cognito user
 */
ListUsersResponse * CognitoIdentityProviderClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ListUsersInGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the users in the specified
 *
 * group>
 *
 * Calling this action requires developer
 */
ListUsersInGroupResponse * CognitoIdentityProviderClient::listUsersInGroup(const ListUsersInGroupRequest &request)
{
    return qobject_cast<ListUsersInGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * ResendConfirmationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resends the confirmation (for confirmation of registration) to a specific user in the user
 *
 * pool> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
ResendConfirmationCodeResponse * CognitoIdentityProviderClient::resendConfirmationCode(const ResendConfirmationCodeRequest &request)
{
    return qobject_cast<ResendConfirmationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * RespondToAuthChallengeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Responds to the authentication
 *
 * challenge> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
RespondToAuthChallengeResponse * CognitoIdentityProviderClient::respondToAuthChallenge(const RespondToAuthChallengeRequest &request)
{
    return qobject_cast<RespondToAuthChallengeResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * RevokeTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes all of the access tokens generated by the specified refresh token. After the token is revoked, you can not use
 * the revoked token to access Cognito authenticated
 */
RevokeTokenResponse * CognitoIdentityProviderClient::revokeToken(const RevokeTokenRequest &request)
{
    return qobject_cast<RevokeTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * SetRiskConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures actions on detected risks. To delete the risk configuration for <code>UserPoolId</code> or
 * <code>ClientId</code>, pass null values for all four configuration
 *
 * types>
 *
 * To enable Amazon Cognito advanced security features, update the user pool to include the <code>UserPoolAddOns</code>
 */
SetRiskConfigurationResponse * CognitoIdentityProviderClient::setRiskConfiguration(const SetRiskConfigurationRequest &request)
{
    return qobject_cast<SetRiskConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * SetUICustomizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the UI customization information for a user pool's built-in app
 *
 * UI>
 *
 * You can specify app UI customization settings for a single client (with a specific <code>clientId</code>) or for all
 * clients (by setting the <code>clientId</code> to <code>ALL</code>). If you specify <code>ALL</code>, the default
 * configuration will be used for every client that has no UI customization set previously. If you specify UI customization
 * settings for a particular client, it will no longer fall back to the <code>ALL</code> configuration.
 *
 * </p <note>
 *
 * To use this API, your user pool must have a domain associated with it. Otherwise, there is no place to host the app's
 * pages, and the service will throw an
 */
SetUICustomizationResponse * CognitoIdentityProviderClient::setUICustomization(const SetUICustomizationRequest &request)
{
    return qobject_cast<SetUICustomizationResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * SetUserMFAPreferenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the user's multi-factor authentication (MFA) method preference, including which MFA factors are enabled and if any
 * are preferred. Only one factor can be set as preferred. The preferred MFA factor will be used to authenticate a user if
 * multiple factors are enabled. If multiple options are enabled and no preference is set, a challenge to choose an MFA
 * option will be returned during sign in. If an MFA type is enabled for a user, the user will be prompted for MFA during
 * all sign in attempts, unless device tracking is turned on and the device has been trusted. If you would like MFA to be
 * applied selectively based on the assessed risk level of sign in attempts, disable MFA for users and turn on Adaptive
 * Authentication for the user
 */
SetUserMFAPreferenceResponse * CognitoIdentityProviderClient::setUserMFAPreference(const SetUserMFAPreferenceRequest &request)
{
    return qobject_cast<SetUserMFAPreferenceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * SetUserPoolMfaConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the user pool multi-factor authentication (MFA)
 *
 * configuration> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
SetUserPoolMfaConfigResponse * CognitoIdentityProviderClient::setUserPoolMfaConfig(const SetUserPoolMfaConfigRequest &request)
{
    return qobject_cast<SetUserPoolMfaConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * SetUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <i>This action is no longer supported.</i> You can use it to configure only SMS MFA. You can't use it to configure TOTP
 * software token MFA. To configure either type of MFA, use <a
 * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetUserMFAPreference.html">SetUserMFAPreference</a>
 */
SetUserSettingsResponse * CognitoIdentityProviderClient::setUserSettings(const SetUserSettingsRequest &request)
{
    return qobject_cast<SetUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * SignUpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers the user in the specified user pool and creates a user name, password, and user
 *
 * attributes> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
SignUpResponse * CognitoIdentityProviderClient::signUp(const SignUpRequest &request)
{
    return qobject_cast<SignUpResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * StartUserImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the user
 */
StartUserImportJobResponse * CognitoIdentityProviderClient::startUserImportJob(const StartUserImportJobRequest &request)
{
    return qobject_cast<StartUserImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * StopUserImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the user import
 */
StopUserImportJobResponse * CognitoIdentityProviderClient::stopUserImportJob(const StopUserImportJobRequest &request)
{
    return qobject_cast<StopUserImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns a set of tags to an Amazon Cognito user pool. A tag is a label that you can use to categorize and manage user
 * pools in different ways, such as by purpose, owner, environment, or other
 *
 * criteria>
 *
 * Each tag consists of a key and value, both of which you define. A key is a general category for more specific values.
 * For example, if you have two versions of a user pool, one for testing and another for production, you might assign an
 * <code>Environment</code> tag key to both user pools. The value of this key might be <code>Test</code> for one user pool
 * and <code>Production</code> for the
 *
 * other>
 *
 * Tags are useful for cost tracking and access control. You can activate your tags so that they appear on the Billing and
 * Cost Management console, where you can track the costs associated with your user pools. In an IAM policy, you can
 * constrain permissions for user pools based on specific tags or tag
 *
 * values>
 *
 * You can use this action up to 5 times per second, per account. A user pool can have as many as 50
 */
TagResourceResponse * CognitoIdentityProviderClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from an Amazon Cognito user pool. You can use this action up to 5 times per second, per
 */
UntagResourceResponse * CognitoIdentityProviderClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateAuthEventFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the feedback for an authentication event whether it was from a valid user or not. This feedback is used for
 * improving the risk evaluation decision for the user pool as part of Amazon Cognito advanced
 */
UpdateAuthEventFeedbackResponse * CognitoIdentityProviderClient::updateAuthEventFeedback(const UpdateAuthEventFeedbackRequest &request)
{
    return qobject_cast<UpdateAuthEventFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateDeviceStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the device
 */
UpdateDeviceStatusResponse * CognitoIdentityProviderClient::updateDeviceStatus(const UpdateDeviceStatusRequest &request)
{
    return qobject_cast<UpdateDeviceStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified group with the specified
 *
 * attributes>
 *
 * Calling this action requires developer
 *
 * credentials> <b>
 *
 * If you don't provide a value for an attribute, it will be set to the default
 */
UpdateGroupResponse * CognitoIdentityProviderClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates identity provider information for a user
 */
UpdateIdentityProviderResponse * CognitoIdentityProviderClient::updateIdentityProvider(const UpdateIdentityProviderRequest &request)
{
    return qobject_cast<UpdateIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateResourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and scopes of resource server. All other fields are
 *
 * read-only> <b>
 *
 * If you don't provide a value for an attribute, it will be set to the default
 */
UpdateResourceServerResponse * CognitoIdentityProviderClient::updateResourceServer(const UpdateResourceServerRequest &request)
{
    return qobject_cast<UpdateResourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateUserAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a user to update a specific attribute (one at a
 *
 * time)> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
UpdateUserAttributesResponse * CognitoIdentityProviderClient::updateUserAttributes(const UpdateUserAttributesRequest &request)
{
    return qobject_cast<UpdateUserAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateUserPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified user pool with the specified attributes. You can get a list of the current user pool settings
 * using <a
 * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.
 * If you don't provide a value for an attribute, it will be set to the default
 *
 * value> <note>
 *
 * This action might generate an SMS text message. Starting June 1, 2021, U.S. telecom carriers require that you register
 * an origination phone number before you can send SMS messages to U.S. phone numbers. If you use SMS text messages in
 * Amazon Cognito, you must register a phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
 * Pinpoint</a>. Cognito will use the the registered number automatically. Otherwise, Cognito users that must receive SMS
 * messages might be unable to sign up, activate their accounts, or sign
 *
 * in>
 *
 * If you have never used SMS text messages with Amazon Cognito or any other AWS service, Amazon SNS might place your
 * account in SMS sandbox. In <i> <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox mode</a>
 * </i>, you’ll have limitations, such as sending messages to only verified phone numbers. After testing in the sandbox
 * environment, you can move out of the SMS sandbox and into production. For more information, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
 * SMS message settings for Cognito User Pools</a> in the <i>Amazon Cognito Developer Guide</i>.
 */
UpdateUserPoolResponse * CognitoIdentityProviderClient::updateUserPool(const UpdateUserPoolRequest &request)
{
    return qobject_cast<UpdateUserPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateUserPoolClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified user pool app client with the specified attributes. You can get a list of the current user pool
 * app client settings using <a
 *
 * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPoolClient.html">DescribeUserPoolClient</a>>
 * <b>
 *
 * If you don't provide a value for an attribute, it will be set to the default
 *
 * value> </b>
 *
 * You can also use this operation to enable token revocation for user pool clients. For more information about revoking
 * tokens, see <a
 */
UpdateUserPoolClientResponse * CognitoIdentityProviderClient::updateUserPoolClient(const UpdateUserPoolClientRequest &request)
{
    return qobject_cast<UpdateUserPoolClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * UpdateUserPoolDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Secure Sockets Layer (SSL) certificate for the custom domain for your user
 *
 * pool>
 *
 * You can use this operation to provide the Amazon Resource Name (ARN) of a new certificate to Amazon Cognito. You cannot
 * use it to change the domain for a user
 *
 * pool>
 *
 * A custom domain is used to host the Amazon Cognito hosted UI, which provides sign-up and sign-in pages for your
 * application. When you set up a custom domain, you provide a certificate that you manage with AWS Certificate Manager
 * (ACM). When necessary, you can use this operation to change the certificate that you applied to your custom
 *
 * domain>
 *
 * Usually, this is unnecessary following routine certificate renewal with ACM. When you renew your existing certificate in
 * ACM, the ARN for your certificate remains the same, and your custom domain uses the new certificate
 *
 * automatically>
 *
 * However, if you replace your existing certificate with a new one, ACM gives the new certificate a new ARN. To apply the
 * new certificate to your custom domain, you must provide this ARN to Amazon
 *
 * Cognito>
 *
 * When you add your new certificate in ACM, you must choose US East (N. Virginia) as the AWS
 *
 * Region>
 *
 * After you submit your request, Amazon Cognito requires up to 1 hour to distribute your new certificate to your custom
 *
 * domain>
 *
 * For more information about adding a custom domain to your user pool, see <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using Your
 * Own Domain for the Hosted
 */
UpdateUserPoolDomainResponse * CognitoIdentityProviderClient::updateUserPoolDomain(const UpdateUserPoolDomainRequest &request)
{
    return qobject_cast<UpdateUserPoolDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * VerifySoftwareTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this API to register a user's entered TOTP code and mark the user's software token MFA status as "verified" if
 * successful. The request takes an access token or a session string, but not
 */
VerifySoftwareTokenResponse * CognitoIdentityProviderClient::verifySoftwareToken(const VerifySoftwareTokenRequest &request)
{
    return qobject_cast<VerifySoftwareTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityProviderClient service, and returns a pointer to an
 * VerifyUserAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Verifies the specified user attributes in the user
 */
VerifyUserAttributeResponse * CognitoIdentityProviderClient::verifyUserAttribute(const VerifyUserAttributeRequest &request)
{
    return qobject_cast<VerifyUserAttributeResponse *>(send(request));
}

/*!
 * \class QtAws::CognitoIdentityProvider::CognitoIdentityProviderClientPrivate
 * \brief The CognitoIdentityProviderClientPrivate class provides private implementation for CognitoIdentityProviderClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CognitoIdentityProviderClientPrivate object with public implementation \a q.
 */
CognitoIdentityProviderClientPrivate::CognitoIdentityProviderClientPrivate(CognitoIdentityProviderClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
