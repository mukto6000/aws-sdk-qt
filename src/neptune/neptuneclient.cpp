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

#include "neptuneclient.h"
#include "neptuneclient_p.h"

#include "core/awssignaturev4.h"
#include "addroletodbclusterrequest.h"
#include "addroletodbclusterresponse.h"
#include "addsourceidentifiertosubscriptionrequest.h"
#include "addsourceidentifiertosubscriptionresponse.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionresponse.h"
#include "copydbclusterparametergrouprequest.h"
#include "copydbclusterparametergroupresponse.h"
#include "copydbclustersnapshotrequest.h"
#include "copydbclustersnapshotresponse.h"
#include "copydbparametergrouprequest.h"
#include "copydbparametergroupresponse.h"
#include "createdbclusterrequest.h"
#include "createdbclusterresponse.h"
#include "createdbclusterendpointrequest.h"
#include "createdbclusterendpointresponse.h"
#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergroupresponse.h"
#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotresponse.h"
#include "createdbinstancerequest.h"
#include "createdbinstanceresponse.h"
#include "createdbparametergrouprequest.h"
#include "createdbparametergroupresponse.h"
#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgroupresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "createglobalclusterrequest.h"
#include "createglobalclusterresponse.h"
#include "deletedbclusterrequest.h"
#include "deletedbclusterresponse.h"
#include "deletedbclusterendpointrequest.h"
#include "deletedbclusterendpointresponse.h"
#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclustersnapshotrequest.h"
#include "deletedbclustersnapshotresponse.h"
#include "deletedbinstancerequest.h"
#include "deletedbinstanceresponse.h"
#include "deletedbparametergrouprequest.h"
#include "deletedbparametergroupresponse.h"
#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgroupresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
#include "deleteglobalclusterrequest.h"
#include "deleteglobalclusterresponse.h"
#include "describedbclusterendpointsrequest.h"
#include "describedbclusterendpointsresponse.h"
#include "describedbclusterparametergroupsrequest.h"
#include "describedbclusterparametergroupsresponse.h"
#include "describedbclusterparametersrequest.h"
#include "describedbclusterparametersresponse.h"
#include "describedbclustersnapshotattributesrequest.h"
#include "describedbclustersnapshotattributesresponse.h"
#include "describedbclustersnapshotsrequest.h"
#include "describedbclustersnapshotsresponse.h"
#include "describedbclustersrequest.h"
#include "describedbclustersresponse.h"
#include "describedbengineversionsrequest.h"
#include "describedbengineversionsresponse.h"
#include "describedbinstancesrequest.h"
#include "describedbinstancesresponse.h"
#include "describedbparametergroupsrequest.h"
#include "describedbparametergroupsresponse.h"
#include "describedbparametersrequest.h"
#include "describedbparametersresponse.h"
#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsresponse.h"
#include "describeenginedefaultclusterparametersrequest.h"
#include "describeenginedefaultclusterparametersresponse.h"
#include "describeenginedefaultparametersrequest.h"
#include "describeenginedefaultparametersresponse.h"
#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesresponse.h"
#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeglobalclustersrequest.h"
#include "describeglobalclustersresponse.h"
#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsresponse.h"
#include "describevaliddbinstancemodificationsrequest.h"
#include "describevaliddbinstancemodificationsresponse.h"
#include "failoverdbclusterrequest.h"
#include "failoverdbclusterresponse.h"
#include "failoverglobalclusterrequest.h"
#include "failoverglobalclusterresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifydbclusterrequest.h"
#include "modifydbclusterresponse.h"
#include "modifydbclusterendpointrequest.h"
#include "modifydbclusterendpointresponse.h"
#include "modifydbclusterparametergrouprequest.h"
#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclustersnapshotattributerequest.h"
#include "modifydbclustersnapshotattributeresponse.h"
#include "modifydbinstancerequest.h"
#include "modifydbinstanceresponse.h"
#include "modifydbparametergrouprequest.h"
#include "modifydbparametergroupresponse.h"
#include "modifydbsubnetgrouprequest.h"
#include "modifydbsubnetgroupresponse.h"
#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionresponse.h"
#include "modifyglobalclusterrequest.h"
#include "modifyglobalclusterresponse.h"
#include "promotereadreplicadbclusterrequest.h"
#include "promotereadreplicadbclusterresponse.h"
#include "rebootdbinstancerequest.h"
#include "rebootdbinstanceresponse.h"
#include "removefromglobalclusterrequest.h"
#include "removefromglobalclusterresponse.h"
#include "removerolefromdbclusterrequest.h"
#include "removerolefromdbclusterresponse.h"
#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergroupresponse.h"
#include "resetdbparametergrouprequest.h"
#include "resetdbparametergroupresponse.h"
#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimeresponse.h"
#include "startdbclusterrequest.h"
#include "startdbclusterresponse.h"
#include "stopdbclusterrequest.h"
#include "stopdbclusterresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Neptune
 * \brief Contains classess for accessing Amazon Neptune.
 *
 * \inmodule QtAwsNeptune
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::NeptuneClient
 * \brief The NeptuneClient class provides access to the Amazon Neptune service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 */

