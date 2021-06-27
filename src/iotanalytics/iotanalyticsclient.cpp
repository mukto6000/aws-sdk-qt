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

#include "iotanalyticsclient.h"
#include "iotanalyticsclient_p.h"

#include "core/awssignaturev4.h"
#include "batchputmessagerequest.h"
#include "batchputmessageresponse.h"
#include "cancelpipelinereprocessingrequest.h"
#include "cancelpipelinereprocessingresponse.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createdatasetcontentrequest.h"
#include "createdatasetcontentresponse.h"
#include "createdatastorerequest.h"
#include "createdatastoreresponse.h"
#include "createpipelinerequest.h"
#include "createpipelineresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletedatasetcontentrequest.h"
#include "deletedatasetcontentresponse.h"
#include "deletedatastorerequest.h"
#include "deletedatastoreresponse.h"
#include "deletepipelinerequest.h"
#include "deletepipelineresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describedatastorerequest.h"
#include "describedatastoreresponse.h"
#include "describeloggingoptionsrequest.h"
#include "describeloggingoptionsresponse.h"
#include "describepipelinerequest.h"
#include "describepipelineresponse.h"
#include "getdatasetcontentrequest.h"
#include "getdatasetcontentresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listdatasetcontentsrequest.h"
#include "listdatasetcontentsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listdatastoresrequest.h"
#include "listdatastoresresponse.h"
#include "listpipelinesrequest.h"
#include "listpipelinesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putloggingoptionsrequest.h"
#include "putloggingoptionsresponse.h"
#include "runpipelineactivityrequest.h"
#include "runpipelineactivityresponse.h"
#include "samplechanneldatarequest.h"
#include "samplechanneldataresponse.h"
#include "startpipelinereprocessingrequest.h"
#include "startpipelinereprocessingresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updatedatasetrequest.h"
#include "updatedatasetresponse.h"
#include "updatedatastorerequest.h"
#include "updatedatastoreresponse.h"
#include "updatepipelinerequest.h"
#include "updatepipelineresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTAnalytics
 * \brief Contains classess for accessing AWS IoT Analytics.
 *
 * \inmodule QtAwsIoTAnalytics
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::IoTAnalyticsClient
 * \brief The IoTAnalyticsClient class provides access to the AWS IoT Analytics service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTAnalytics
 *
 *  AWS IoT Analytics allows you to collect large amounts of device data, process messages, and store them. You can then
 *  query the data and run sophisticated analytics on it. AWS IoT Analytics enables advanced data exploration through
 *  integration with Jupyter Notebooks and data visualization through integration with Amazon
 * 
 *  QuickSight>
 * 
 *  Traditional analytics and business intelligence tools are designed to process structured data. IoT data often comes from
 *  devices that record noisy processes (such as temperature, motion, or sound). As a result the data from these devices can
 *  have significant gaps, corrupted messages, and false readings that must be cleaned up before analysis can occur. Also,
 *  IoT data is often only meaningful in the context of other data from external sources.
 * 
 *  </p
 * 
 *  AWS IoT Analytics automates the steps required to analyze data from IoT devices. AWS IoT Analytics filters, transforms,
 *  and enriches IoT data before storing it in a time-series data store for analysis. You can set up the service to collect
 *  only the data you need from your devices, apply mathematical transforms to process the data, and enrich the data with
 *  device-specific metadata such as device type and location before storing it. Then, you can analyze your data by running
 *  queries using the built-in SQL query engine, or perform more complex analytics and machine learning inference. AWS IoT
 *  Analytics includes pre-built models for common IoT use cases so you can answer questions like which devices are about to
 *  fail or which customers are at risk of abandoning their wearable
 */

