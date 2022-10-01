// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lookoutequipmentclient.h"
#include "lookoutequipmentclient_p.h"

#include "core/awssignaturev4.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createinferenceschedulerrequest.h"
#include "createinferenceschedulerresponse.h"
#include "createlabelrequest.h"
#include "createlabelresponse.h"
#include "createlabelgrouprequest.h"
#include "createlabelgroupresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deleteinferenceschedulerrequest.h"
#include "deleteinferenceschedulerresponse.h"
#include "deletelabelrequest.h"
#include "deletelabelresponse.h"
#include "deletelabelgrouprequest.h"
#include "deletelabelgroupresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "describedataingestionjobrequest.h"
#include "describedataingestionjobresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describeinferenceschedulerrequest.h"
#include "describeinferenceschedulerresponse.h"
#include "describelabelrequest.h"
#include "describelabelresponse.h"
#include "describelabelgrouprequest.h"
#include "describelabelgroupresponse.h"
#include "describemodelrequest.h"
#include "describemodelresponse.h"
#include "listdataingestionjobsrequest.h"
#include "listdataingestionjobsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listinferenceeventsrequest.h"
#include "listinferenceeventsresponse.h"
#include "listinferenceexecutionsrequest.h"
#include "listinferenceexecutionsresponse.h"
#include "listinferenceschedulersrequest.h"
#include "listinferenceschedulersresponse.h"
#include "listlabelgroupsrequest.h"
#include "listlabelgroupsresponse.h"
#include "listlabelsrequest.h"
#include "listlabelsresponse.h"
#include "listmodelsrequest.h"
#include "listmodelsresponse.h"
#include "listsensorstatisticsrequest.h"
#include "listsensorstatisticsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startdataingestionjobrequest.h"
#include "startdataingestionjobresponse.h"
#include "startinferenceschedulerrequest.h"
#include "startinferenceschedulerresponse.h"
#include "stopinferenceschedulerrequest.h"
#include "stopinferenceschedulerresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateinferenceschedulerrequest.h"
#include "updateinferenceschedulerresponse.h"
#include "updatelabelgrouprequest.h"
#include "updatelabelgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LookoutEquipment
 * \brief Contains classess for accessing Amazon Lookout for Equipment.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::LookoutEquipmentClient
 * \brief The LookoutEquipmentClient class provides access to the Amazon Lookout for Equipment service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 */

/*!
 * \brief Constructs a LookoutEquipmentClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LookoutEquipmentClient::LookoutEquipmentClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LookoutEquipmentClientPrivate(this), parent)
{
    Q_D(LookoutEquipmentClient);
    d->apiVersion = QStringLiteral("2020-12-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lookoutequipment");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lookout for Equipment");
    d->serviceName = QStringLiteral("lookoutequipment");
}

/*!
 * \overload LookoutEquipmentClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LookoutEquipmentClient::LookoutEquipmentClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LookoutEquipmentClientPrivate(this), parent)
{
    Q_D(LookoutEquipmentClient);
    d->apiVersion = QStringLiteral("2020-12-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lookoutequipment");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lookout for Equipment");
    d->serviceName = QStringLiteral("lookoutequipment");
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a container for a collection of data being ingested for analysis. The dataset contains the metadata describing
 * where the data is and what the data actually looks like. In other words, it contains the location of the data source,
 * the data schema, and other information. A dataset also contains any tags associated with the ingested data.
 */
CreateDatasetResponse * LookoutEquipmentClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * CreateInferenceSchedulerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a scheduled inference. Scheduling an inference is setting up a continuous real-time inference plan to analyze
 * new measurement data. When setting up the schedule, you provide an S3 bucket location for the input data, assign it a
 * delimiter between separate entries in the data, set an offset delay if desired, and set the frequency of inferencing.
 * You must also provide an S3 bucket location for the output data.
 */