/*!
 * \brief Constructs a NeptuneClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
NeptuneClient::NeptuneClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NeptuneClientPrivate(this), parent)
{
    Q_D(NeptuneClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Neptune");
    d->serviceName = QStringLiteral("rds");
}

/*!
 * \overload NeptuneClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
NeptuneClient::NeptuneClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NeptuneClientPrivate(this), parent)
{
    Q_D(NeptuneClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Neptune");
    d->serviceName = QStringLiteral("rds");
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * AddRoleToDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Identity and Access Management (IAM) role with an Neptune DB
 */
AddRoleToDBClusterResponse * NeptuneClient::addRoleToDBCluster(const AddRoleToDBClusterRequest &request)
{
    return qobject_cast<AddRoleToDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * AddSourceIdentifierToSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a source identifier to an existing event notification
 */
AddSourceIdentifierToSubscriptionResponse * NeptuneClient::addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request)
{
    return qobject_cast<AddSourceIdentifierToSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to an Amazon Neptune resource. These tags can also be used with cost allocation reporting to track
 * cost associated with Amazon Neptune resources, or used in a Condition statement in an IAM policy for Amazon
 */
AddTagsToResourceResponse * NeptuneClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ApplyPendingMaintenanceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a pending maintenance action to a resource (for example, to a DB
 */
ApplyPendingMaintenanceActionResponse * NeptuneClient::applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request)
{
    return qobject_cast<ApplyPendingMaintenanceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CopyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB cluster parameter
 */
CopyDBClusterParameterGroupResponse * NeptuneClient::copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CopyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CopyDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies a snapshot of a DB
 *
 * cluster>
 *
 * To copy a DB cluster snapshot from a shared manual DB cluster snapshot, <code>SourceDBClusterSnapshotIdentifier</code>
 * must be the Amazon Resource Name (ARN) of the shared DB cluster
 */
CopyDBClusterSnapshotResponse * NeptuneClient::copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request)
{
    return qobject_cast<CopyDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CopyDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB parameter
 */
CopyDBParameterGroupResponse * NeptuneClient::copyDBParameterGroup(const CopyDBParameterGroupRequest &request)
{
    return qobject_cast<CopyDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Neptune DB
 *
 * cluster>
 *
 * You can use the <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a Read Replica of another
 * DB cluster or Amazon Neptune DB
 *
 * instance>
 *
 * Note that when you create a new cluster using <code>CreateDBCluster</code> directly, deletion protection is disabled by
 * default (when you create a new production cluster in the console, deletion protection is enabled by default). You can
 * only delete a DB cluster if its <code>DeletionProtection</code> field is set to
 */
CreateDBClusterResponse * NeptuneClient::createDBCluster(const CreateDBClusterRequest &request)
{
    return qobject_cast<CreateDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBClusterEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom endpoint and associates it with an Amazon Neptune DB
 */
CreateDBClusterEndpointResponse * NeptuneClient::createDBClusterEndpoint(const CreateDBClusterEndpointRequest &request)
{
    return qobject_cast<CreateDBClusterEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB cluster parameter
 *
 * group>
 *
 * Parameters in a DB cluster parameter group apply to all of the instances in a DB
 *
 * cluster>
 *
 * A DB cluster parameter group is initially created with the default parameters for the database engine used by instances
 * in the DB cluster. To provide custom values for any of the parameters, you must modify the group after creating it using
 * <a>ModifyDBClusterParameterGroup</a>. Once you've created a DB cluster parameter group, you need to associate it with
 * your DB cluster using <a>ModifyDBCluster</a>. When you associate a new DB cluster parameter group with a running DB
 * cluster, you need to reboot the DB instances in the DB cluster without failover for the new DB cluster parameter group
 * and associated settings to take
 *
 * effect> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon Neptune to fully complete
 * the create action before the DB cluster parameter group is used as the default for a new DB cluster. This is especially
 * important for parameters that are critical when creating the default database for a DB cluster, such as the character
 * set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter
 * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon Neptune console</a> or the
 * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster parameter group has been created or
 */
CreateDBClusterParameterGroupResponse * NeptuneClient::createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CreateDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a DB
 */
CreateDBClusterSnapshotResponse * NeptuneClient::createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request)
{
    return qobject_cast<CreateDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB
 */
CreateDBInstanceResponse * NeptuneClient::createDBInstance(const CreateDBInstanceRequest &request)
{
    return qobject_cast<CreateDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB parameter
 *
 * group>
 *
 * A DB parameter group is initially created with the default parameters for the database engine used by the DB instance.
 * To provide custom values for any of the parameters, you must modify the group after creating it using
 * <i>ModifyDBParameterGroup</i>. Once you've created a DB parameter group, you need to associate it with your DB instance
 * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with a running DB instance, you need to
 * reboot the DB instance without failover for the new DB parameter group and associated settings to take
 *
 * effect> <b>
 *
 * After you create a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that
 * uses that DB parameter group as the default parameter group. This allows Amazon Neptune to fully complete the create
 * action before the parameter group is used as the default for a new DB instance. This is especially important for
 * parameters that are critical when creating the default database for a DB instance, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the Amazon Neptune console or the <i>DescribeDBParameters</i> command to verify that your DB parameter group
 * has been created or
 */
CreateDBParameterGroupResponse * NeptuneClient::createDBParameterGroup(const CreateDBParameterGroupRequest &request)
{
    return qobject_cast<CreateDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the Amazon
 */
CreateDBSubnetGroupResponse * NeptuneClient::createDBSubnetGroup(const CreateDBSubnetGroupRequest &request)
{
    return qobject_cast<CreateDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an event notification subscription. This action requires a topic ARN (Amazon Resource Name) created by either
 * the Neptune console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
 * and subscribe to the topic. The ARN is displayed in the SNS
 *
 * console>
 *
 * You can specify the type of source (SourceType) you want to be notified of, provide a list of Neptune sources
 * (SourceIds) that triggers the events, and provide a list of event categories (EventCategories) for events you want to be
 * notified of. For example, you can specify SourceType = db-instance, SourceIds = mydbinstance1, mydbinstance2 and
 * EventCategories = Availability,
 *
 * Backup>
 *
 * If you specify both the SourceType and SourceIds, such as SourceType = db-instance and SourceIdentifier = myDBInstance1,
 * you are notified of all the db-instance events for the specified source. If you specify a SourceType but do not specify
 * a SourceIdentifier, you receive notice of the events for that source type for all your Neptune sources. If you do not
 * specify either the SourceType nor the SourceIdentifier, you are notified of events generated from all Neptune sources
 * belonging to your customer
 */
CreateEventSubscriptionResponse * NeptuneClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Neptune global database spread across multiple Amazon Regions. The global database contains a single primary
 * cluster with read-write capability, and read-only secondary clusters that receive data from the primary cluster through
 * high-speed replication performed by the Neptune storage
 *
 * subsystem>
 *
 * You can create a global database that is initially empty, and then add a primary cluster and secondary clusters to it,
 * or you can specify an existing Neptune cluster during the create operation to become the primary cluster of the global
 */
CreateGlobalClusterResponse * NeptuneClient::createGlobalCluster(const CreateGlobalClusterRequest &request)
{
    return qobject_cast<CreateGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeleteDBCluster action deletes a previously provisioned DB cluster. When you delete a DB cluster, all automated
 * backups for that DB cluster are deleted and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
 * are not
 *
 * deleted>
 *
 * Note that the DB Cluster cannot be deleted if deletion protection is enabled. To delete it, you must first set its
 * <code>DeletionProtection</code> field to
 */
DeleteDBClusterResponse * NeptuneClient::deleteDBCluster(const DeleteDBClusterRequest &request)
{
    return qobject_cast<DeleteDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBClusterEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom endpoint and removes it from an Amazon Neptune DB
 */
DeleteDBClusterEndpointResponse * NeptuneClient::deleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest &request)
{
    return qobject_cast<DeleteDBClusterEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified DB cluster parameter group. The DB cluster parameter group to be deleted can't be associated with
 * any DB
 */
DeleteDBClusterParameterGroupResponse * NeptuneClient::deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a DB cluster snapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The DB cluster snapshot must be in the <code>available</code> state to be
 */
DeleteDBClusterSnapshotResponse * NeptuneClient::deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request)
{
    return qobject_cast<DeleteDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeleteDBInstance action deletes a previously provisioned DB instance. When you delete a DB instance, all automated
 * backups for that instance are deleted and can't be recovered. Manual DB snapshots of the DB instance to be deleted by
 * <code>DeleteDBInstance</code> are not
 *
 * deleted>
 *
 * If you request a final DB snapshot the status of the Amazon Neptune DB instance is <code>deleting</code> until the DB
 * snapshot is created. The API action <code>DescribeDBInstance</code> is used to monitor the status of this operation. The
 * action can't be canceled or reverted once
 *
 * submitted>
 *
 * Note that when a DB instance is in a failure state and has a status of <code>failed</code>,
 * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can only delete it when the
 * <code>SkipFinalSnapshot</code> parameter is set to
 *
 * <code>true</code>>
 *
 * You can't delete a DB instance if it is the only instance in the DB cluster, or if it has deletion protection
 */
DeleteDBInstanceResponse * NeptuneClient::deleteDBInstance(const DeleteDBInstanceRequest &request)
{
    return qobject_cast<DeleteDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted can't be associated with any DB
 */
DeleteDBParameterGroupResponse * NeptuneClient::deleteDBParameterGroup(const DeleteDBParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a DB subnet
 *
 * group> <note>
 *
 * The specified database subnet group must not be associated with any DB
 */
DeleteDBSubnetGroupResponse * NeptuneClient::deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request)
{
    return qobject_cast<DeleteDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an event notification
 */
DeleteEventSubscriptionResponse * NeptuneClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a global database. The primary and all secondary clusters must already be detached or deleted
 */
DeleteGlobalClusterResponse * NeptuneClient::deleteGlobalCluster(const DeleteGlobalClusterRequest &request)
{
    return qobject_cast<DeleteGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about endpoints for an Amazon Neptune DB
 *
 * cluster> <note>
 *
 * This operation can also return information for Amazon RDS clusters and Amazon DocDB
 */
DescribeDBClusterEndpointsResponse * NeptuneClient::describeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest &request)
{
    return qobject_cast<DescribeDBClusterEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a <code>DBClusterParameterGroupName</code>
 * parameter is specified, the list will contain only the description of the specified DB cluster parameter
 */
DescribeDBClusterParameterGroupsResponse * NeptuneClient::describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBClusterParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular DB cluster parameter
 */
DescribeDBClusterParametersResponse * NeptuneClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request)
{
    return qobject_cast<DescribeDBClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DB cluster snapshot attribute names and values for a manual DB cluster
 *
 * snapshot>
 *
 * When sharing snapshots with other Amazon accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
 * <code>restore</code> attribute and a list of IDs for the Amazon accounts that are authorized to copy or restore the
 * manual DB cluster snapshot. If <code>all</code> is included in the list of values for the <code>restore</code>
 * attribute, then the manual DB cluster snapshot is public and can be copied or restored by all Amazon
 *
 * accounts>
 *
 * To add or remove access for an Amazon account to copy or restore a manual DB cluster snapshot, or to make the manual DB
 * cluster snapshot public or private, use the <a>ModifyDBClusterSnapshotAttribute</a> API
 */
DescribeDBClusterSnapshotAttributesResponse * NeptuneClient::describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB cluster snapshots. This API action supports
 */
DescribeDBClusterSnapshotsResponse * NeptuneClient::describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned DB clusters, and supports
 *
 * pagination> <note>
 *
 * This operation can also return information for Amazon RDS clusters and Amazon DocDB
 */
DescribeDBClustersResponse * NeptuneClient::describeDBClusters(const DescribeDBClustersRequest &request)
{
    return qobject_cast<DescribeDBClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available DB
 */
DescribeDBEngineVersionsResponse * NeptuneClient::describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request)
{
    return qobject_cast<DescribeDBEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned instances, and supports
 *
 * pagination> <note>
 *
 * This operation can also return information for Amazon RDS instances and Amazon DocDB
 */
DescribeDBInstancesResponse * NeptuneClient::describeDBInstances(const DescribeDBInstancesRequest &request)
{
    return qobject_cast<DescribeDBInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the
 * list will contain only the description of the specified DB parameter
 */
DescribeDBParameterGroupsResponse * NeptuneClient::describeDBParameterGroups(const DescribeDBParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular DB parameter
 */
DescribeDBParametersResponse * NeptuneClient::describeDBParameters(const DescribeDBParametersRequest &request)
{
    return qobject_cast<DescribeDBParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is specified, the list will contain only the
 * descriptions of the specified
 *
 * DBSubnetGroup>
 *
 * For an overview of CIDR ranges, go to the <a
 * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
 */
DescribeDBSubnetGroupsResponse * NeptuneClient::describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeDBSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEngineDefaultClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the cluster database
 */
DescribeEngineDefaultClusterParametersResponse * NeptuneClient::describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEngineDefaultParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the specified database
 */
DescribeEngineDefaultParametersResponse * NeptuneClient::describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of categories for all event source types, or, if specified, for a specified source
 */
DescribeEventCategoriesResponse * NeptuneClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEventSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the subscription descriptions for a customer account. The description for a subscription includes
 * SubscriptionName, SNSTopicARN, CustomerID, SourceType, SourceID, CreationTime, and
 *
 * Status>
 *
 * If you specify a SubscriptionName, lists the description for that
 */
DescribeEventSubscriptionsResponse * NeptuneClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days.
 * Events specific to a particular DB instance, DB security group, database snapshot, or DB parameter group can be obtained
 * by providing the name as a parameter. By default, the past hour of events are
 */
DescribeEventsResponse * NeptuneClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeGlobalClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about Neptune global database clusters. This API supports
 */
DescribeGlobalClustersResponse * NeptuneClient::describeGlobalClusters(const DescribeGlobalClustersRequest &request)
{
    return qobject_cast<DescribeGlobalClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeOrderableDBInstanceOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of orderable DB instance options for the specified
 */
DescribeOrderableDBInstanceOptionsResponse * NeptuneClient::describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request)
{
    return qobject_cast<DescribeOrderableDBInstanceOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribePendingMaintenanceActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resources (for example, DB instances) that have at least one pending maintenance
 */
DescribePendingMaintenanceActionsResponse * NeptuneClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request)
{
    return qobject_cast<DescribePendingMaintenanceActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeValidDBInstanceModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can call <a>DescribeValidDBInstanceModifications</a> to learn what modifications you can make to your DB instance.
 * You can use this information when you call
 */
DescribeValidDBInstanceModificationsResponse * NeptuneClient::describeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest &request)
{
    return qobject_cast<DescribeValidDBInstanceModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * FailoverDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forces a failover for a DB
 *
 * cluster>
 *
 * A failover for a DB cluster promotes one of the Read Replicas (read-only instances) in the DB cluster to be the primary
 * instance (the cluster
 *
 * writer)>
 *
 * Amazon Neptune will automatically fail over to a Read Replica, if one exists, when the primary instance fails. You can
 * force a failover when you want to simulate a failure of a primary instance for testing. Because each instance in a DB
 * cluster has its own endpoint address, you will need to clean up and re-establish any existing connections that use those
 * endpoint addresses when the failover is
 */
FailoverDBClusterResponse * NeptuneClient::failoverDBCluster(const FailoverDBClusterRequest &request)
{
    return qobject_cast<FailoverDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * FailoverGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates the failover process for a Neptune global
 *
 * database>
 *
 * A failover for a Neptune global database promotes one of secondary read-only DB clusters to be the primary DB cluster
 * and demotes the primary DB cluster to being a secondary (read-only) DB cluster. In other words, the role of the current
 * primary DB cluster and the selected target secondary DB cluster are switched. The selected secondary DB cluster assumes
 * full read/write capabilities for the Neptune global
 *
 * database> <note>
 *
 * This action applies <b>only</b> to Neptune global databases. This action is only intended for use on healthy Neptune
 * global databases with healthy Neptune DB clusters and no region-wide outages, to test disaster recovery scenarios or to
 * reconfigure the global database
 */
FailoverGlobalClusterResponse * NeptuneClient::failoverGlobalCluster(const FailoverGlobalClusterRequest &request)
{
    return qobject_cast<FailoverGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on an Amazon Neptune
 */
ListTagsForResourceResponse * NeptuneClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify a setting for a DB cluster. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the
 */
ModifyDBClusterResponse * NeptuneClient::modifyDBCluster(const ModifyDBClusterRequest &request)
{
    return qobject_cast<ModifyDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBClusterEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the properties of an endpoint in an Amazon Neptune DB
 */
ModifyDBClusterEndpointResponse * NeptuneClient::modifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest &request)
{
    return qobject_cast<ModifyDBClusterEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB cluster parameter group. To modify more than one parameter, submit a list of the
 * following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
 * parameters can be modified in a single
 *
 * request> <note>
 *
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to
 * the DB cluster associated with the parameter group before the change can take
 *
 * effect> </note> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon Neptune to fully complete
 * the create action before the parameter group is used as the default for a new DB cluster. This is especially important
 * for parameters that are critical when creating the default database for a DB cluster, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the Amazon Neptune console or the <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
 * parameter group has been created or
 */
ModifyDBClusterParameterGroupResponse * NeptuneClient::modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBClusterSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an attribute and values to, or removes an attribute and values from, a manual DB cluster
 *
 * snapshot>
 *
 * To share a manual DB cluster snapshot with other Amazon accounts, specify <code>restore</code> as the
 * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the Amazon accounts
 * that are authorized to restore the manual DB cluster snapshot. Use the value <code>all</code> to make the manual DB
 * cluster snapshot public, which means that it can be copied or restored by all Amazon accounts. Do not add the
 * <code>all</code> value for any manual DB cluster snapshots that contain private information that you don't want
 * available to all Amazon accounts. If a manual DB cluster snapshot is encrypted, it can be shared, but only by specifying
 * a list of authorized Amazon account IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a
 * value for that parameter in this
 *
 * case>
 *
 * To view which Amazon accounts have access to copy or restore a manual DB cluster snapshot, or whether a manual DB
 * cluster snapshot public or private, use the <a>DescribeDBClusterSnapshotAttributes</a> API
 */
ModifyDBClusterSnapshotAttributeResponse * NeptuneClient::modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request)
{
    return qobject_cast<ModifyDBClusterSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies settings for a DB instance. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the request. To learn what modifications you can make to your DB instance, call
 * <a>DescribeValidDBInstanceModifications</a> before you call
 */
ModifyDBInstanceResponse * NeptuneClient::modifyDBInstance(const ModifyDBInstanceRequest &request)
{
    return qobject_cast<ModifyDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB parameter group. To modify more than one parameter, submit a list of the following:
 * <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be
 * modified in a single
 *
 * request> <note>
 *
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to
 * the DB instance associated with the parameter group before the change can take
 *
 * effect> </note> <b>
 *
 * After you modify a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that
 * uses that DB parameter group as the default parameter group. This allows Amazon Neptune to fully complete the modify
 * action before the parameter group is used as the default for a new DB instance. This is especially important for
 * parameters that are critical when creating the default database for a DB instance, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the Amazon Neptune console or the <i>DescribeDBParameters</i> command to verify that your DB parameter group
 * has been created or
 */
ModifyDBParameterGroupResponse * NeptuneClient::modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the
 * Amazon
 */
ModifyDBSubnetGroupResponse * NeptuneClient::modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request)
{
    return qobject_cast<ModifyDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing event notification subscription. Note that you can't modify the source identifiers using this call;
 * to change source identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
 * <a>RemoveSourceIdentifierFromSubscription</a>
 *
 * calls>
 *
 * You can see a list of the event categories for a given SourceType by using the <b>DescribeEventCategories</b>
 */
ModifyEventSubscriptionResponse * NeptuneClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify a setting for an Amazon Neptune global cluster. You can change one or more database configuration parameters by
 * specifying these parameters and their new values in the
 */
ModifyGlobalClusterResponse * NeptuneClient::modifyGlobalCluster(const ModifyGlobalClusterRequest &request)
{
    return qobject_cast<ModifyGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * PromoteReadReplicaDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Not
 */
PromoteReadReplicaDBClusterResponse * NeptuneClient::promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request)
{
    return qobject_cast<PromoteReadReplicaDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RebootDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You might need to reboot your DB instance, usually for maintenance reasons. For example, if you make certain
 * modifications, or if you change the DB parameter group associated with the DB instance, you must reboot the instance for
 * the changes to take
 *
 * effect>
 *
 * Rebooting a DB instance restarts the database engine service. Rebooting a DB instance results in a momentary outage,
 * during which the DB instance status is set to
 */
RebootDBInstanceResponse * NeptuneClient::rebootDBInstance(const RebootDBInstanceRequest &request)
{
    return qobject_cast<RebootDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveFromGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a Neptune DB cluster from a Neptune global database. A secondary cluster becomes a normal standalone cluster
 * with read-write capability instead of being read-only, and no longer receives data from a the primary
 */
RemoveFromGlobalClusterResponse * NeptuneClient::removeFromGlobalCluster(const RemoveFromGlobalClusterRequest &request)
{
    return qobject_cast<RemoveFromGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveRoleFromDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an Identity and Access Management (IAM) role from a DB
 */
RemoveRoleFromDBClusterResponse * NeptuneClient::removeRoleFromDBCluster(const RemoveRoleFromDBClusterRequest &request)
{
    return qobject_cast<RemoveRoleFromDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveSourceIdentifierFromSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a source identifier from an existing event notification
 */
RemoveSourceIdentifierFromSubscriptionResponse * NeptuneClient::removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request)
{
    return qobject_cast<RemoveSourceIdentifierFromSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from an Amazon Neptune
 */
RemoveTagsFromResourceResponse * NeptuneClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ResetDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB cluster parameter group to the default value. To reset specific parameters submit a list
 * of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB cluster parameter
 * group, specify the <code>DBClusterParameterGroupName</code> and <code>ResetAllParameters</code>
 *
 * parameters>
 *
 * When resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <a>RebootDBInstance</a> request. You must
 * call <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want the updated static parameter to
 * apply
 */
ResetDBClusterParameterGroupResponse * NeptuneClient::resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ResetDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ResetDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters,
 * provide a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
 * parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When
 * resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code>
 */
ResetDBParameterGroupResponse * NeptuneClient::resetDBParameterGroup(const ResetDBParameterGroupRequest &request)
{
    return qobject_cast<ResetDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RestoreDBClusterFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB cluster from a DB snapshot or DB cluster
 *
 * snapshot>
 *
 * If a DB snapshot is specified, the target DB cluster is created from the source DB snapshot with a default configuration
 * and default security
 *
 * group>
 *
 * If a DB cluster snapshot is specified, the target DB cluster is created from the source DB cluster restore point with
 * the same configuration as the original source DB cluster, except that the new DB cluster is created with the default
 * security
 */
RestoreDBClusterFromSnapshotResponse * NeptuneClient::restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request)
{
    return qobject_cast<RestoreDBClusterFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RestoreDBClusterToPointInTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a DB cluster to an arbitrary point in time. Users can restore to any point in time before
 * <code>LatestRestorableTime</code> for up to <code>BackupRetentionPeriod</code> days. The target DB cluster is created
 * from the source DB cluster with the same configuration as the original DB cluster, except that the new DB cluster is
 * created with the default DB security
 *
 * group> <note>
 *
 * This action only restores the DB cluster, not the DB instances for that DB cluster. You must invoke the
 * <a>CreateDBInstance</a> action to create DB instances for the restored DB cluster, specifying the identifier of the
 * restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB instances only after the
 * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB cluster is
 */
RestoreDBClusterToPointInTimeResponse * NeptuneClient::restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request)
{
    return qobject_cast<RestoreDBClusterToPointInTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * StartDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an Amazon Neptune DB cluster that was stopped using the Amazon console, the Amazon CLI stop-db-cluster command,
 * or the StopDBCluster
 */
StartDBClusterResponse * NeptuneClient::startDBCluster(const StartDBClusterRequest &request)
{
    return qobject_cast<StartDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * StopDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an Amazon Neptune DB cluster. When you stop a DB cluster, Neptune retains the DB cluster's metadata, including its
 * endpoints and DB parameter
 *
 * groups>
 *
 * Neptune also retains the transaction logs so you can do a point-in-time restore if
 */
StopDBClusterResponse * NeptuneClient::stopDBCluster(const StopDBClusterRequest &request)
{
    return qobject_cast<StopDBClusterResponse *>(send(request));
}

/*!
 * \class QtAws::Neptune::NeptuneClientPrivate
 * \brief The NeptuneClientPrivate class provides private implementation for NeptuneClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a NeptuneClientPrivate object with public implementation \a q.
 */
NeptuneClientPrivate::NeptuneClientPrivate(NeptuneClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Neptune
} // namespace QtAws
