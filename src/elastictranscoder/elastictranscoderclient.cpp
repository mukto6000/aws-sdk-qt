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

#include "elastictranscoderclient.h"
#include "elastictranscoderclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createpipelinerequest.h"
#include "createpipelineresponse.h"
#include "createpresetrequest.h"
#include "createpresetresponse.h"
#include "deletepipelinerequest.h"
#include "deletepipelineresponse.h"
#include "deletepresetrequest.h"
#include "deletepresetresponse.h"
#include "listjobsbypipelinerequest.h"
#include "listjobsbypipelineresponse.h"
#include "listjobsbystatusrequest.h"
#include "listjobsbystatusresponse.h"
#include "listpipelinesrequest.h"
#include "listpipelinesresponse.h"
#include "listpresetsrequest.h"
#include "listpresetsresponse.h"
#include "readjobrequest.h"
#include "readjobresponse.h"
#include "readpipelinerequest.h"
#include "readpipelineresponse.h"
#include "readpresetrequest.h"
#include "readpresetresponse.h"
#include "testrolerequest.h"
#include "testroleresponse.h"
#include "updatepipelinerequest.h"
#include "updatepipelineresponse.h"
#include "updatepipelinenotificationsrequest.h"
#include "updatepipelinenotificationsresponse.h"
#include "updatepipelinestatusrequest.h"
#include "updatepipelinestatusresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElasticTranscoder
 * \brief Contains classess for accessing Amazon Elastic Transcoder.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ElasticTranscoderClient
 * \brief The ElasticTranscoderClient class provides access to the Amazon Elastic Transcoder service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 */

/*!
 * \brief Constructs a ElasticTranscoderClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticTranscoderClient::ElasticTranscoderClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticTranscoderClientPrivate(this), parent)
{
    Q_D(ElasticTranscoderClient);
    d->apiVersion = QStringLiteral("2012-09-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("elastictranscoder");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic Transcoder");
    d->serviceName = QStringLiteral("elastictranscoder");
}

/*!
 * \overload ElasticTranscoderClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElasticTranscoderClient::ElasticTranscoderClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticTranscoderClientPrivate(this), parent)
{
    Q_D(ElasticTranscoderClient);
    d->apiVersion = QStringLiteral("2012-09-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("elastictranscoder");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic Transcoder");
    d->serviceName = QStringLiteral("elastictranscoder");
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The CancelJob operation cancels an unfinished
 *
 * job> <note>
 *
 * You can only cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline from starting to process a
 * job while you're getting the job identifier, use <a>UpdatePipelineStatus</a> to temporarily pause the
 */
