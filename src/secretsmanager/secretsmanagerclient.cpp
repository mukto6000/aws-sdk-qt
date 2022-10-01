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

#include "secretsmanagerclient.h"
#include "secretsmanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelrotatesecretrequest.h"
#include "cancelrotatesecretresponse.h"
#include "createsecretrequest.h"
#include "createsecretresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deletesecretrequest.h"
#include "deletesecretresponse.h"
#include "describesecretrequest.h"
#include "describesecretresponse.h"
#include "getrandompasswordrequest.h"
#include "getrandompasswordresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getsecretvaluerequest.h"
#include "getsecretvalueresponse.h"
#include "listsecretversionidsrequest.h"
#include "listsecretversionidsresponse.h"
#include "listsecretsrequest.h"
#include "listsecretsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putsecretvaluerequest.h"
#include "putsecretvalueresponse.h"
#include "removeregionsfromreplicationrequest.h"
#include "removeregionsfromreplicationresponse.h"
#include "replicatesecrettoregionsrequest.h"
#include "replicatesecrettoregionsresponse.h"
#include "restoresecretrequest.h"
#include "restoresecretresponse.h"
#include "rotatesecretrequest.h"
#include "rotatesecretresponse.h"
#include "stopreplicationtoreplicarequest.h"
#include "stopreplicationtoreplicaresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatesecretrequest.h"
#include "updatesecretresponse.h"
#include "updatesecretversionstagerequest.h"
#include "updatesecretversionstageresponse.h"
#include "validateresourcepolicyrequest.h"
#include "validateresourcepolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SecretsManager
 * \brief Contains classess for accessing AWS Secrets Manager.
 *
 * \inmodule QtAwsSecretsManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::SecretsManagerClient
 * \brief The SecretsManagerClient class provides access to the AWS Secrets Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecretsManager
 *
 *  <fullname>Amazon Web Services Secrets Manager</fullname>
 * 
 *  Amazon Web Services Secrets Manager provides a service to enable you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">Amazon Web Services Secrets Manager
 *  User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17>
 * 
 *  <b>Support and Feedback for Amazon Web Services Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">Amazon Web Services Secrets Manager
 *  Discussion Forum</a>. For more information about the Amazon Web Services Discussion Forums, see <a
 *  href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  Amazon Web Services Secrets Manager supports Amazon Web Services CloudTrail, a service that records Amazon Web Services
 *  API calls for your Amazon Web Services account and delivers log files to an Amazon S3 bucket. By using information
 *  that's collected by Amazon Web Services CloudTrail, you can determine the requests successfully made to Secrets Manager,
 *  who made the request, when it was made, and so on. For more about Amazon Web Services Secrets Manager and support for
 *  Amazon Web Services CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging Amazon
 *  Web Services Secrets Manager Events with Amazon Web Services CloudTrail</a> in the <i>Amazon Web Services Secrets
 *  Manager User Guide</i>. To learn more about CloudTrail, including enabling it and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">Amazon Web Services
 *  CloudTrail User
 */