/*!
 * \brief Constructs a IoTAnalyticsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTAnalyticsClient::IoTAnalyticsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-11-27"),
    QStringLiteral("iotanalytics"),
    QStringLiteral("AWS IoT Analytics"),
    QStringLiteral("iotanalytics"),
    parent), d_ptr(new IoTAnalyticsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload IoTAnalyticsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTAnalyticsClient::IoTAnalyticsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-11-27"),
    QStringLiteral("iotanalytics"),
    QStringLiteral("AWS IoT Analytics"),
    QStringLiteral("iotanalytics"),
    parent), d_ptr(new IoTAnalyticsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * BatchPutMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends messages to a
 */
BatchPutMessageResponse * IoTAnalyticsClient::batchPutMessage(const BatchPutMessageRequest &request)
{
    return qobject_cast<BatchPutMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * CancelPipelineReprocessingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the reprocessing of data through the
 */
CancelPipelineReprocessingResponse * IoTAnalyticsClient::cancelPipelineReprocessing(const CancelPipelineReprocessingRequest &request)
{
    return qobject_cast<CancelPipelineReprocessingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a channel. A channel collects data from an MQTT topic and archives the raw, unprocessed messages before
 * publishing the data to a
 */
CreateChannelResponse * IoTAnalyticsClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dataset. A dataset stores data retrieved from a data store by applying a <code>queryAction</code> (a SQL
 * query) or a <code>containerAction</code> (executing a containerized application). This operation creates the skeleton of
 * a dataset. The dataset can be populated manually by calling <code>CreateDatasetContent</code> or automatically according
 * to a trigger you
 */
CreateDatasetResponse * IoTAnalyticsClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * CreateDatasetContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the content of a data set by applying a <code>queryAction</code> (a SQL query) or a <code>containerAction</code>
 * (executing a containerized
 */
CreateDatasetContentResponse * IoTAnalyticsClient::createDatasetContent(const CreateDatasetContentRequest &request)
{
    return qobject_cast<CreateDatasetContentResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * CreateDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a data store, which is a repository for messages. Only data stores that are used to save pipeline data can be
 * configured with
 */
CreateDatastoreResponse * IoTAnalyticsClient::createDatastore(const CreateDatastoreRequest &request)
{
    return qobject_cast<CreateDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * CreatePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a pipeline. A pipeline consumes messages from a channel and allows you to process the messages before storing
 * them in a data store. You must specify both a <code>channel</code> and a <code>datastore</code> activity and,
 * optionally, as many as 23 additional activities in the <code>pipelineActivities</code>
 */
CreatePipelineResponse * IoTAnalyticsClient::createPipeline(const CreatePipelineRequest &request)
{
    return qobject_cast<CreatePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteChannelResponse * IoTAnalyticsClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * dataset>
 *
 * You do not have to delete the content of the dataset before you perform this
 */
DeleteDatasetResponse * IoTAnalyticsClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DeleteDatasetContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the content of the specified
 */
DeleteDatasetContentResponse * IoTAnalyticsClient::deleteDatasetContent(const DeleteDatasetContentRequest &request)
{
    return qobject_cast<DeleteDatasetContentResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DeleteDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified data
 */
DeleteDatastoreResponse * IoTAnalyticsClient::deleteDatastore(const DeleteDatastoreRequest &request)
{
    return qobject_cast<DeleteDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DeletePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeletePipelineResponse * IoTAnalyticsClient::deletePipeline(const DeletePipelineRequest &request)
{
    return qobject_cast<DeletePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribeChannelResponse * IoTAnalyticsClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribeDatasetResponse * IoTAnalyticsClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DescribeDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a data
 */
DescribeDatastoreResponse * IoTAnalyticsClient::describeDatastore(const DescribeDatastoreRequest &request)
{
    return qobject_cast<DescribeDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DescribeLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current settings of the AWS IoT Analytics logging
 */
DescribeLoggingOptionsResponse * IoTAnalyticsClient::describeLoggingOptions(const DescribeLoggingOptionsRequest &request)
{
    return qobject_cast<DescribeLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * DescribePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribePipelineResponse * IoTAnalyticsClient::describePipeline(const DescribePipelineRequest &request)
{
    return qobject_cast<DescribePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * GetDatasetContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the contents of a data set as presigned
 */
GetDatasetContentResponse * IoTAnalyticsClient::getDatasetContent(const GetDatasetContentRequest &request)
{
    return qobject_cast<GetDatasetContentResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of
 */
ListChannelsResponse * IoTAnalyticsClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * ListDatasetContentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about data set contents that have been
 */
ListDatasetContentsResponse * IoTAnalyticsClient::listDatasetContents(const ListDatasetContentsRequest &request)
{
    return qobject_cast<ListDatasetContentsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about data
 */
ListDatasetsResponse * IoTAnalyticsClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * ListDatastoresResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of data
 */
ListDatastoresResponse * IoTAnalyticsClient::listDatastores(const ListDatastoresRequest &request)
{
    return qobject_cast<ListDatastoresResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * ListPipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of
 */
ListPipelinesResponse * IoTAnalyticsClient::listPipelines(const ListPipelinesRequest &request)
{
    return qobject_cast<ListPipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags (metadata) that you have assigned to the
 */
ListTagsForResourceResponse * IoTAnalyticsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * PutLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets or updates the AWS IoT Analytics logging
 *
 * options>
 *
 * If you update the value of any <code>loggingOptions</code> field, it takes up to one minute for the change to take
 * effect. Also, if you change the policy attached to the role you specified in the <code>roleArn</code> field (for
 * example, to correct an invalid policy), it takes up to five minutes for that change to take effect.
 */
PutLoggingOptionsResponse * IoTAnalyticsClient::putLoggingOptions(const PutLoggingOptionsRequest &request)
{
    return qobject_cast<PutLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * RunPipelineActivityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulates the results of running a pipeline activity on a message
 */
RunPipelineActivityResponse * IoTAnalyticsClient::runPipelineActivity(const RunPipelineActivityRequest &request)
{
    return qobject_cast<RunPipelineActivityResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * SampleChannelDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a sample of messages from the specified channel ingested during the specified timeframe. Up to 10 messages can
 * be
 */
SampleChannelDataResponse * IoTAnalyticsClient::sampleChannelData(const SampleChannelDataRequest &request)
{
    return qobject_cast<SampleChannelDataResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * StartPipelineReprocessingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the reprocessing of raw message data through the
 */
StartPipelineReprocessingResponse * IoTAnalyticsClient::startPipelineReprocessing(const StartPipelineReprocessingRequest &request)
{
    return qobject_cast<StartPipelineReprocessingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the given resource. Tags are metadata that can be used to manage a
 */
TagResourceResponse * IoTAnalyticsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the given tags (metadata) from the
 */
UntagResourceResponse * IoTAnalyticsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings of a
 */
UpdateChannelResponse * IoTAnalyticsClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * UpdateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings of a data
 */
UpdateDatasetResponse * IoTAnalyticsClient::updateDataset(const UpdateDatasetRequest &request)
{
    return qobject_cast<UpdateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * UpdateDatastoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings of a data
 */
UpdateDatastoreResponse * IoTAnalyticsClient::updateDatastore(const UpdateDatastoreRequest &request)
{
    return qobject_cast<UpdateDatastoreResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTAnalyticsClient service, and returns a pointer to an
 * UpdatePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings of a pipeline. You must specify both a <code>channel</code> and a <code>datastore</code> activity
 * and, optionally, as many as 23 additional activities in the <code>pipelineActivities</code>
 */
UpdatePipelineResponse * IoTAnalyticsClient::updatePipeline(const UpdatePipelineRequest &request)
{
    return qobject_cast<UpdatePipelineResponse *>(send(request));
}

/*!
 * \class QtAws::IoTAnalytics::IoTAnalyticsClientPrivate
 * \brief The IoTAnalyticsClientPrivate class provides private implementation for IoTAnalyticsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a IoTAnalyticsClientPrivate object with public implementation \a q.
 */
IoTAnalyticsClientPrivate::IoTAnalyticsClientPrivate(IoTAnalyticsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoTAnalytics
} // namespace QtAws
