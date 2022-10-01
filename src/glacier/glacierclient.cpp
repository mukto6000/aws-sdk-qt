// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "glacierclient.h"
#include "glacierclient_p.h"

#include "core/awssignaturev4.h"
#include "abortmultipartuploadrequest.h"
#include "abortmultipartuploadresponse.h"
#include "abortvaultlockrequest.h"
#include "abortvaultlockresponse.h"
#include "addtagstovaultrequest.h"
#include "addtagstovaultresponse.h"
#include "completemultipartuploadrequest.h"
#include "completemultipartuploadresponse.h"
#include "completevaultlockrequest.h"
#include "completevaultlockresponse.h"
#include "createvaultrequest.h"
#include "createvaultresponse.h"
#include "deletearchiverequest.h"
#include "deletearchiveresponse.h"
#include "deletevaultrequest.h"
#include "deletevaultresponse.h"
#include "deletevaultaccesspolicyrequest.h"
#include "deletevaultaccesspolicyresponse.h"
#include "deletevaultnotificationsrequest.h"
#include "deletevaultnotificationsresponse.h"
#include "describejobrequest.h"
#include "describejobresponse.h"
#include "describevaultrequest.h"
#include "describevaultresponse.h"
#include "getdataretrievalpolicyrequest.h"
#include "getdataretrievalpolicyresponse.h"
#include "getjoboutputrequest.h"
#include "getjoboutputresponse.h"
#include "getvaultaccesspolicyrequest.h"
#include "getvaultaccesspolicyresponse.h"
#include "getvaultlockrequest.h"
#include "getvaultlockresponse.h"
#include "getvaultnotificationsrequest.h"
#include "getvaultnotificationsresponse.h"
#include "initiatejobrequest.h"
#include "initiatejobresponse.h"
#include "initiatemultipartuploadrequest.h"
#include "initiatemultipartuploadresponse.h"
#include "initiatevaultlockrequest.h"
#include "initiatevaultlockresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listmultipartuploadsrequest.h"
#include "listmultipartuploadsresponse.h"
#include "listpartsrequest.h"
#include "listpartsresponse.h"
#include "listprovisionedcapacityrequest.h"
#include "listprovisionedcapacityresponse.h"
#include "listtagsforvaultrequest.h"
#include "listtagsforvaultresponse.h"
#include "listvaultsrequest.h"
#include "listvaultsresponse.h"
#include "purchaseprovisionedcapacityrequest.h"
#include "purchaseprovisionedcapacityresponse.h"
#include "removetagsfromvaultrequest.h"
#include "removetagsfromvaultresponse.h"
#include "setdataretrievalpolicyrequest.h"
#include "setdataretrievalpolicyresponse.h"
#include "setvaultaccesspolicyrequest.h"
#include "setvaultaccesspolicyresponse.h"
#include "setvaultnotificationsrequest.h"
#include "setvaultnotificationsresponse.h"
#include "uploadarchiverequest.h"
#include "uploadarchiveresponse.h"
#include "uploadmultipartpartrequest.h"
#include "uploadmultipartpartresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Glacier
 * \brief Contains classess for accessing Amazon Glacier.
 *
 * \inmodule QtAwsGlacier
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::GlacierClient
 * \brief The GlacierClient class provides access to the Amazon Glacier service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlacier
 *
 *  Amazon S3 Glacier (Glacier) is a storage solution for "cold
 * 
 *  data.>
 * 
 *  Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data backup
 *  and archival. With Glacier, customers can store their data cost effectively for months, years, or decades. Glacier also
 *  enables customers to offload the administrative burdens of operating and scaling storage to AWS, so they don't have to
 *  worry about capacity planning, hardware provisioning, data replication, hardware failure and recovery, or time-consuming
 *  hardware
 * 
 *  migrations>
 * 
 *  Glacier is a great storage choice when low storage cost is paramount and your data is rarely retrieved. If your
 *  application requires fast or frequent access to your data, consider using Amazon S3. For more information, see <a
 *  href="http://aws.amazon.com/s3/">Amazon Simple Storage Service (Amazon
 * 
 *  S3)</a>>
 * 
 *  You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 * 
 *  Glacier>
 * 
 *  If you are a first-time user of Glacier, we recommend that you begin by reading the following sections in the <i>Amazon
 *  S3 Glacier Developer
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon S3 Glacier</a> - This
 *  section of the Developer Guide describes the underlying data model, the operations it supports, and the AWS SDKs that
 *  you can use to interact with the
 * 
 *  service> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 *  Amazon S3 Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading
 *  archives, creating jobs to download archives, retrieving the job output, and deleting
 */