/*!
 * \brief Constructs a SecretsManagerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SecretsManagerClient::SecretsManagerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecretsManagerClientPrivate(this), parent)
{
    Q_D(SecretsManagerClient);
    d->apiVersion = QStringLiteral("2017-10-17");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("secretsmanager");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Secrets Manager");
    d->serviceName = QStringLiteral("secretsmanager");
}

/*!
 * \overload SecretsManagerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SecretsManagerClient::SecretsManagerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecretsManagerClientPrivate(this), parent)
{
    Q_D(SecretsManagerClient);
    d->apiVersion = QStringLiteral("2017-10-17");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("secretsmanager");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Secrets Manager");
    d->serviceName = QStringLiteral("secretsmanager");
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * CancelRotateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Turns off automatic rotation, and if a rotation is currently in progress, cancels the
 *
 * rotation>
 *
 * If you cancel a rotation in progress, it can leave the <code>VersionStage</code> labels in an unexpected state. You
 * might need to remove the staging label <code>AWSPENDING</code> from the partially created version. You also need to
 * determine whether to roll back to the previous version of the secret by moving the staging label <code>AWSCURRENT</code>
 * to the version that has <code>AWSPENDING</code>. To determine which version has a specific staging label, call
 * <a>ListSecretVersionIds</a>. Then use <a>UpdateSecretVersionStage</a> to change staging labels. For more information,
 * see <a href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How rotation
 *
 * works</a>>
 *
 * To turn on automatic rotation again, call
 *
 * <a>RotateSecret</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:CancelRotateSecret</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
CancelRotateSecretResponse * SecretsManagerClient::cancelRotateSecret(const CancelRotateSecretRequest &request)
{
    return qobject_cast<CancelRotateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * CreateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new secret. A <i>secret</i> can be a password, a set of credentials such as a user name and password, an OAuth
 * token, or other secret information that you store in an encrypted form in Secrets Manager. The secret also includes the
 * connection information to access a database or other service, which Secrets Manager doesn't encrypt. A secret in Secrets
 * Manager consists of both the protected secret data and the important information needed to manage the
 *
 * secret>
 *
 * For information about creating a secret in the console, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/manage_create-basic-secret.html">Create a
 *
 * secret</a>>
 *
 * To create a secret, you can provide the secret value to be encrypted in either the <code>SecretString</code> parameter
 * or the <code>SecretBinary</code> parameter, but not both. If you include <code>SecretString</code> or
 * <code>SecretBinary</code> then Secrets Manager creates an initial secret version and automatically attaches the staging
 * label <code>AWSCURRENT</code> to
 *
 * it>
 *
 * For database credentials you want to rotate, for Secrets Manager to be able to rotate the secret, you must make sure the
 * JSON you store in the <code>SecretString</code> matches the <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_secret_json_structure.html">JSON structure
 * of a database
 *
 * secret</a>>
 *
 * If you don't specify an KMS encryption key, Secrets Manager uses the Amazon Web Services managed key
 * <code>aws/secretsmanager</code>. If this key doesn't already exist in your account, then Secrets Manager creates it for
 * you automatically. All users and roles in the Amazon Web Services account automatically have access to use
 * <code>aws/secretsmanager</code>. Creating <code>aws/secretsmanager</code> can result in a one-time significant delay in
 * returning the
 *
 * result>
 *
 * If the secret is in a different Amazon Web Services account from the credentials calling the API, then you can't use
 * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and use a customer managed KMS key.
 *
 * </p
 *
 * <b>Required permissions: </b> <code>secretsmanager:CreateSecret</code>. If you include tags in the secret, you also need
 * <code>secretsmanager:TagResource</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 *
 * </p
 *
 * To encrypt the secret with a KMS key other than <code>aws/secretsmanager</code>, you need
 * <code>kms:GenerateDataKey</code> and <code>kms:Decrypt</code> permission to the key.
 */
