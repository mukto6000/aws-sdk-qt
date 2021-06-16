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

#include "glueclient.h"
#include "glueclient_p.h"

#include "core/awssignaturev4.h"
#include "batchcreatepartitionrequest.h"
#include "batchcreatepartitionresponse.h"
#include "batchdeleteconnectionrequest.h"
#include "batchdeleteconnectionresponse.h"
#include "batchdeletepartitionrequest.h"
#include "batchdeletepartitionresponse.h"
#include "batchdeletetablerequest.h"
#include "batchdeletetableresponse.h"
#include "batchdeletetableversionrequest.h"
#include "batchdeletetableversionresponse.h"
#include "batchgetcrawlersrequest.h"
#include "batchgetcrawlersresponse.h"
#include "batchgetdevendpointsrequest.h"
#include "batchgetdevendpointsresponse.h"
#include "batchgetjobsrequest.h"
#include "batchgetjobsresponse.h"
#include "batchgetpartitionrequest.h"
#include "batchgetpartitionresponse.h"
#include "batchgettriggersrequest.h"
#include "batchgettriggersresponse.h"
#include "batchgetworkflowsrequest.h"
#include "batchgetworkflowsresponse.h"
#include "batchstopjobrunrequest.h"
#include "batchstopjobrunresponse.h"
#include "createclassifierrequest.h"
#include "createclassifierresponse.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createcrawlerrequest.h"
#include "createcrawlerresponse.h"
#include "createdatabaserequest.h"
#include "createdatabaseresponse.h"
#include "createdevendpointrequest.h"
#include "createdevendpointresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createpartitionrequest.h"
#include "createpartitionresponse.h"
#include "createscriptrequest.h"
#include "createscriptresponse.h"
#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationresponse.h"
#include "createtablerequest.h"
#include "createtableresponse.h"
#include "createtriggerrequest.h"
#include "createtriggerresponse.h"
#include "createuserdefinedfunctionrequest.h"
#include "createuserdefinedfunctionresponse.h"
#include "createworkflowrequest.h"
#include "createworkflowresponse.h"
#include "deleteclassifierrequest.h"
#include "deleteclassifierresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deletecrawlerrequest.h"
#include "deletecrawlerresponse.h"
#include "deletedatabaserequest.h"
#include "deletedatabaseresponse.h"
#include "deletedevendpointrequest.h"
#include "deletedevendpointresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deletepartitionrequest.h"
#include "deletepartitionresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationresponse.h"
#include "deletetablerequest.h"
#include "deletetableresponse.h"
#include "deletetableversionrequest.h"
#include "deletetableversionresponse.h"
#include "deletetriggerrequest.h"
#include "deletetriggerresponse.h"
#include "deleteuserdefinedfunctionrequest.h"
#include "deleteuserdefinedfunctionresponse.h"
#include "deleteworkflowrequest.h"
#include "deleteworkflowresponse.h"
#include "getcatalogimportstatusrequest.h"
#include "getcatalogimportstatusresponse.h"
#include "getclassifierrequest.h"
#include "getclassifierresponse.h"
#include "getclassifiersrequest.h"
#include "getclassifiersresponse.h"
#include "getconnectionrequest.h"
#include "getconnectionresponse.h"
#include "getconnectionsrequest.h"
#include "getconnectionsresponse.h"
#include "getcrawlerrequest.h"
#include "getcrawlerresponse.h"
#include "getcrawlermetricsrequest.h"
#include "getcrawlermetricsresponse.h"
#include "getcrawlersrequest.h"
#include "getcrawlersresponse.h"
#include "getdatacatalogencryptionsettingsrequest.h"
#include "getdatacatalogencryptionsettingsresponse.h"
#include "getdatabaserequest.h"
#include "getdatabaseresponse.h"
#include "getdatabasesrequest.h"
#include "getdatabasesresponse.h"
#include "getdataflowgraphrequest.h"
#include "getdataflowgraphresponse.h"
#include "getdevendpointrequest.h"
#include "getdevendpointresponse.h"
#include "getdevendpointsrequest.h"
#include "getdevendpointsresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getjobrunrequest.h"
#include "getjobrunresponse.h"
#include "getjobrunsrequest.h"
#include "getjobrunsresponse.h"
#include "getjobsrequest.h"
#include "getjobsresponse.h"
#include "getmappingrequest.h"
#include "getmappingresponse.h"
#include "getpartitionrequest.h"
#include "getpartitionresponse.h"
#include "getpartitionsrequest.h"
#include "getpartitionsresponse.h"
#include "getplanrequest.h"
#include "getplanresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getsecurityconfigurationrequest.h"
#include "getsecurityconfigurationresponse.h"
#include "getsecurityconfigurationsrequest.h"
#include "getsecurityconfigurationsresponse.h"
#include "gettablerequest.h"
#include "gettableresponse.h"
#include "gettableversionrequest.h"
#include "gettableversionresponse.h"
#include "gettableversionsrequest.h"
#include "gettableversionsresponse.h"
#include "gettablesrequest.h"
#include "gettablesresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"
#include "gettriggerrequest.h"
#include "gettriggerresponse.h"
#include "gettriggersrequest.h"
#include "gettriggersresponse.h"
#include "getuserdefinedfunctionrequest.h"
#include "getuserdefinedfunctionresponse.h"
#include "getuserdefinedfunctionsrequest.h"
#include "getuserdefinedfunctionsresponse.h"
#include "getworkflowrequest.h"
#include "getworkflowresponse.h"
#include "getworkflowrunrequest.h"
#include "getworkflowrunresponse.h"
#include "getworkflowrunpropertiesrequest.h"
#include "getworkflowrunpropertiesresponse.h"
#include "getworkflowrunsrequest.h"
#include "getworkflowrunsresponse.h"
#include "importcatalogtogluerequest.h"
#include "importcatalogtoglueresponse.h"
#include "listcrawlersrequest.h"
#include "listcrawlersresponse.h"
#include "listdevendpointsrequest.h"
#include "listdevendpointsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listtriggersrequest.h"
#include "listtriggersresponse.h"
#include "listworkflowsrequest.h"
#include "listworkflowsresponse.h"
#include "putdatacatalogencryptionsettingsrequest.h"
#include "putdatacatalogencryptionsettingsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putworkflowrunpropertiesrequest.h"
#include "putworkflowrunpropertiesresponse.h"
#include "resetjobbookmarkrequest.h"
#include "resetjobbookmarkresponse.h"
#include "startcrawlerrequest.h"
#include "startcrawlerresponse.h"
#include "startcrawlerschedulerequest.h"
#include "startcrawlerscheduleresponse.h"
#include "startjobrunrequest.h"
#include "startjobrunresponse.h"
#include "starttriggerrequest.h"
#include "starttriggerresponse.h"
#include "startworkflowrunrequest.h"
#include "startworkflowrunresponse.h"
#include "stopcrawlerrequest.h"
#include "stopcrawlerresponse.h"
#include "stopcrawlerschedulerequest.h"
#include "stopcrawlerscheduleresponse.h"
#include "stoptriggerrequest.h"
#include "stoptriggerresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateclassifierrequest.h"
#include "updateclassifierresponse.h"
#include "updateconnectionrequest.h"
#include "updateconnectionresponse.h"
#include "updatecrawlerrequest.h"
#include "updatecrawlerresponse.h"
#include "updatecrawlerschedulerequest.h"
#include "updatecrawlerscheduleresponse.h"
#include "updatedatabaserequest.h"
#include "updatedatabaseresponse.h"
#include "updatedevendpointrequest.h"
#include "updatedevendpointresponse.h"
#include "updatejobrequest.h"
#include "updatejobresponse.h"
#include "updatepartitionrequest.h"
#include "updatepartitionresponse.h"
#include "updatetablerequest.h"
#include "updatetableresponse.h"
#include "updatetriggerrequest.h"
#include "updatetriggerresponse.h"
#include "updateuserdefinedfunctionrequest.h"
#include "updateuserdefinedfunctionresponse.h"
#include "updateworkflowrequest.h"
#include "updateworkflowresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Glue
 * \brief Contains classess for accessing AWS Glue.
 *
 * \inmodule QtAwsGlue
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GlueClient
 * \brief The GlueClient class provides access to the AWS Glue service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 */