/*!
 * \brief Constructs a GlacierClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GlacierClient::GlacierClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlacierClientPrivate(this), parent)
{
    Q_D(GlacierClient);
    d->apiVersion = QStringLiteral("2012-06-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("glacier");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Glacier");
    d->serviceName = QStringLiteral("glacier");
}

/*!
 * \overload GlacierClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GlacierClient::GlacierClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlacierClientPrivate(this), parent)
{
    Q_D(GlacierClient);
    d->apiVersion = QStringLiteral("2012-06-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("glacier");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Glacier");
    d->serviceName = QStringLiteral("glacier");
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * AbortMultipartUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation aborts a multipart upload identified by the upload
 *
 * ID>
 *
 * After the Abort Multipart Upload request succeeds, you cannot upload any more parts to the multipart upload or complete
 * the multipart upload. Aborting a completed upload fails. However, aborting an already-aborted upload will succeed, for a
 * short time. For more information about uploading a part and completing a multipart upload, see
 * <a>UploadMultipartPart</a> and
 *
 * <a>CompleteMultipartUpload</a>>
 *
 * This operation is
 *
 * idempotent>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working with Archives in Amazon
 * S3 Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-abort-upload.html">Abort
 * Multipart Upload</a> in the <i>Amazon Glacier Developer Guide</i>.
 */