CreateSecretResponse * SecretsManagerClient::createSecret(const CreateSecretRequest &request)
{
    return qobject_cast<CreateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource-based permission policy attached to the secret. To attach a policy to a secret, use
 *
 * <a>PutResourcePolicy</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:DeleteResourcePolicy</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
DeleteResourcePolicyResponse * SecretsManagerClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * DeleteSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a secret and all of its versions. You can specify a recovery window during which you can restore the secret. The
 * minimum recovery window is 7 days. The default recovery window is 30 days. Secrets Manager attaches a
 * <code>DeletionDate</code> stamp to the secret that specifies the end of the recovery window. At the end of the recovery
 * window, Secrets Manager deletes the secret
 *
 * permanently>
 *
 * You can't delete a primary secret that is replicated to other Regions. You must first delete the replicas using
 * <a>RemoveRegionsFromReplication</a>, and then delete the primary secret. When you delete a replica, it is deleted
 *
 * immediately>
 *
 * You can't directly delete a version of a secret. Instead, you remove all staging labels from the version using
 * <a>UpdateSecretVersionStage</a>. This marks the version as deprecated, and then Secrets Manager can automatically delete
 * the version in the
 *
 * background>
 *
 * To determine whether an application still uses a secret, you can create an Amazon CloudWatch alarm to alert you to any
 * attempts to access a secret during the recovery window. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring_cloudwatch_deleted-secrets.html"> Monitor
 * secrets scheduled for
 *
 * deletion</a>>
 *
 * Secrets Manager performs the permanent secret deletion at the end of the waiting period as a background task with low
 * priority. There is no guarantee of a specific time after the recovery window for the permanent delete to
 *
 * occur>
 *
 * At any time before recovery window ends, you can use <a>RestoreSecret</a> to remove the <code>DeletionDate</code> and
 * cancel the deletion of the
 *
 * secret>
 *
 * When a secret is scheduled for deletion, you cannot retrieve the secret value. You must first cancel the deletion with
 * <a>RestoreSecret</a> and then you can retrieve the
 *
 * secret>
 *
 * <b>Required permissions: </b> <code>secretsmanager:DeleteSecret</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
DeleteSecretResponse * SecretsManagerClient::deleteSecret(const DeleteSecretRequest &request)
{
    return qobject_cast<DeleteSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * DescribeSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of a secret. It does not include the encrypted secret value. Secrets Manager only returns fields
 * that have a value in the response.
 *
 * </p
 *
 * <b>Required permissions: </b> <code>secretsmanager:DescribeSecret</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
DescribeSecretResponse * SecretsManagerClient::describeSecret(const DescribeSecretRequest &request)
{
    return qobject_cast<DescribeSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * GetRandomPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a random password. We recommend that you specify the maximum length and include every character type that the
 * system you are generating a password for can
 *
 * support>
 *
 * <b>Required permissions: </b> <code>secretsmanager:GetRandomPassword</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
GetRandomPasswordResponse * SecretsManagerClient::getRandomPassword(const GetRandomPasswordRequest &request)
{
    return qobject_cast<GetRandomPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the JSON text of the resource-based policy document attached to the secret. For more information about
 * permissions policies attached to a secret, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-policies.html">Permissions
 * policies attached to a
 *
 * secret</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:GetResourcePolicy</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
GetResourcePolicyResponse * SecretsManagerClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * GetSecretValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the contents of the encrypted fields <code>SecretString</code> or <code>SecretBinary</code> from the specified
 * version of a secret, whichever contains
 *
 * content>
 *
 * We recommend that you cache your secret values by using client-side caching. Caching secrets improves speed and reduces
 * your costs. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieving-secrets.html">Cache secrets for your
 *
 * applications</a>>
 *
 * To retrieve the previous version of a secret, use <code>VersionStage</code> and specify AWSPREVIOUS. To revert to the
 * previous version of a secret, call <a
 *
 * href="https://docs.aws.amazon.com/cli/latest/reference/secretsmanager/update-secret-version-stage.html">UpdateSecretVersionStage</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:GetSecretValue</code>. If the secret is encrypted using a
 * customer-managed key instead of the Amazon Web Services managed key <code>aws/secretsmanager</code>, then you also need
 * <code>kms:Decrypt</code> permissions for that key. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
GetSecretValueResponse * SecretsManagerClient::getSecretValue(const GetSecretValueRequest &request)
{
    return qobject_cast<GetSecretValueResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ListSecretVersionIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of a secret. Secrets Manager uses staging labels to indicate the different versions of a secret. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/getting-started.html#term_version"> Secrets Manager
 * concepts:
 *
 * Versions</a>>
 *
 * To list the secrets in the account, use
 *
 * <a>ListSecrets</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:ListSecretVersionIds</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
ListSecretVersionIdsResponse * SecretsManagerClient::listSecretVersionIds(const ListSecretVersionIdsRequest &request)
{
    return qobject_cast<ListSecretVersionIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ListSecretsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the secrets that are stored by Secrets Manager in the Amazon Web Services account, not including secrets that are
 * marked for deletion. To see secrets marked for deletion, use the Secrets Manager
 *
 * console>
 *
 * ListSecrets is eventually consistent, however it might not reflect changes from the last five minutes. To get the latest
 * information for a specific secret, use
 *
 * <a>DescribeSecret</a>>
 *
 * To list the versions of a secret, use
 *
 * <a>ListSecretVersionIds</a>>
 *
 * To get the secret value from <code>SecretString</code> or <code>SecretBinary</code>, call
 *
 * <a>GetSecretValue</a>>
 *
 * For information about finding secrets in the console, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/manage_search-secret.html">Find secrets in Secrets
 *
 * Manager</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:ListSecrets</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
ListSecretsResponse * SecretsManagerClient::listSecrets(const ListSecretsRequest &request)
{
    return qobject_cast<ListSecretsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a resource-based permission policy to a secret. A resource-based policy is optional. For more information, see
 * <a href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control for Secrets Manager</a>
 *
 * </p
 *
 * For information about attaching a policy in the console, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-based-policies.html">Attach a
 * permissions policy to a
 *
 * secret</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:PutResourcePolicy</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
PutResourcePolicyResponse * SecretsManagerClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * PutSecretValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version with a new encrypted secret value and attaches it to the secret. The version can contain a new
 * <code>SecretString</code> value or a new <code>SecretBinary</code> value.
 *
 * </p
 *
 * We recommend you avoid calling <code>PutSecretValue</code> at a sustained rate of more than once every 10 minutes. When
 * you update the secret value, Secrets Manager creates a new version of the secret. Secrets Manager removes outdated
 * versions when there are more than 100, but it does not remove versions created less than 24 hours ago. If you call
 * <code>PutSecretValue</code> more than once every 10 minutes, you create more versions than Secrets Manager removes, and
 * you will reach the quota for secret
 *
 * versions>
 *
 * You can specify the staging labels to attach to the new version in <code>VersionStages</code>. If you don't include
 * <code>VersionStages</code>, then Secrets Manager automatically moves the staging label <code>AWSCURRENT</code> to this
 * version. If this operation creates the first version for the secret, then Secrets Manager automatically attaches the
 * staging label <code>AWSCURRENT</code> to it
 *
 * >
 *
 * If this operation moves the staging label <code>AWSCURRENT</code> from another version to this version, then Secrets
 * Manager also automatically moves the staging label <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code>
 * was removed
 *
 * from>
 *
 * This operation is idempotent. If you call this operation with a <code>ClientRequestToken</code> that matches an existing
 * version's VersionId, and you specify the same secret data, the operation succeeds but does nothing. However, if the
 * secret data is different, then the operation fails because you can't modify an existing version; you can only create new
 *
 * ones>
 *
 * <b>Required permissions: </b> <code>secretsmanager:PutSecretValue</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
PutSecretValueResponse * SecretsManagerClient::putSecretValue(const PutSecretValueRequest &request)
{
    return qobject_cast<PutSecretValueResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * RemoveRegionsFromReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a secret that is replicated to other Regions, deletes the secret replicas from the Regions you
 *
 * specify>
 *
 * <b>Required permissions: </b> <code>secretsmanager:RemoveRegionsFromReplication</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
RemoveRegionsFromReplicationResponse * SecretsManagerClient::removeRegionsFromReplication(const RemoveRegionsFromReplicationRequest &request)
{
    return qobject_cast<RemoveRegionsFromReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ReplicateSecretToRegionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replicates the secret to a new Regions. See <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/create-manage-multi-region-secrets.html">Multi-Region
 *
 * secrets</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:ReplicateSecretToRegions</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
ReplicateSecretToRegionsResponse * SecretsManagerClient::replicateSecretToRegions(const ReplicateSecretToRegionsRequest &request)
{
    return qobject_cast<ReplicateSecretToRegionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * RestoreSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the scheduled deletion of a secret by removing the <code>DeletedDate</code> time stamp. You can access a secret
 * again after it has been
 *
 * restored>
 *
 * <b>Required permissions: </b> <code>secretsmanager:RestoreSecret</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
RestoreSecretResponse * SecretsManagerClient::restoreSecret(const RestoreSecretRequest &request)
{
    return qobject_cast<RestoreSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * RotateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures and starts the asynchronous process of rotating the secret. For more information about rotation, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">Rotate
 *
 * secrets</a>>
 *
 * If you include the configuration parameters, the operation sets the values for the secret and then immediately starts a
 * rotation. If you don't include the configuration parameters, the operation starts a rotation with the values already
 * stored in the secret.
 *
 * </p
 *
 * For database credentials you want to rotate, for Secrets Manager to be able to rotate the secret, you must make sure the
 * secret value is in the <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_secret_json_structure.html"> JSON structure
 * of a database secret</a>. In particular, if you want to use the <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets_strategies.html#rotating-secrets-two-users">
 * alternating users strategy</a>, your secret must contain the ARN of a superuser
 *
 * secret>
 *
 * To configure rotation, you also need the ARN of an Amazon Web Services Lambda function and the schedule for the
 * rotation. The Lambda rotation function creates a new version of the secret and creates or updates the credentials on the
 * database or service to match. After testing the new credentials, the function marks the new secret version with the
 * staging label <code>AWSCURRENT</code>. Then anyone who retrieves the secret gets the new version. For more information,
 * see <a href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How rotation
 *
 * works</a>>
 *
 * You can create the Lambda rotation function based on the <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_available-rotation-templates.html">rotation
 * function templates</a> that Secrets Manager provides. Choose a template that matches your <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets_strategies.html">Rotation
 *
 * strategy</a>>
 *
 * When rotation is successful, the <code>AWSPENDING</code> staging label might be attached to the same version as the
 * <code>AWSCURRENT</code> version, or it might not be attached to any version. If the <code>AWSPENDING</code> staging
 * label is present but not attached to the same version as <code>AWSCURRENT</code>, then any later invocation of
 * <code>RotateSecret</code> assumes that a previous rotation request is still in progress and returns an
 *
 * error>
 *
 * <b>Required permissions: </b> <code>secretsmanager:RotateSecret</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>. You also need <code>lambda:InvokeFunction</code> permissions on the rotation function.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets-required-permissions-function.html">
 * Permissions for
 */
RotateSecretResponse * SecretsManagerClient::rotateSecret(const RotateSecretRequest &request)
{
    return qobject_cast<RotateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * StopReplicationToReplicaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the link between the replica secret and the primary secret and promotes the replica to a primary secret in the
 * replica
 *
 * Region>
 *
 * You must call this operation from the Region in which you want to promote the replica to a primary
 *
 * secret>
 *
 * <b>Required permissions: </b> <code>secretsmanager:StopReplicationToReplica</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
StopReplicationToReplicaResponse * SecretsManagerClient::stopReplicationToReplica(const StopReplicationToReplicaRequest &request)
{
    return qobject_cast<StopReplicationToReplicaResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches tags to a secret. Tags consist of a key name and a value. Tags are part of the secret's metadata. They are not
 * associated with specific versions of the secret. This operation appends tags to the existing list of
 *
 * tags>
 *
 * The following restrictions apply to
 *
 * tags> <ul> <li>
 *
 * Maximum number of tags per secret:
 *
 * 5> </li> <li>
 *
 * Maximum key length: 127 Unicode characters in
 *
 * UTF-> </li> <li>
 *
 * Maximum value length: 255 Unicode characters in
 *
 * UTF-> </li> <li>
 *
 * Tag keys and values are case
 *
 * sensitive> </li> <li>
 *
 * Do not use the <code>aws:</code> prefix in your tag names or values because Amazon Web Services reserves it for Amazon
 * Web Services use. You can't edit or delete tag names or values with this prefix. Tags with this prefix do not count
 * against your tags per secret
 *
 * limit> </li> <li>
 *
 * If you use your tagging schema across multiple services and resources, other services might have restrictions on allowed
 * characters. Generally allowed characters: letters, spaces, and numbers representable in UTF-8, plus the following
 * special characters: + - = . _ : /
 *
 * @> </li> </ul> <b>
 *
 * If you use tags as part of your security strategy, then adding or removing a tag can change permissions. If successfully
 * completing this operation would result in you losing your permissions for this secret, then the operation is blocked and
 * returns an Access Denied
 *
 * error> </b>
 *
 * <b>Required permissions: </b> <code>secretsmanager:TagResource</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
TagResourceResponse * SecretsManagerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes specific tags from a
 *
 * secret>
 *
 * This operation is idempotent. If a requested tag is not attached to the secret, no error is returned and the secret
 * metadata is
 *
 * unchanged> <b>
 *
 * If you use tags as part of your security strategy, then removing a tag can change permissions. If successfully
 * completing this operation would result in you losing your permissions for this secret, then the operation is blocked and
 * returns an Access Denied
 *
 * error> </b>
 *
 * <b>Required permissions: </b> <code>secretsmanager:UntagResource</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
UntagResourceResponse * SecretsManagerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * UpdateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the details of a secret, including metadata and the secret value. To change the secret value, you can also use
 *
 * <a>PutSecretValue</a>>
 *
 * To change the rotation configuration of a secret, use <a>RotateSecret</a>
 *
 * instead>
 *
 * We recommend you avoid calling <code>UpdateSecret</code> at a sustained rate of more than once every 10 minutes. When
 * you call <code>UpdateSecret</code> to update the secret value, Secrets Manager creates a new version of the secret.
 * Secrets Manager removes outdated versions when there are more than 100, but it does not remove versions created less
 * than 24 hours ago. If you update the secret value more than once every 10 minutes, you create more versions than Secrets
 * Manager removes, and you will reach the quota for secret
 *
 * versions>
 *
 * If you include <code>SecretString</code> or <code>SecretBinary</code> to create a new secret version, Secrets Manager
 * automatically attaches the staging label <code>AWSCURRENT</code> to the new version.
 *
 * </p
 *
 * If you call this operation with a <code>ClientRequestToken</code> that matches an existing version's
 * <code>VersionId</code>, the operation results in an error. You can't modify an existing version, you can only create a
 * new version. To remove a version, remove all staging labels from it. See
 *
 * <a>UpdateSecretVersionStage</a>>
 *
 * <b>Required permissions: </b> <code>secretsmanager:UpdateSecret</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>. If you use a customer managed key, you must also have <code>kms:GenerateDataKey</code>
 * and <code>kms:Decrypt</code> permissions on the key. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/security-encryption.html"> Secret encryption and
 */
UpdateSecretResponse * SecretsManagerClient::updateSecret(const UpdateSecretRequest &request)
{
    return qobject_cast<UpdateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * UpdateSecretVersionStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the staging labels attached to a version of a secret. Secrets Manager uses staging labels to track a version as
 * it progresses through the secret rotation process. Each staging label can be attached to only one version at a time. To
 * add a staging label to a version when it is already attached to another version, Secrets Manager first removes it from
 * the other version first and then attaches it to this one. For more information about versions and staging labels, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/getting-started.html#term_version">Concepts:
 * Version</a>.
 *
 * </p
 *
 * The staging labels that you specify in the <code>VersionStage</code> parameter are added to the existing list of staging
 * labels for the version.
 *
 * </p
 *
 * You can move the <code>AWSCURRENT</code> staging label to this version by including it in this
 *
 * call> <note>
 *
 * Whenever you move <code>AWSCURRENT</code>, Secrets Manager automatically moves the label <code>AWSPREVIOUS</code> to the
 * version that <code>AWSCURRENT</code> was removed
 *
 * from> </note>
 *
 * If this action results in the last label being removed from a version, then the version is considered to be 'deprecated'
 * and can be deleted by Secrets
 *
 * Manager>
 *
 * <b>Required permissions: </b> <code>secretsmanager:UpdateSecretVersionStage</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
UpdateSecretVersionStageResponse * SecretsManagerClient::updateSecretVersionStage(const UpdateSecretVersionStageRequest &request)
{
    return qobject_cast<UpdateSecretVersionStageResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ValidateResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates that a resource policy does not grant a wide range of principals access to your secret. A resource-based
 * policy is optional for
 *
 * secrets>
 *
 * The API performs three checks when validating the
 *
 * policy> <ul> <li>
 *
 * Sends a call to <a
 * href="https://aws.amazon.com/blogs/security/protect-sensitive-data-in-the-cloud-with-automated-reasoning-zelkova/">Zelkova</a>,
 * an automated reasoning engine, to ensure your resource policy does not allow broad access to your secret, for example
 * policies that use a wildcard for the
 *
 * principal> </li> <li>
 *
 * Checks for correct syntax in a
 *
 * policy> </li> <li>
 *
 * Verifies the policy does not lock out a
 *
 * caller> </li> </ul>
 *
 * <b>Required permissions: </b> <code>secretsmanager:ValidateResourcePolicy</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
 * IAM policy actions for Secrets Manager</a> and <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication and access
 * control in Secrets Manager</a>.
 */
ValidateResourcePolicyResponse * SecretsManagerClient::validateResourcePolicy(const ValidateResourcePolicyRequest &request)
{
    return qobject_cast<ValidateResourcePolicyResponse *>(send(request));
}

/*!
 * \class QtAws::SecretsManager::SecretsManagerClientPrivate
 * \brief The SecretsManagerClientPrivate class provides private implementation for SecretsManagerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a SecretsManagerClientPrivate object with public implementation \a q.
 */
SecretsManagerClientPrivate::SecretsManagerClientPrivate(SecretsManagerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SecretsManager
} // namespace QtAws