CancelJobResponse * ElasticTranscoderClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When you create a job, Elastic Transcoder returns JSON data that includes the values that you specified plus information
 * about the job that is
 *
 * created>
 *
 * If you have specified more than one output for your jobs (for example, one output for the Kindle Fire and another output
 * for the Apple iPhone 4s), you currently must use the Elastic Transcoder API to list the jobs (as opposed to the AWS
 */
CreateJobResponse * ElasticTranscoderClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * CreatePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The CreatePipeline operation creates a pipeline with settings that you
 */
CreatePipelineResponse * ElasticTranscoderClient::createPipeline(const CreatePipelineRequest &request)
{
    return qobject_cast<CreatePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * CreatePresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The CreatePreset operation creates a preset with settings that you
 *
 * specify> <b>
 *
 * Elastic Transcoder checks the CreatePreset settings to ensure that they meet Elastic Transcoder requirements and to
 * determine whether they comply with H.264 standards. If your settings are not valid for Elastic Transcoder, Elastic
 * Transcoder returns an HTTP 400 response (<code>ValidationException</code>) and does not create the preset. If the
 * settings are valid for Elastic Transcoder but aren't strictly compliant with the H.264 standard, Elastic Transcoder
 * creates the preset and returns a warning message in the response. This helps you determine whether your settings comply
 * with the H.264 standard while giving you greater flexibility with respect to the video that Elastic Transcoder
 *
 * produces> </b>
 *
 * Elastic Transcoder uses the H.264 video-compression format. For more information, see the International
 * Telecommunication Union publication <i>Recommendation ITU-T H.264: Advanced video coding for generic audiovisual
 */
CreatePresetResponse * ElasticTranscoderClient::createPreset(const CreatePresetRequest &request)
{
    return qobject_cast<CreatePresetResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * DeletePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeletePipeline operation removes a
 *
 * pipeline>
 *
 * You can only delete a pipeline that has never been used or that is not currently in use (doesn't contain any active
 * jobs). If the pipeline is currently in use, <code>DeletePipeline</code> returns an error.
 */
DeletePipelineResponse * ElasticTranscoderClient::deletePipeline(const DeletePipelineRequest &request)
{
    return qobject_cast<DeletePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * DeletePresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeletePreset operation removes a preset that you've added in an AWS
 *
 * region> <note>
 *
 * You can't delete the default presets that are included with Elastic
 */
DeletePresetResponse * ElasticTranscoderClient::deletePreset(const DeletePresetRequest &request)
{
    return qobject_cast<DeletePresetResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ListJobsByPipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListJobsByPipeline operation gets a list of the jobs currently in a
 *
 * pipeline>
 *
 * Elastic Transcoder returns all of the jobs currently in the specified pipeline. The response body contains one element
 * for each job that satisfies the search
 */
ListJobsByPipelineResponse * ElasticTranscoderClient::listJobsByPipeline(const ListJobsByPipelineRequest &request)
{
    return qobject_cast<ListJobsByPipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ListJobsByStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListJobsByStatus operation gets a list of jobs that have a specified status. The response body contains one element
 * for each job that satisfies the search
 */
ListJobsByStatusResponse * ElasticTranscoderClient::listJobsByStatus(const ListJobsByStatusRequest &request)
{
    return qobject_cast<ListJobsByStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ListPipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListPipelines operation gets a list of the pipelines associated with the current AWS
 */
ListPipelinesResponse * ElasticTranscoderClient::listPipelines(const ListPipelinesRequest &request)
{
    return qobject_cast<ListPipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ListPresetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ListPresets operation gets a list of the default presets included with Elastic Transcoder and the presets that
 * you've added in an AWS
 */
ListPresetsResponse * ElasticTranscoderClient::listPresets(const ListPresetsRequest &request)
{
    return qobject_cast<ListPresetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ReadJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ReadJob operation returns detailed information about a
 */
ReadJobResponse * ElasticTranscoderClient::readJob(const ReadJobRequest &request)
{
    return qobject_cast<ReadJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ReadPipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ReadPipeline operation gets detailed information about a
 */
ReadPipelineResponse * ElasticTranscoderClient::readPipeline(const ReadPipelineRequest &request)
{
    return qobject_cast<ReadPipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * ReadPresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ReadPreset operation gets detailed information about a
 */
ReadPresetResponse * ElasticTranscoderClient::readPreset(const ReadPresetRequest &request)
{
    return qobject_cast<ReadPresetResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * TestRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The TestRole operation tests the IAM role used to create the
 *
 * pipeline>
 *
 * The <code>TestRole</code> action lets you determine whether the IAM role you are using has sufficient permissions to let
 * Elastic Transcoder perform tasks associated with the transcoding process. The action attempts to assume the specified
 * IAM role, checks read access to the input and output buckets, and tries to send a test notification to Amazon SNS topics
 * that you
 */
TestRoleResponse * ElasticTranscoderClient::testRole(const TestRoleRequest &request)
{
    return qobject_cast<TestRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * UpdatePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use the <code>UpdatePipeline</code> operation to update settings for a
 *
 * pipeline> <b>
 *
 * When you change pipeline settings, your changes take effect immediately. Jobs that you have already submitted and that
 * Elastic Transcoder has not started to process are affected in addition to jobs that you submit after you change
 * settings.
 */
UpdatePipelineResponse * ElasticTranscoderClient::updatePipeline(const UpdatePipelineRequest &request)
{
    return qobject_cast<UpdatePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * UpdatePipelineNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * With the UpdatePipelineNotifications operation, you can update Amazon Simple Notification Service (Amazon SNS)
 * notifications for a
 *
 * pipeline>
 *
 * When you update notifications for a pipeline, Elastic Transcoder returns the values that you specified in the
 */
UpdatePipelineNotificationsResponse * ElasticTranscoderClient::updatePipelineNotifications(const UpdatePipelineNotificationsRequest &request)
{
    return qobject_cast<UpdatePipelineNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticTranscoderClient service, and returns a pointer to an
 * UpdatePipelineStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that the pipeline stops or restarts the
 * processing of
 *
 * jobs>
 *
 * Changing the pipeline status is useful if you want to cancel one or more jobs. You can't cancel jobs after Elastic
 * Transcoder has started processing them; if you pause the pipeline to which you submitted the jobs, you have more time to
 * get the job IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a> request.
 */
UpdatePipelineStatusResponse * ElasticTranscoderClient::updatePipelineStatus(const UpdatePipelineStatusRequest &request)
{
    return qobject_cast<UpdatePipelineStatusResponse *>(send(request));
}

/*!
 * \class QtAws::ElasticTranscoder::ElasticTranscoderClientPrivate
 * \brief The ElasticTranscoderClientPrivate class provides private implementation for ElasticTranscoderClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ElasticTranscoderClientPrivate object with public implementation \a q.
 */
ElasticTranscoderClientPrivate::ElasticTranscoderClientPrivate(ElasticTranscoderClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ElasticTranscoder
} // namespace QtAws