AbortMultipartUploadResponse * GlacierClient::abortMultipartUpload(const AbortMultipartUploadRequest &request)
{
    return qobject_cast<AbortMultipartUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * AbortVaultLockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation aborts the vault locking process if the vault lock is not in the <code>Locked</code> state. If the vault
 * lock is in the <code>Locked</code> state when this operation is requested, the operation returns an
 * <code>AccessDeniedException</code> error. Aborting the vault locking process removes the vault lock policy from the
 * specified vault.
 *
 * </p
 *
 * A vault lock is put into the <code>InProgress</code> state by calling <a>InitiateVaultLock</a>. A vault lock is put into
 * the <code>Locked</code> state by calling <a>CompleteVaultLock</a>. You can get the state of a vault lock by calling
 * <a>GetVaultLock</a>. For more information about the vault locking process, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon Glacier Vault Lock</a>. For more
 * information about vault lock policies, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock-policy.html">Amazon Glacier Access Control with
 * Vault Lock Policies</a>.
 *
 * </p
 *
 * This operation is idempotent. You can successfully invoke this operation multiple times, if the vault lock is in the
 * <code>InProgress</code> state or if there is no policy associated with the
 */
AbortVaultLockResponse * GlacierClient::abortVaultLock(const AbortVaultLockRequest &request)
{
    return qobject_cast<AbortVaultLockResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * AddTagsToVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation adds the specified tags to a vault. Each tag is composed of a key and a value. Each vault can have up to
 * 10 tags. If your request would cause the tag limit for the vault to be exceeded, the operation throws the
 * <code>LimitExceededException</code> error. If a tag already exists on the vault under a specified key, the existing key
 * value will be overwritten. For more information about tags, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/tagging.html">Tagging Amazon S3 Glacier Resources</a>.
 */
AddTagsToVaultResponse * GlacierClient::addTagsToVault(const AddTagsToVaultRequest &request)
{
    return qobject_cast<AddTagsToVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * CompleteMultipartUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You call this operation to inform Amazon S3 Glacier (Glacier) that all the archive parts have been uploaded and that
 * Glacier can now assemble the archive from the uploaded parts. After assembling and saving the archive to the vault,
 * Glacier returns the URI path of the newly created archive resource. Using the URI path, you can then access the archive.
 * After you upload an archive, you should save the archive ID returned to retrieve the archive at a later point. You can
 * also get the vault inventory to obtain a list of archive IDs in a vault. For more information, see
 *
 * <a>InitiateJob</a>>
 *
 * In the request, you must include the computed SHA256 tree hash of the entire archive you have uploaded. For information
 * about computing a SHA256 tree hash, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html">Computing Checksums</a>. On the
 * server side, Glacier also constructs the SHA256 tree hash of the assembled archive. If the values match, Glacier saves
 * the archive to the vault; otherwise, it returns an error, and the operation fails. The <a>ListParts</a> operation
 * returns a list of parts uploaded for a specific multipart upload. It includes checksum information for each uploaded
 * part that can be used to debug a bad checksum
 *
 * issue>
 *
 * Additionally, Glacier also checks for any missing content ranges when assembling the archive, if missing content ranges
 * are found, Glacier returns an error and the operation
 *
 * fails>
 *
 * Complete Multipart Upload is an idempotent operation. After your first successful complete multipart upload, if you call
 * the operation again within a short period, the operation will succeed and return the same archive ID. This is useful in
 * the event you experience a network issue that causes an aborted connection or receive a 500 server error, in which case
 * you can repeat your Complete Multipart Upload request and get the same archive ID without creating duplicate archives.
 * Note, however, that after the multipart upload completes, you cannot call the List Parts operation and the multipart
 * upload will not appear in List Multipart Uploads response, even if idempotent complete is
 *
 * possible>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-archive-mpu.html">Uploading Large Archives in Parts
 * (Multipart Upload)</a> and <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-complete-upload.html">Complete Multipart
 * Upload</a> in the <i>Amazon Glacier Developer Guide</i>.
 */
CompleteMultipartUploadResponse * GlacierClient::completeMultipartUpload(const CompleteMultipartUploadRequest &request)
{
    return qobject_cast<CompleteMultipartUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * CompleteVaultLockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation completes the vault locking process by transitioning the vault lock from the <code>InProgress</code>
 * state to the <code>Locked</code> state, which causes the vault lock policy to become unchangeable. A vault lock is put
 * into the <code>InProgress</code> state by calling <a>InitiateVaultLock</a>. You can obtain the state of the vault lock
 * by calling <a>GetVaultLock</a>. For more information about the vault locking process, <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon Glacier Vault Lock</a>.
 *
 * </p
 *
 * This operation is idempotent. This request is always successful if the vault lock is in the <code>Locked</code> state
 * and the provided lock ID matches the lock ID originally used to lock the
 *
 * vault>
 *
 * If an invalid lock ID is passed in the request when the vault lock is in the <code>Locked</code> state, the operation
 * returns an <code>AccessDeniedException</code> error. If an invalid lock ID is passed in the request when the vault lock
 * is in the <code>InProgress</code> state, the operation throws an <code>InvalidParameter</code>
 */
CompleteVaultLockResponse * GlacierClient::completeVaultLock(const CompleteVaultLockRequest &request)
{
    return qobject_cast<CompleteVaultLockResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * CreateVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation creates a new vault with the specified name. The name of the vault must be unique within a region for an
 * AWS account. You can create up to 1,000 vaults per account. If you need to create more vaults, contact Amazon S3
 *
 * Glacier>
 *
 * You must use the following guidelines when naming a
 *
 * vault> <ul> <li>
 *
 * Names can be between 1 and 255 characters
 *
 * long> </li> <li>
 *
 * Allowed characters are a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), and '.'
 *
 * (period)> </li> </ul>
 *
 * This operation is
 *
 * idempotent>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/creating-vaults.html">Creating a Vault in Amazon Glacier</a>
 * and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-put.html">Create Vault </a> in the <i>Amazon
 * Glacier Developer Guide</i>.
 */
CreateVaultResponse * GlacierClient::createVault(const CreateVaultRequest &request)
{
    return qobject_cast<CreateVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * DeleteArchiveResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes an archive from a vault. Subsequent requests to initiate a retrieval of this archive will fail.
 * Archive retrievals that are in progress for this archive ID may or may not succeed according to the following
 *
 * scenarios> <ul> <li>
 *
 * If the archive retrieval job is actively preparing the data for download when Amazon S3 Glacier receives the delete
 * archive request, the archival retrieval operation might
 *
 * fail> </li> <li>
 *
 * If the archive retrieval job has successfully prepared the archive for download when Amazon S3 Glacier receives the
 * delete archive request, you will be able to download the
 *
 * output> </li> </ul>
 *
 * This operation is idempotent. Attempting to delete an already-deleted archive does not result in an
 *
 * error>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/deleting-an-archive.html">Deleting an Archive in Amazon
 * Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-delete.html">Delete
 * Archive</a> in the <i>Amazon Glacier Developer Guide</i>.
 */
DeleteArchiveResponse * GlacierClient::deleteArchive(const DeleteArchiveRequest &request)
{
    return qobject_cast<DeleteArchiveResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * DeleteVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes a vault. Amazon S3 Glacier will delete a vault only if there are no archives in the vault as of
 * the last inventory and there have been no writes to the vault since the last inventory. If either of these conditions is
 * not satisfied, the vault deletion fails (that is, the vault is not removed) and Amazon S3 Glacier returns an error. You
 * can use <a>DescribeVault</a> to return the number of archives in a vault, and you can use <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-initiate-job-post.html">Initiate a Job (POST jobs)</a> to
 * initiate a new inventory retrieval for a vault. The inventory contains the archive IDs you use to delete archives using
 * <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-delete.html">Delete Archive (DELETE
 *
 * archive)</a>>
 *
 * This operation is
 *
 * idempotent>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/deleting-vaults.html">Deleting a Vault in Amazon Glacier</a>
 * and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-delete.html">Delete Vault </a> in the
 * <i>Amazon S3 Glacier Developer Guide</i>.
 */
DeleteVaultResponse * GlacierClient::deleteVault(const DeleteVaultRequest &request)
{
    return qobject_cast<DeleteVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * DeleteVaultAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes the access policy associated with the specified vault. The operation is eventually consistent;
 * that is, it might take some time for Amazon S3 Glacier to completely remove the access policy, and you might still see
 * the effect of the policy for a short time after you send the delete
 *
 * request>
 *
 * This operation is idempotent. You can invoke delete multiple times, even if there is no policy associated with the
 * vault. For more information about vault access policies, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-access-policy.html">Amazon Glacier Access Control with
 * Vault Access Policies</a>.
 */
DeleteVaultAccessPolicyResponse * GlacierClient::deleteVaultAccessPolicy(const DeleteVaultAccessPolicyRequest &request)
{
    return qobject_cast<DeleteVaultAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * DeleteVaultNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes the notification configuration set for a vault. The operation is eventually consistent; that is,
 * it might take some time for Amazon S3 Glacier to completely disable the notifications and you might still receive some
 * notifications for a short time after you send the delete
 *
 * request>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring Vault
 * Notifications in Amazon S3 Glacier</a> and <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-notifications-delete.html">Delete Vault
 * Notification Configuration </a> in the Amazon S3 Glacier Developer Guide.
 */
DeleteVaultNotificationsResponse * GlacierClient::deleteVaultNotifications(const DeleteVaultNotificationsRequest &request)
{
    return qobject_cast<DeleteVaultNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * DescribeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about a job you previously initiated, including the job initiation date, the user who
 * initiated the job, the job status code/message and the Amazon SNS topic to notify after Amazon S3 Glacier (Glacier)
 * completes the job. For more information about initiating a job, see <a>InitiateJob</a>.
 *
 * </p <note>
 *
 * This operation enables you to check the status of your job. However, it is strongly recommended that you set up an
 * Amazon SNS topic and specify it in your initiate job request so that Glacier can notify the topic after it completes the
 *
 * job> </note>
 *
 * A job ID will not expire for at least 24 hours after Glacier completes the
 *
 * job>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For more information about using this operation, see the documentation for the underlying REST API <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-describe-job-get.html">Describe Job</a> in the <i>Amazon
 * Glacier Developer Guide</i>.
 */
DescribeJobResponse * GlacierClient::describeJob(const DescribeJobRequest &request)
{
    return qobject_cast<DescribeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * DescribeVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about a vault, including the vault's Amazon Resource Name (ARN), the date the vault
 * was created, the number of archives it contains, and the total size of all the archives in the vault. The number of
 * archives and their total size are as of the last inventory generation. This means that if you add or remove an archive
 * from a vault, and then immediately use Describe Vault, the change in contents will not be immediately reflected. If you
 * want to retrieve the latest inventory of the vault, use <a>InitiateJob</a>. Amazon S3 Glacier generates vault
 * inventories approximately daily. For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-inventory.html">Downloading a Vault Inventory in Amazon
 * S3 Glacier</a>.
 *
 * </p
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/retrieving-vault-info.html">Retrieving Vault Metadata in
 * Amazon S3 Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-get.html">Describe
 * Vault </a> in the <i>Amazon Glacier Developer Guide</i>.
 */
DescribeVaultResponse * GlacierClient::describeVault(const DescribeVaultRequest &request)
{
    return qobject_cast<DescribeVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * GetDataRetrievalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns the current data retrieval policy for the account and region specified in the GET request. For
 * more information about data retrieval policies, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/data-retrieval-policy.html">Amazon Glacier Data Retrieval
 */
GetDataRetrievalPolicyResponse * GlacierClient::getDataRetrievalPolicy(const GetDataRetrievalPolicyRequest &request)
{
    return qobject_cast<GetDataRetrievalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * GetJobOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation downloads the output of the job you initiated using <a>InitiateJob</a>. Depending on the job type you
 * specified when you initiated the job, the output will be either the content of an archive or a vault
 *
 * inventory>
 *
 * You can download all the job output or download a portion of the output by specifying a byte range. In the case of an
 * archive retrieval job, depending on the byte range you specify, Amazon S3 Glacier (Glacier) returns the checksum for the
 * portion of the data. You can compute the checksum on the client and verify that the values match to ensure the portion
 * you downloaded is the correct
 *
 * data>
 *
 * A job ID will not expire for at least 24 hours after Glacier completes the job. That a byte range. For both archive and
 * inventory retrieval jobs, you should verify the downloaded size against the size returned in the headers from the <b>Get
 * Job Output</b>
 *
 * response>
 *
 * For archive retrieval jobs, you should also verify that the size is what you expected. If you download a portion of the
 * output, the expected size is based on the range of bytes you specified. For example, if you specify a range of
 * <code>bytes=0-1048575</code>, you should verify your download size is 1,048,576 bytes. If you download an entire
 * archive, the expected size is the size of the archive when you uploaded it to Amazon S3 Glacier The expected size is
 * also returned in the headers from the <b>Get Job Output</b>
 *
 * response>
 *
 * In the case of an archive retrieval job, depending on the byte range you specify, Glacier returns the checksum for the
 * portion of the data. To ensure the portion you downloaded is the correct data, compute the checksum on the client,
 * verify that the values match, and verify that the size is what you
 *
 * expected>
 *
 * A job ID does not expire for at least 24 hours after Glacier completes the job. That is, you can download the job output
 * within the 24 hours period after Amazon Glacier completes the
 *
 * job>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and the underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-inventory.html">Downloading a Vault Inventory</a>, <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/downloading-an-archive.html">Downloading an Archive</a>, and
 * <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-job-output-get.html">Get Job Output </a>
 */
GetJobOutputResponse * GlacierClient::getJobOutput(const GetJobOutputRequest &request)
{
    return qobject_cast<GetJobOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * GetVaultAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation retrieves the <code>access-policy</code> subresource set on the vault; for more information on setting
 * this subresource, see <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-SetVaultAccessPolicy.html">Set
 * Vault Access Policy (PUT access-policy)</a>. If there is no access policy set on the vault, the operation returns a
 * <code>404 Not found</code> error. For more information about vault access policies, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-access-policy.html">Amazon Glacier Access Control with
 * Vault Access
 */
GetVaultAccessPolicyResponse * GlacierClient::getVaultAccessPolicy(const GetVaultAccessPolicyRequest &request)
{
    return qobject_cast<GetVaultAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * GetVaultLockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation retrieves the following attributes from the <code>lock-policy</code> subresource set on the specified
 * vault:
 *
 * </p <ul> <li>
 *
 * The vault lock policy set on the
 *
 * vault> </li> <li>
 *
 * The state of the vault lock, which is either <code>InProgess</code> or
 *
 * <code>Locked</code>> </li> <li>
 *
 * When the lock ID expires. The lock ID is used to complete the vault locking
 *
 * process> </li> <li>
 *
 * When the vault lock was initiated and put into the <code>InProgress</code>
 *
 * state> </li> </ul>
 *
 * A vault lock is put into the <code>InProgress</code> state by calling <a>InitiateVaultLock</a>. A vault lock is put into
 * the <code>Locked</code> state by calling <a>CompleteVaultLock</a>. You can abort the vault locking process by calling
 * <a>AbortVaultLock</a>. For more information about the vault locking process, <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon Glacier Vault Lock</a>.
 *
 * </p
 *
 * If there is no vault lock policy set on the vault, the operation returns a <code>404 Not found</code> error. For more
 * information about vault lock policies, <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock-policy.html">Amazon Glacier Access Control with
 * Vault Lock Policies</a>.
 */
GetVaultLockResponse * GlacierClient::getVaultLock(const GetVaultLockRequest &request)
{
    return qobject_cast<GetVaultLockResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * GetVaultNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation retrieves the <code>notification-configuration</code> subresource of the specified
 *
 * vault>
 *
 * For information about setting a notification configuration on a vault, see <a>SetVaultNotifications</a>. If a
 * notification configuration for a vault is not set, the operation returns a <code>404 Not Found</code> error. For more
 * information about vault notifications, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring Vault
 * Notifications in Amazon S3 Glacier</a>.
 *
 * </p
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring Vault
 * Notifications in Amazon S3 Glacier</a> and <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-notifications-get.html">Get Vault Notification
 * Configuration </a> in the <i>Amazon Glacier Developer Guide</i>.
 */
GetVaultNotificationsResponse * GlacierClient::getVaultNotifications(const GetVaultNotificationsRequest &request)
{
    return qobject_cast<GetVaultNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * InitiateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation initiates a job of the specified type, which can be a select, an archival retrieval, or a vault
 * retrieval. For more information about using this operation, see the documentation for the underlying REST API <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-initiate-job-post.html">Initiate a Job</a>.
 */
InitiateJobResponse * GlacierClient::initiateJob(const InitiateJobRequest &request)
{
    return qobject_cast<InitiateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * InitiateMultipartUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation initiates a multipart upload. Amazon S3 Glacier creates a multipart upload resource and returns its ID in
 * the response. The multipart upload ID is used in subsequent requests to upload parts of an archive (see
 *
 * <a>UploadMultipartPart</a>)>
 *
 * When you initiate a multipart upload, you specify the part size in number of bytes. The part size must be a megabyte
 * (1024 KB) multiplied by a power of 2-for example, 1048576 (1 MB), 2097152 (2 MB), 4194304 (4 MB), 8388608 (8 MB), and so
 * on. The minimum allowable part size is 1 MB, and the maximum is 4
 *
 * GB>
 *
 * Every part you upload to this resource (see <a>UploadMultipartPart</a>), except the last one, must have the same size.
 * The last one can be the same size or smaller. For example, suppose you want to upload a 16.2 MB file. If you initiate
 * the multipart upload with a part size of 4 MB, you will upload four parts of 4 MB each and one part of 0.2 MB.
 *
 * </p <note>
 *
 * You don't need to know the size of the archive when you start a multipart upload because Amazon S3 Glacier does not
 * require you to specify the overall archive
 *
 * size> </note>
 *
 * After you complete the multipart upload, Amazon S3 Glacier (Glacier) removes the multipart upload resource referenced by
 * the ID. Glacier also removes the multipart upload resource if you cancel the multipart upload or it may be removed if
 * there is no activity for a period of 24
 *
 * hours>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-archive-mpu.html">Uploading Large Archives in Parts
 * (Multipart Upload)</a> and <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-initiate-upload.html">Initiate Multipart
 * Upload</a> in the <i>Amazon Glacier Developer
 */
InitiateMultipartUploadResponse * GlacierClient::initiateMultipartUpload(const InitiateMultipartUploadRequest &request)
{
    return qobject_cast<InitiateMultipartUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * InitiateVaultLockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation initiates the vault locking process by doing the
 *
 * following> <ul> <li>
 *
 * Installing a vault lock policy on the specified
 *
 * vault> </li> <li>
 *
 * Setting the lock state of vault lock to
 *
 * <code>InProgress</code>> </li> <li>
 *
 * Returning a lock ID, which is used to complete the vault locking
 *
 * process> </li> </ul>
 *
 * You can set one vault lock policy for each vault and this policy can be up to 20 KB in size. For more information about
 * vault lock policies, see <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock-policy.html">Amazon
 * Glacier Access Control with Vault Lock Policies</a>.
 *
 * </p
 *
 * You must complete the vault locking process within 24 hours after the vault lock enters the <code>InProgress</code>
 * state. After the 24 hour window ends, the lock ID expires, the vault automatically exits the <code>InProgress</code>
 * state, and the vault lock policy is removed from the vault. You call <a>CompleteVaultLock</a> to complete the vault
 * locking process by setting the state of the vault lock to <code>Locked</code>.
 *
 * </p
 *
 * After a vault lock is in the <code>Locked</code> state, you cannot initiate a new vault lock for the
 *
 * vault>
 *
 * You can abort the vault locking process by calling <a>AbortVaultLock</a>. You can get the state of the vault lock by
 * calling <a>GetVaultLock</a>. For more information about the vault locking process, <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon Glacier Vault
 *
 * Lock</a>>
 *
 * If this operation is called when the vault lock is in the <code>InProgress</code> state, the operation returns an
 * <code>AccessDeniedException</code> error. When the vault lock is in the <code>InProgress</code> state you must call
 * <a>AbortVaultLock</a> before you can initiate a new vault lock policy.
 */
InitiateVaultLockResponse * GlacierClient::initiateVaultLock(const InitiateVaultLockRequest &request)
{
    return qobject_cast<InitiateVaultLockResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists jobs for a vault, including jobs that are in-progress and jobs that have recently finished. The
 * List Job operation returns a list of these jobs sorted by job initiation
 *
 * time> <note>
 *
 * Amazon Glacier retains recently completed jobs for a period before deleting them; however, it eventually removes
 * completed jobs. The output of completed jobs can be retrieved. Retaining completed jobs for a period of time after they
 * have completed enables you to get a job output in the event you miss the job completion notification or your first
 * attempt to download it fails. For example, suppose you start an archive retrieval job to download an archive. After the
 * job completes, you start to download the archive but encounter a network error. In this scenario, you can retry and
 * download the archive while the job
 *
 * exists> </note>
 *
 * The List Jobs operation supports pagination. You should always check the response <code>Marker</code> field. If there
 * are no more jobs to list, the <code>Marker</code> field is set to <code>null</code>. If there are more jobs to list, the
 * <code>Marker</code> field is set to a non-null value, which you can use to continue the pagination of the list. To
 * return a list of jobs that begins at a specific job, set the marker request parameter to the <code>Marker</code> value
 * for that job that you obtained from a previous List Jobs
 *
 * request>
 *
 * You can set a maximum limit for the number of jobs returned in the response by specifying the <code>limit</code>
 * parameter in the request. The default limit is 50. The number of jobs returned might be fewer than the limit, but the
 * number of returned jobs never exceeds the
 *
 * limit>
 *
 * Additionally, you can filter the jobs list returned by specifying the optional <code>statuscode</code> parameter or
 * <code>completed</code> parameter, or both. Using the <code>statuscode</code> parameter, you can specify to return only
 * jobs that match either the <code>InProgress</code>, <code>Succeeded</code>, or <code>Failed</code> status. Using the
 * <code>completed</code> parameter, you can specify to return only jobs that were completed (<code>true</code>) or jobs
 * that were not completed
 *
 * (<code>false</code>)>
 *
 * For more information about using this operation, see the documentation for the underlying REST API <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-jobs-get.html">List Jobs</a>.
 */
ListJobsResponse * GlacierClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * ListMultipartUploadsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists in-progress multipart uploads for the specified vault. An in-progress multipart upload is a
 * multipart upload that has been initiated by an <a>InitiateMultipartUpload</a> request, but has not yet been completed or
 * aborted. The list returned in the List Multipart Upload response has no guaranteed order.
 *
 * </p
 *
 * The List Multipart Uploads operation supports pagination. By default, this operation returns up to 50 multipart uploads
 * in the response. You should always check the response for a <code>marker</code> at which to continue the list; if there
 * are no more items the <code>marker</code> is <code>null</code>. To return a list of multipart uploads that begins at a
 * specific upload, set the <code>marker</code> request parameter to the value you obtained from a previous List Multipart
 * Upload request. You can also limit the number of uploads returned in the response by specifying the <code>limit</code>
 * parameter in the
 *
 * request>
 *
 * Note the difference between this operation and listing parts (<a>ListParts</a>). The List Multipart Uploads operation
 * lists all multipart uploads for a vault and does not require a multipart upload ID. The List Parts operation requires a
 * multipart upload ID since parts are associated with a single
 *
 * upload>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and the underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working with Archives in Amazon
 * S3 Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-list-uploads.html">List
 * Multipart Uploads </a> in the <i>Amazon Glacier Developer
 */
ListMultipartUploadsResponse * GlacierClient::listMultipartUploads(const ListMultipartUploadsRequest &request)
{
    return qobject_cast<ListMultipartUploadsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * ListPartsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists the parts of an archive that have been uploaded in a specific multipart upload. You can make this
 * request at any time during an in-progress multipart upload before you complete the upload (see
 * <a>CompleteMultipartUpload</a>. List Parts returns an error for completed uploads. The list returned in the List Parts
 * response is sorted by part range.
 *
 * </p
 *
 * The List Parts operation supports pagination. By default, this operation returns up to 50 uploaded parts in the
 * response. You should always check the response for a <code>marker</code> at which to continue the list; if there are no
 * more items the <code>marker</code> is <code>null</code>. To return a list of parts that begins at a specific part, set
 * the <code>marker</code> request parameter to the value you obtained from a previous List Parts request. You can also
 * limit the number of parts returned in the response by specifying the <code>limit</code> parameter in the request.
 *
 * </p
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and the underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working with Archives in Amazon
 * S3 Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-list-parts.html">List
 * Parts</a> in the <i>Amazon Glacier Developer
 */
ListPartsResponse * GlacierClient::listParts(const ListPartsRequest &request)
{
    return qobject_cast<ListPartsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * ListProvisionedCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists the provisioned capacity units for the specified AWS
 */
ListProvisionedCapacityResponse * GlacierClient::listProvisionedCapacity(const ListProvisionedCapacityRequest &request)
{
    return qobject_cast<ListProvisionedCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * ListTagsForVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists all the tags attached to a vault. The operation returns an empty map if there are no tags. For more
 * information about tags, see <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/tagging.html">Tagging Amazon
 * S3 Glacier
 */
ListTagsForVaultResponse * GlacierClient::listTagsForVault(const ListTagsForVaultRequest &request)
{
    return qobject_cast<ListTagsForVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * ListVaultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists all vaults owned by the calling user's account. The list returned in the response is ASCII-sorted
 * by vault
 *
 * name>
 *
 * By default, this operation returns up to 10 items. If there are more vaults to list, the response <code>marker</code>
 * field contains the vault Amazon Resource Name (ARN) at which to continue the list with a new List Vaults request;
 * otherwise, the <code>marker</code> field is <code>null</code>. To return a list of vaults that begins at a specific
 * vault, set the <code>marker</code> request parameter to the vault ARN you obtained from a previous List Vaults request.
 * You can also limit the number of vaults returned in the response by specifying the <code>limit</code> parameter in the
 * request.
 *
 * </p
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/retrieving-vault-info.html">Retrieving Vault Metadata in
 * Amazon S3 Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vaults-get.html">List Vaults
 * </a> in the <i>Amazon Glacier Developer Guide</i>.
 */
ListVaultsResponse * GlacierClient::listVaults(const ListVaultsRequest &request)
{
    return qobject_cast<ListVaultsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * PurchaseProvisionedCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation purchases a provisioned capacity unit for an AWS account.
 */
PurchaseProvisionedCapacityResponse * GlacierClient::purchaseProvisionedCapacity(const PurchaseProvisionedCapacityRequest &request)
{
    return qobject_cast<PurchaseProvisionedCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * RemoveTagsFromVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation removes one or more tags from the set of tags attached to a vault. For more information about tags, see
 * <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/tagging.html">Tagging Amazon S3 Glacier Resources</a>.
 * This operation is idempotent. The operation will be successful, even if there are no tags attached to the vault.
 */
RemoveTagsFromVaultResponse * GlacierClient::removeTagsFromVault(const RemoveTagsFromVaultRequest &request)
{
    return qobject_cast<RemoveTagsFromVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * SetDataRetrievalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation sets and then enacts a data retrieval policy in the region specified in the PUT request. You can set one
 * policy per region for an AWS account. The policy is enacted within a few minutes of a successful PUT
 *
 * operation>
 *
 * The set policy operation does not affect retrieval jobs that were in progress before the policy was enacted. For more
 * information about data retrieval policies, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/data-retrieval-policy.html">Amazon Glacier Data Retrieval
 * Policies</a>.
 */
SetDataRetrievalPolicyResponse * GlacierClient::setDataRetrievalPolicy(const SetDataRetrievalPolicyRequest &request)
{
    return qobject_cast<SetDataRetrievalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * SetVaultAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation configures an access policy for a vault and will overwrite an existing policy. To configure a vault
 * access policy, send a PUT request to the <code>access-policy</code> subresource of the vault. An access policy is
 * specific to a vault and is also called a vault subresource. You can set one access policy per vault and the policy can
 * be up to 20 KB in size. For more information about vault access policies, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-access-policy.html">Amazon Glacier Access Control with
 * Vault Access Policies</a>.
 */
SetVaultAccessPolicyResponse * GlacierClient::setVaultAccessPolicy(const SetVaultAccessPolicyRequest &request)
{
    return qobject_cast<SetVaultAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * SetVaultNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation configures notifications that will be sent when specific events happen to a vault. By default, you don't
 * get any
 *
 * notifications>
 *
 * To configure vault notifications, send a PUT request to the <code>notification-configuration</code> subresource of the
 * vault. The request should include a JSON document that provides an Amazon SNS topic and specific events for which you
 * want Amazon S3 Glacier to send notifications to the
 *
 * topic>
 *
 * Amazon SNS topics must grant permission to the vault to be allowed to publish notifications to the topic. You can
 * configure a vault to publish a notification for the following vault
 *
 * events> <ul> <li>
 *
 * <b>ArchiveRetrievalCompleted</b> This event occurs when a job that was initiated for an archive retrieval is completed
 * (<a>InitiateJob</a>). The status of the completed job can be "Succeeded" or "Failed". The notification sent to the SNS
 * topic is the same output as returned from <a>DescribeJob</a>.
 *
 * </p </li> <li>
 *
 * <b>InventoryRetrievalCompleted</b> This event occurs when a job that was initiated for an inventory retrieval is
 * completed (<a>InitiateJob</a>). The status of the completed job can be "Succeeded" or "Failed". The notification sent to
 * the SNS topic is the same output as returned from <a>DescribeJob</a>.
 *
 * </p </li> </ul>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring Vault
 * Notifications in Amazon S3 Glacier</a> and <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-notifications-put.html">Set Vault Notification
 * Configuration </a> in the <i>Amazon Glacier Developer Guide</i>.
 */
SetVaultNotificationsResponse * GlacierClient::setVaultNotifications(const SetVaultNotificationsRequest &request)
{
    return qobject_cast<SetVaultNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * UploadArchiveResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation adds an archive to a vault. This is a synchronous operation, and for a successful upload, your data is
 * durably persisted. Amazon S3 Glacier returns the archive ID in the <code>x-amz-archive-id</code> header of the response.
 *
 * </p
 *
 * You must use the archive ID to access your data in Amazon S3 Glacier. After you upload an archive, you should save the
 * archive ID returned so that you can retrieve or delete the archive later. Besides saving the archive ID, you can also
 * index it and give it a friendly name to allow for better searching. You can also use the optional archive description
 * field to specify how the archive is referred to in an external index of archives, such as you might create in Amazon
 * DynamoDB. You can also get the vault inventory to obtain a list of archive IDs in a vault. For more information, see
 * <a>InitiateJob</a>.
 *
 * </p
 *
 * You must provide a SHA256 tree hash of the data you are uploading. For information about computing a SHA256 tree hash,
 * see <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html">Computing Checksums</a>.
 *
 * </p
 *
 * You can optionally specify an archive description of up to 1,024 printable ASCII characters. You can get the archive
 * description when you either retrieve the archive or get the vault inventory. For more information, see
 * <a>InitiateJob</a>. Amazon Glacier does not interpret the description in any way. An archive description does not need
 * to be unique. You cannot use the description to retrieve or sort the archive list.
 *
 * </p
 *
 * Archives are immutable. After you upload an archive, you cannot edit the archive or its
 *
 * description>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-an-archive.html">Uploading an Archive in Amazon
 * Glacier</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-post.html">Upload Archive</a>
 * in the <i>Amazon Glacier Developer Guide</i>.
 */
UploadArchiveResponse * GlacierClient::uploadArchive(const UploadArchiveRequest &request)
{
    return qobject_cast<UploadArchiveResponse *>(send(request));
}

/*!
 * Sends \a request to the GlacierClient service, and returns a pointer to an
 * UploadMultipartPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation uploads a part of an archive. You can upload archive parts in any order. You can also upload them in
 * parallel. You can upload up to 10,000 parts for a multipart
 *
 * upload>
 *
 * Amazon Glacier rejects your upload part request if any of the following conditions is
 *
 * true> <ul> <li>
 *
 * <b>SHA256 tree hash does not match</b>To ensure that part data is not corrupted in transmission, you compute a SHA256
 * tree hash of the part and include it in your request. Upon receiving the part data, Amazon S3 Glacier also computes a
 * SHA256 tree hash. If these hash values don't match, the operation fails. For information about computing a SHA256 tree
 * hash, see <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html">Computing
 *
 * Checksums</a>> </li> <li>
 *
 * <b>Part size does not match</b>The size of each part except the last must match the size specified in the corresponding
 * <a>InitiateMultipartUpload</a> request. The size of the last part must be the same size as, or smaller than, the
 * specified
 *
 * size> <note>
 *
 * If you upload a part whose size is smaller than the part size you specified in your initiate multipart upload request
 * and that part is not the last part, then the upload part request will succeed. However, the subsequent Complete
 * Multipart Upload request will
 *
 * fail> </note> </li> <li>
 *
 * <b>Range does not align</b>The byte range value in the request does not align with the part size specified in the
 * corresponding initiate request. For example, if you specify a part size of 4194304 bytes (4 MB), then 0 to 4194303 bytes
 * (4 MB - 1) and 4194304 (4 MB) to 8388607 (8 MB - 1) are valid part ranges. However, if you set a range value of 2 MB to
 * 6 MB, the range does not align with the part size and the upload will fail.
 *
 * </p </li> </ul>
 *
 * This operation is idempotent. If you upload the same part multiple times, the data included in the most recent request
 * overwrites the previously uploaded
 *
 * data>
 *
 * An AWS account has full permission to perform all operations (actions). However, AWS Identity and Access Management
 * (IAM) users don't have any permissions by default. You must grant them explicit permission to perform specific actions.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access Control Using AWS
 * Identity and Access Management
 *
 * (IAM)</a>>
 *
 * For conceptual information and underlying REST API, see <a
 * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-archive-mpu.html">Uploading Large Archives in Parts
 * (Multipart Upload)</a> and <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-upload-part.html">Upload
 * Part </a> in the <i>Amazon Glacier Developer
 */
UploadMultipartPartResponse * GlacierClient::uploadMultipartPart(const UploadMultipartPartRequest &request)
{
    return qobject_cast<UploadMultipartPartResponse *>(send(request));
}

/*!
 * \class QtAws::Glacier::GlacierClientPrivate
 * \brief The GlacierClientPrivate class provides private implementation for GlacierClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a GlacierClientPrivate object with public implementation \a q.
 */
GlacierClientPrivate::GlacierClientPrivate(GlacierClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Glacier
} // namespace QtAws