CreateInferenceSchedulerResponse * LookoutEquipmentClient::createInferenceScheduler(const CreateInferenceSchedulerRequest &request)
{
    return qobject_cast<CreateInferenceSchedulerResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * CreateLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a label for an event.
 */
CreateLabelResponse * LookoutEquipmentClient::createLabel(const CreateLabelRequest &request)
{
    return qobject_cast<CreateLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * CreateLabelGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group of labels.
 */
CreateLabelGroupResponse * LookoutEquipmentClient::createLabelGroup(const CreateLabelGroupRequest &request)
{
    return qobject_cast<CreateLabelGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an ML model for data inference.
 *
 * </p
 *
 * A machine-learning (ML) model is a mathematical model that finds patterns in your data. In Amazon Lookout for Equipment,
 * the model learns the patterns of normal behavior and detects abnormal behavior that could be potential equipment failure
 * (or maintenance events). The models are made by analyzing normal data and abnormalities in machine behavior that have
 * already
 *
 * occurred>
 *
 * Your model is trained using a portion of the data from your dataset and uses that data to learn patterns of normal
 * behavior and abnormal patterns that lead to equipment failure. Another portion of the data is used to evaluate the
 * model's accuracy.
 */
CreateModelResponse * LookoutEquipmentClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset and associated artifacts. The operation will check to see if any inference scheduler or data ingestion
 * job is currently using the dataset, and if there isn't, the dataset, its metadata, and any associated data stored in S3
 * will be deleted. This does not affect any models that used this dataset for training and evaluation, but does prevent it
 * from being used in the future.
 */
DeleteDatasetResponse * LookoutEquipmentClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DeleteInferenceSchedulerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an inference scheduler that has been set up. Already processed output results are not affected.
 */
DeleteInferenceSchedulerResponse * LookoutEquipmentClient::deleteInferenceScheduler(const DeleteInferenceSchedulerRequest &request)
{
    return qobject_cast<DeleteInferenceSchedulerResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DeleteLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a label.
 */
DeleteLabelResponse * LookoutEquipmentClient::deleteLabel(const DeleteLabelRequest &request)
{
    return qobject_cast<DeleteLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DeleteLabelGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a group of labels.
 */
DeleteLabelGroupResponse * LookoutEquipmentClient::deleteLabelGroup(const DeleteLabelGroupRequest &request)
{
    return qobject_cast<DeleteLabelGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an ML model currently available for Amazon Lookout for Equipment. This will prevent it from being used with an
 * inference scheduler, even one that is already set up.
 */
DeleteModelResponse * LookoutEquipmentClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DescribeDataIngestionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information on a specific data ingestion job such as creation time, dataset ARN, and
 */
DescribeDataIngestionJobResponse * LookoutEquipmentClient::describeDataIngestionJob(const DescribeDataIngestionJobRequest &request)
{
    return qobject_cast<DescribeDataIngestionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a JSON description of the data in each time series dataset, including names, column names, and data
 */
DescribeDatasetResponse * LookoutEquipmentClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DescribeInferenceSchedulerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies information about the inference scheduler being used, including name, model, status, and associated metadata
 */
DescribeInferenceSchedulerResponse * LookoutEquipmentClient::describeInferenceScheduler(const DescribeInferenceSchedulerRequest &request)
{
    return qobject_cast<DescribeInferenceSchedulerResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DescribeLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name of the label.
 */
DescribeLabelResponse * LookoutEquipmentClient::describeLabel(const DescribeLabelRequest &request)
{
    return qobject_cast<DescribeLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DescribeLabelGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the label group.
 */
DescribeLabelGroupResponse * LookoutEquipmentClient::describeLabelGroup(const DescribeLabelGroupRequest &request)
{
    return qobject_cast<DescribeLabelGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * DescribeModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a JSON containing the overall information about a specific ML model, including model name and ARN, dataset,
 * training and evaluation information, status, and so on.
 */
DescribeModelResponse * LookoutEquipmentClient::describeModel(const DescribeModelRequest &request)
{
    return qobject_cast<DescribeModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListDataIngestionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of all data ingestion jobs, including dataset name and ARN, S3 location of the input data, status, and
 * so on.
 */
ListDataIngestionJobsResponse * LookoutEquipmentClient::listDataIngestionJobs(const ListDataIngestionJobsRequest &request)
{
    return qobject_cast<ListDataIngestionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all datasets currently available in your account, filtering on the dataset name.
 */
ListDatasetsResponse * LookoutEquipmentClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListInferenceEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all inference events that have been found for the specified inference scheduler.
 */
ListInferenceEventsResponse * LookoutEquipmentClient::listInferenceEvents(const ListInferenceEventsRequest &request)
{
    return qobject_cast<ListInferenceEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListInferenceExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all inference executions that have been performed by the specified inference scheduler.
 */
ListInferenceExecutionsResponse * LookoutEquipmentClient::listInferenceExecutions(const ListInferenceExecutionsRequest &request)
{
    return qobject_cast<ListInferenceExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListInferenceSchedulersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all inference schedulers currently available for your account.
 */
ListInferenceSchedulersResponse * LookoutEquipmentClient::listInferenceSchedulers(const ListInferenceSchedulersRequest &request)
{
    return qobject_cast<ListInferenceSchedulersResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListLabelGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the label groups.
 */
ListLabelGroupsResponse * LookoutEquipmentClient::listLabelGroups(const ListLabelGroupsRequest &request)
{
    return qobject_cast<ListLabelGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of labels.
 */
ListLabelsResponse * LookoutEquipmentClient::listLabels(const ListLabelsRequest &request)
{
    return qobject_cast<ListLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a list of all models in the account, including model name and ARN, dataset, and status.
 */
ListModelsResponse * LookoutEquipmentClient::listModels(const ListModelsRequest &request)
{
    return qobject_cast<ListModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListSensorStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists statistics about the data collected for each of the sensors that have been successfully ingested in the particular
 * dataset. Can also be used to retreive Sensor Statistics for a previous ingestion job.
 */
ListSensorStatisticsResponse * LookoutEquipmentClient::listSensorStatistics(const ListSensorStatisticsRequest &request)
{
    return qobject_cast<ListSensorStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the tags for a specified resource, including key and value.
 */
ListTagsForResourceResponse * LookoutEquipmentClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * StartDataIngestionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a data ingestion job. Amazon Lookout for Equipment returns the job status.
 */
StartDataIngestionJobResponse * LookoutEquipmentClient::startDataIngestionJob(const StartDataIngestionJobRequest &request)
{
    return qobject_cast<StartDataIngestionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * StartInferenceSchedulerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an inference scheduler.
 */
StartInferenceSchedulerResponse * LookoutEquipmentClient::startInferenceScheduler(const StartInferenceSchedulerRequest &request)
{
    return qobject_cast<StartInferenceSchedulerResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * StopInferenceSchedulerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an inference scheduler.
 */
StopInferenceSchedulerResponse * LookoutEquipmentClient::stopInferenceScheduler(const StopInferenceSchedulerRequest &request)
{
    return qobject_cast<StopInferenceSchedulerResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a given tag to a resource in your account. A tag is a key-value pair which can be added to an Amazon Lookout
 * for Equipment resource as metadata. Tags can be used for organizing your resources as well as helping you to search and
 * filter by tag. Multiple tags can be added to a resource, either when you create it, or later. Up to 50 tags can be
 * associated with each resource.
 */
TagResourceResponse * LookoutEquipmentClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a specific tag from a given resource. The tag is specified by its key.
 */
UntagResourceResponse * LookoutEquipmentClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * UpdateInferenceSchedulerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an inference scheduler.
 */
UpdateInferenceSchedulerResponse * LookoutEquipmentClient::updateInferenceScheduler(const UpdateInferenceSchedulerRequest &request)
{
    return qobject_cast<UpdateInferenceSchedulerResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutEquipmentClient service, and returns a pointer to an
 * UpdateLabelGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the label group.
 */
UpdateLabelGroupResponse * LookoutEquipmentClient::updateLabelGroup(const UpdateLabelGroupRequest &request)
{
    return qobject_cast<UpdateLabelGroupResponse *>(send(request));
}

/*!
 * \class QtAws::LookoutEquipment::LookoutEquipmentClientPrivate
 * \brief The LookoutEquipmentClientPrivate class provides private implementation for LookoutEquipmentClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a LookoutEquipmentClientPrivate object with public implementation \a q.
 */
LookoutEquipmentClientPrivate::LookoutEquipmentClientPrivate(LookoutEquipmentClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LookoutEquipment
} // namespace QtAws