/*!
 * \brief Constructs a GlueClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GlueClient::GlueClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlueClientPrivate(this), parent)
{
    Q_D(GlueClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("glue");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Glue");
    d->serviceName = QStringLiteral("glue");
}

/*!
 * \overload GlueClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GlueClient::GlueClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlueClientPrivate(this), parent)
{
    Q_D(GlueClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("glue");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Glue");
    d->serviceName = QStringLiteral("glue");
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchCreatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more partitions in a batch
 */
BatchCreatePartitionResponse * GlueClient::batchCreatePartition(const BatchCreatePartitionRequest &request)
{
    return qobject_cast<BatchCreatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a list of connection definitions from the Data
 */
BatchDeleteConnectionResponse * GlueClient::batchDeleteConnection(const BatchDeleteConnectionRequest &request)
{
    return qobject_cast<BatchDeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeletePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more partitions in a batch
 */
BatchDeletePartitionResponse * GlueClient::batchDeletePartition(const BatchDeletePartitionRequest &request)
{
    return qobject_cast<BatchDeletePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeleteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes multiple tables at
 *
 * once> <note>
 *
 * After completing this operation, you will no longer have access to the table versions and partitions that belong to the
 * deleted table. AWS Glue deletes these "orphaned" resources asynchronously in a timely manner, at the discretion of the
 *
 * service>
 *
 * To ensure immediate deletion of all related resources, before calling <code>BatchDeleteTable</code>, use
 * <code>DeleteTableVersion</code> or <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
 * <code>BatchDeletePartition</code>, to delete any resources that belong to the
 */
BatchDeleteTableResponse * GlueClient::batchDeleteTable(const BatchDeleteTableRequest &request)
{
    return qobject_cast<BatchDeleteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeleteTableVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified batch of versions of a
 */
BatchDeleteTableVersionResponse * GlueClient::batchDeleteTableVersion(const BatchDeleteTableVersionRequest &request)
{
    return qobject_cast<BatchDeleteTableVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetCrawlersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of crawler names. After calling the <code>ListCrawlers</code>
 * operation, you can call this operation to access the data to which you have been granted permissions. This operation
 * supports all IAM permissions, including permission conditions that uses
 */
BatchGetCrawlersResponse * GlueClient::batchGetCrawlers(const BatchGetCrawlersRequest &request)
{
    return qobject_cast<BatchGetCrawlersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetDevEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of DevEndpoint names. After calling the
 * <code>ListDevEndpoints</code> operation, you can call this operation to access the data to which you have been granted
 * permissions. This operation supports all IAM permissions, including permission conditions that uses
 */
BatchGetDevEndpointsResponse * GlueClient::batchGetDevEndpoints(const BatchGetDevEndpointsRequest &request)
{
    return qobject_cast<BatchGetDevEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of job names. After calling the <code>ListJobs</code> operation,
 * you can call this operation to access the data to which you have been granted permissions. This operation supports all
 * IAM permissions, including permission conditions that uses tags.
 */
BatchGetJobsResponse * GlueClient::batchGetJobs(const BatchGetJobsRequest &request)
{
    return qobject_cast<BatchGetJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves partitions in a batch
 */
BatchGetPartitionResponse * GlueClient::batchGetPartition(const BatchGetPartitionRequest &request)
{
    return qobject_cast<BatchGetPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of trigger names. After calling the <code>ListTriggers</code>
 * operation, you can call this operation to access the data to which you have been granted permissions. This operation
 * supports all IAM permissions, including permission conditions that uses
 */
BatchGetTriggersResponse * GlueClient::batchGetTriggers(const BatchGetTriggersRequest &request)
{
    return qobject_cast<BatchGetTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetWorkflowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of workflow names. After calling the <code>ListWorkflows</code>
 * operation, you can call this operation to access the data to which you have been granted permissions. This operation
 * supports all IAM permissions, including permission conditions that uses
 */
BatchGetWorkflowsResponse * GlueClient::batchGetWorkflows(const BatchGetWorkflowsRequest &request)
{
    return qobject_cast<BatchGetWorkflowsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchStopJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops one or more job runs for a specified job
 */
BatchStopJobRunResponse * GlueClient::batchStopJobRun(const BatchStopJobRunRequest &request)
{
    return qobject_cast<BatchStopJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a classifier in the user's account. This can be a <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
 * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which field of the request is
 */
CreateClassifierResponse * GlueClient::createClassifier(const CreateClassifierRequest &request)
{
    return qobject_cast<CreateClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connection definition in the Data
 */
CreateConnectionResponse * GlueClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new crawler with specified targets, role, configuration, and optional schedule. At least one crawl target must
 * be specified, in the <code>s3Targets</code> field, the <code>jdbcTargets</code> field, or the
 * <code>DynamoDBTargets</code>
 */
CreateCrawlerResponse * GlueClient::createCrawler(const CreateCrawlerRequest &request)
{
    return qobject_cast<CreateCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new database in a Data
 */
CreateDatabaseResponse * GlueClient::createDatabase(const CreateDatabaseRequest &request)
{
    return qobject_cast<CreateDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateDevEndpointResponse * GlueClient::createDevEndpoint(const CreateDevEndpointRequest &request)
{
    return qobject_cast<CreateDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new job
 */
CreateJobResponse * GlueClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreatePartitionResponse * GlueClient::createPartition(const CreatePartitionRequest &request)
{
    return qobject_cast<CreatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateScriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transforms a directed acyclic graph (DAG) into
 */
CreateScriptResponse * GlueClient::createScript(const CreateScriptRequest &request)
{
    return qobject_cast<CreateScriptResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new security
 */
CreateSecurityConfigurationResponse * GlueClient::createSecurityConfiguration(const CreateSecurityConfigurationRequest &request)
{
    return qobject_cast<CreateSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new table definition in the Data
 */
CreateTableResponse * GlueClient::createTable(const CreateTableRequest &request)
{
    return qobject_cast<CreateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateTriggerResponse * GlueClient::createTrigger(const CreateTriggerRequest &request)
{
    return qobject_cast<CreateTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new function definition in the Data
 */
CreateUserDefinedFunctionResponse * GlueClient::createUserDefinedFunction(const CreateUserDefinedFunctionRequest &request)
{
    return qobject_cast<CreateUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateWorkflowResponse * GlueClient::createWorkflow(const CreateWorkflowRequest &request)
{
    return qobject_cast<CreateWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a classifier from the Data
 */
DeleteClassifierResponse * GlueClient::deleteClassifier(const DeleteClassifierRequest &request)
{
    return qobject_cast<DeleteClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a connection from the Data
 */
DeleteConnectionResponse * GlueClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a specified crawler from the AWS Glue Data Catalog, unless the crawler state is
 */
DeleteCrawlerResponse * GlueClient::deleteCrawler(const DeleteCrawlerRequest &request)
{
    return qobject_cast<DeleteCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a specified Database from a Data
 *
 * Catalog> <note>
 *
 * After completing this operation, you will no longer have access to the tables (and all table versions and partitions
 * that might belong to the tables) and the user-defined functions in the deleted database. AWS Glue deletes these
 * "orphaned" resources asynchronously in a timely manner, at the discretion of the
 *
 * service>
 *
 * To ensure immediate deletion of all related resources, before calling <code>DeleteDatabase</code>, use
 * <code>DeleteTableVersion</code> or <code>BatchDeleteTableVersion</code>, <code>DeletePartition</code> or
 * <code>BatchDeletePartition</code>, <code>DeleteUserDefinedFunction</code>, and <code>DeleteTable</code> or
 * <code>BatchDeleteTable</code>, to delete any resources that belong to the
 */
DeleteDatabaseResponse * GlueClient::deleteDatabase(const DeleteDatabaseRequest &request)
{
    return qobject_cast<DeleteDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified
 */
DeleteDevEndpointResponse * GlueClient::deleteDevEndpoint(const DeleteDevEndpointRequest &request)
{
    return qobject_cast<DeleteDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified job definition. If the job definition is not found, no exception is
 */
DeleteJobResponse * GlueClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeletePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified
 */
DeletePartitionResponse * GlueClient::deletePartition(const DeletePartitionRequest &request)
{
    return qobject_cast<DeletePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified
 */
DeleteResourcePolicyResponse * GlueClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified security
 */
DeleteSecurityConfigurationResponse * GlueClient::deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request)
{
    return qobject_cast<DeleteSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a table definition from the Data
 *
 * Catalog> <note>
 *
 * After completing this operation, you will no longer have access to the table versions and partitions that belong to the
 * deleted table. AWS Glue deletes these "orphaned" resources asynchronously in a timely manner, at the discretion of the
 *
 * service>
 *
 * To ensure immediate deletion of all related resources, before calling <code>DeleteTable</code>, use
 * <code>DeleteTableVersion</code> or <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
 * <code>BatchDeletePartition</code>, to delete any resources that belong to the
 */
DeleteTableResponse * GlueClient::deleteTable(const DeleteTableRequest &request)
{
    return qobject_cast<DeleteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteTableVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified version of a
 */
DeleteTableVersionResponse * GlueClient::deleteTableVersion(const DeleteTableVersionRequest &request)
{
    return qobject_cast<DeleteTableVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified trigger. If the trigger is not found, no exception is
 */
DeleteTriggerResponse * GlueClient::deleteTrigger(const DeleteTriggerRequest &request)
{
    return qobject_cast<DeleteTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing function definition from the Data
 */
DeleteUserDefinedFunctionResponse * GlueClient::deleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest &request)
{
    return qobject_cast<DeleteUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteWorkflowResponse * GlueClient::deleteWorkflow(const DeleteWorkflowRequest &request)
{
    return qobject_cast<DeleteWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCatalogImportStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status of a migration
 */
GetCatalogImportStatusResponse * GlueClient::getCatalogImportStatus(const GetCatalogImportStatusRequest &request)
{
    return qobject_cast<GetCatalogImportStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a classifier by
 */
GetClassifierResponse * GlueClient::getClassifier(const GetClassifierRequest &request)
{
    return qobject_cast<GetClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetClassifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all classifier objects in the Data
 */
GetClassifiersResponse * GlueClient::getClassifiers(const GetClassifiersRequest &request)
{
    return qobject_cast<GetClassifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a connection definition from the Data
 */
GetConnectionResponse * GlueClient::getConnection(const GetConnectionRequest &request)
{
    return qobject_cast<GetConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of connection definitions from the Data
 */
GetConnectionsResponse * GlueClient::getConnections(const GetConnectionsRequest &request)
{
    return qobject_cast<GetConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for a specified
 */
GetCrawlerResponse * GlueClient::getCrawler(const GetCrawlerRequest &request)
{
    return qobject_cast<GetCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCrawlerMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metrics about specified
 */
GetCrawlerMetricsResponse * GlueClient::getCrawlerMetrics(const GetCrawlerMetricsRequest &request)
{
    return qobject_cast<GetCrawlerMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCrawlersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for all crawlers defined in the customer
 */
GetCrawlersResponse * GlueClient::getCrawlers(const GetCrawlersRequest &request)
{
    return qobject_cast<GetCrawlersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDataCatalogEncryptionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the security configuration for a specified
 */
GetDataCatalogEncryptionSettingsResponse * GlueClient::getDataCatalogEncryptionSettings(const GetDataCatalogEncryptionSettingsRequest &request)
{
    return qobject_cast<GetDataCatalogEncryptionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definition of a specified
 */
GetDatabaseResponse * GlueClient::getDatabase(const GetDatabaseRequest &request)
{
    return qobject_cast<GetDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all Databases defined in a given Data
 */
GetDatabasesResponse * GlueClient::getDatabases(const GetDatabasesRequest &request)
{
    return qobject_cast<GetDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDataflowGraphResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transforms a Python script into a directed acyclic graph (DAG).
 */
GetDataflowGraphResponse * GlueClient::getDataflowGraph(const GetDataflowGraphRequest &request)
{
    return qobject_cast<GetDataflowGraphResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specified
 *
 * DevEndpoint> <note>
 *
 * When you create a development endpoint in a virtual private cloud (VPC), AWS Glue returns only a private IP address, and
 * the public IP address field is not populated. When you create a non-VPC development endpoint, AWS Glue returns only a
 * public IP
 */
GetDevEndpointResponse * GlueClient::getDevEndpoint(const GetDevEndpointRequest &request)
{
    return qobject_cast<GetDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDevEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all the DevEndpoints in this AWS
 *
 * account> <note>
 *
 * When you create a development endpoint in a virtual private cloud (VPC), AWS Glue returns only a private IP address and
 * the public IP address field is not populated. When you create a non-VPC development endpoint, AWS Glue returns only a
 * public IP
 */
GetDevEndpointsResponse * GlueClient::getDevEndpoints(const GetDevEndpointsRequest &request)
{
    return qobject_cast<GetDevEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an existing job
 */
GetJobResponse * GlueClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for a given job
 */
GetJobRunResponse * GlueClient::getJobRun(const GetJobRunRequest &request)
{
    return qobject_cast<GetJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for all runs of a given job
 */
GetJobRunsResponse * GlueClient::getJobRuns(const GetJobRunsRequest &request)
{
    return qobject_cast<GetJobRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all current job
 */
GetJobsResponse * GlueClient::getJobs(const GetJobsRequest &request)
{
    return qobject_cast<GetJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates
 */
GetMappingResponse * GlueClient::getMapping(const GetMappingRequest &request)
{
    return qobject_cast<GetMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specified
 */
GetPartitionResponse * GlueClient::getPartition(const GetPartitionRequest &request)
{
    return qobject_cast<GetPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPartitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the partitions in a
 */
GetPartitionsResponse * GlueClient::getPartitions(const GetPartitionsRequest &request)
{
    return qobject_cast<GetPartitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets code to perform a specified
 */
GetPlanResponse * GlueClient::getPlan(const GetPlanRequest &request)
{
    return qobject_cast<GetPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified resource
 */
GetResourcePolicyResponse * GlueClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified security
 */
GetSecurityConfigurationResponse * GlueClient::getSecurityConfiguration(const GetSecurityConfigurationRequest &request)
{
    return qobject_cast<GetSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSecurityConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all security
 */
GetSecurityConfigurationsResponse * GlueClient::getSecurityConfigurations(const GetSecurityConfigurationsRequest &request)
{
    return qobject_cast<GetSecurityConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>Table</code> definition in a Data Catalog for a specified
 */
GetTableResponse * GlueClient::getTable(const GetTableRequest &request)
{
    return qobject_cast<GetTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTableVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified version of a
 */
GetTableVersionResponse * GlueClient::getTableVersion(const GetTableVersionRequest &request)
{
    return qobject_cast<GetTableVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTableVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of strings that identify available versions of a specified
 */
GetTableVersionsResponse * GlueClient::getTableVersions(const GetTableVersionsRequest &request)
{
    return qobject_cast<GetTableVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definitions of some or all of the tables in a given
 */
GetTablesResponse * GlueClient::getTables(const GetTablesRequest &request)
{
    return qobject_cast<GetTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of tags associated with a
 */
GetTagsResponse * GlueClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definition of a
 */
GetTriggerResponse * GlueClient::getTrigger(const GetTriggerRequest &request)
{
    return qobject_cast<GetTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all the triggers associated with a
 */
GetTriggersResponse * GlueClient::getTriggers(const GetTriggersRequest &request)
{
    return qobject_cast<GetTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified function definition from the Data
 */
GetUserDefinedFunctionResponse * GlueClient::getUserDefinedFunction(const GetUserDefinedFunctionRequest &request)
{
    return qobject_cast<GetUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetUserDefinedFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a multiple function definitions from the Data
 */
GetUserDefinedFunctionsResponse * GlueClient::getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request)
{
    return qobject_cast<GetUserDefinedFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves resource metadata for a
 */
GetWorkflowResponse * GlueClient::getWorkflow(const GetWorkflowRequest &request)
{
    return qobject_cast<GetWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for a given workflow run.
 */
GetWorkflowRunResponse * GlueClient::getWorkflowRun(const GetWorkflowRunRequest &request)
{
    return qobject_cast<GetWorkflowRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowRunPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the workflow run properties which were set during the
 */
GetWorkflowRunPropertiesResponse * GlueClient::getWorkflowRunProperties(const GetWorkflowRunPropertiesRequest &request)
{
    return qobject_cast<GetWorkflowRunPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for all runs of a given
 */
GetWorkflowRunsResponse * GlueClient::getWorkflowRuns(const GetWorkflowRunsRequest &request)
{
    return qobject_cast<GetWorkflowRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ImportCatalogToGlueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports an existing Athena Data Catalog to AWS
 */
ImportCatalogToGlueResponse * GlueClient::importCatalogToGlue(const ImportCatalogToGlueRequest &request)
{
    return qobject_cast<ImportCatalogToGlueResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListCrawlersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all crawler resources in this AWS account, or the resources with the specified tag. This
 * operation allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListCrawlersResponse * GlueClient::listCrawlers(const ListCrawlersRequest &request)
{
    return qobject_cast<ListCrawlersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListDevEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all <code>DevEndpoint</code> resources in this AWS account, or the resources with the specified
 * tag. This operation allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListDevEndpointsResponse * GlueClient::listDevEndpoints(const ListDevEndpointsRequest &request)
{
    return qobject_cast<ListDevEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all job resources in this AWS account, or the resources with the specified tag. This operation
 * allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListJobsResponse * GlueClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all trigger resources in this AWS account, or the resources with the specified tag. This
 * operation allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListTriggersResponse * GlueClient::listTriggers(const ListTriggersRequest &request)
{
    return qobject_cast<ListTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListWorkflowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists names of workflows created in the
 */
ListWorkflowsResponse * GlueClient::listWorkflows(const ListWorkflowsRequest &request)
{
    return qobject_cast<ListWorkflowsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutDataCatalogEncryptionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the security configuration for a specified catalog. After the configuration has been set, the specified encryption
 * is applied to every catalog write
 */
PutDataCatalogEncryptionSettingsResponse * GlueClient::putDataCatalogEncryptionSettings(const PutDataCatalogEncryptionSettingsRequest &request)
{
    return qobject_cast<PutDataCatalogEncryptionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the Data Catalog resource policy for access
 */
PutResourcePolicyResponse * GlueClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutWorkflowRunPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts the specified workflow run properties for the given workflow run. If a property already exists for the specified
 * run, then it overrides the value otherwise adds the property to existing
 */
PutWorkflowRunPropertiesResponse * GlueClient::putWorkflowRunProperties(const PutWorkflowRunPropertiesRequest &request)
{
    return qobject_cast<PutWorkflowRunPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ResetJobBookmarkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets a bookmark
 */
ResetJobBookmarkResponse * GlueClient::resetJobBookmark(const ResetJobBookmarkRequest &request)
{
    return qobject_cast<ResetJobBookmarkResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a crawl using the specified crawler, regardless of what is scheduled. If the crawler is already running, returns
 * a <a
 */
StartCrawlerResponse * GlueClient::startCrawler(const StartCrawlerRequest &request)
{
    return qobject_cast<StartCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartCrawlerScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the schedule state of the specified crawler to <code>SCHEDULED</code>, unless the crawler is already running or
 * the schedule state is already
 */
StartCrawlerScheduleResponse * GlueClient::startCrawlerSchedule(const StartCrawlerScheduleRequest &request)
{
    return qobject_cast<StartCrawlerScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job run using a job
 */
StartJobRunResponse * GlueClient::startJobRun(const StartJobRunRequest &request)
{
    return qobject_cast<StartJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an existing trigger. See <a href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
 * Jobs</a> for information about how different types of trigger are
 */
StartTriggerResponse * GlueClient::startTrigger(const StartTriggerRequest &request)
{
    return qobject_cast<StartTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartWorkflowRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new run of the specified
 */
StartWorkflowRunResponse * GlueClient::startWorkflowRun(const StartWorkflowRunRequest &request)
{
    return qobject_cast<StartWorkflowRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If the specified crawler is running, stops the
 */
StopCrawlerResponse * GlueClient::stopCrawler(const StopCrawlerRequest &request)
{
    return qobject_cast<StopCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopCrawlerScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the schedule state of the specified crawler to <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is
 * already
 */
StopCrawlerScheduleResponse * GlueClient::stopCrawlerSchedule(const StopCrawlerScheduleRequest &request)
{
    return qobject_cast<StopCrawlerScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a specified
 */
StopTriggerResponse * GlueClient::stopTrigger(const StopTriggerRequest &request)
{
    return qobject_cast<StopTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to a resource. A tag is a label you can assign to an AWS resource. In AWS Glue, you can tag only certain
 * resources. For information about what resources you can tag, see <a
 * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in AWS
 */
TagResourceResponse * GlueClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * GlueClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing classifier (a <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
 * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which field is
 */
UpdateClassifierResponse * GlueClient::updateClassifier(const UpdateClassifierRequest &request)
{
    return qobject_cast<UpdateClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a connection definition in the Data
 */
UpdateConnectionResponse * GlueClient::updateConnection(const UpdateConnectionRequest &request)
{
    return qobject_cast<UpdateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a crawler. If a crawler is running, you must stop it using <code>StopCrawler</code> before updating
 */
UpdateCrawlerResponse * GlueClient::updateCrawler(const UpdateCrawlerRequest &request)
{
    return qobject_cast<UpdateCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateCrawlerScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the schedule of a crawler using a <code>cron</code> expression.
 */
UpdateCrawlerScheduleResponse * GlueClient::updateCrawlerSchedule(const UpdateCrawlerScheduleRequest &request)
{
    return qobject_cast<UpdateCrawlerScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing database definition in a Data
 */
UpdateDatabaseResponse * GlueClient::updateDatabase(const UpdateDatabaseRequest &request)
{
    return qobject_cast<UpdateDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specified
 */
UpdateDevEndpointResponse * GlueClient::updateDevEndpoint(const UpdateDevEndpointRequest &request)
{
    return qobject_cast<UpdateDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing job
 */
UpdateJobResponse * GlueClient::updateJob(const UpdateJobRequest &request)
{
    return qobject_cast<UpdateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdatePartitionResponse * GlueClient::updatePartition(const UpdatePartitionRequest &request)
{
    return qobject_cast<UpdatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a metadata table in the Data
 */
UpdateTableResponse * GlueClient::updateTable(const UpdateTableRequest &request)
{
    return qobject_cast<UpdateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a trigger
 */
UpdateTriggerResponse * GlueClient::updateTrigger(const UpdateTriggerRequest &request)
{
    return qobject_cast<UpdateTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing function definition in the Data
 */
UpdateUserDefinedFunctionResponse * GlueClient::updateUserDefinedFunction(const UpdateUserDefinedFunctionRequest &request)
{
    return qobject_cast<UpdateUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 */
UpdateWorkflowResponse * GlueClient::updateWorkflow(const UpdateWorkflowRequest &request)
{
    return qobject_cast<UpdateWorkflowResponse *>(send(request));
}

/*!
 * \class QtAws::Glue::GlueClientPrivate
 * \brief The GlueClientPrivate class provides private implementation for GlueClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueClientPrivate object with public implementation \a q.
 */
GlueClientPrivate::GlueClientPrivate(GlueClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Glue
} // namespace QtAws
