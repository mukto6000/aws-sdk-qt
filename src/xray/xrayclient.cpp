/*
    Copyright 2013-2020 Paul Colby

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

#include "xrayclient.h"
#include "xrayclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgettracesrequest.h"
#include "batchgettracesresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "createsamplingrulerequest.h"
#include "createsamplingruleresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deletesamplingrulerequest.h"
#include "deletesamplingruleresponse.h"
#include "getencryptionconfigrequest.h"
#include "getencryptionconfigresponse.h"
#include "getgrouprequest.h"
#include "getgroupresponse.h"
#include "getgroupsrequest.h"
#include "getgroupsresponse.h"
#include "getsamplingrulesrequest.h"
#include "getsamplingrulesresponse.h"
#include "getsamplingstatisticsummariesrequest.h"
#include "getsamplingstatisticsummariesresponse.h"
#include "getsamplingtargetsrequest.h"
#include "getsamplingtargetsresponse.h"
#include "getservicegraphrequest.h"
#include "getservicegraphresponse.h"
#include "gettimeseriesservicestatisticsrequest.h"
#include "gettimeseriesservicestatisticsresponse.h"
#include "gettracegraphrequest.h"
#include "gettracegraphresponse.h"
#include "gettracesummariesrequest.h"
#include "gettracesummariesresponse.h"
#include "putencryptionconfigrequest.h"
#include "putencryptionconfigresponse.h"
#include "puttelemetryrecordsrequest.h"
#include "puttelemetryrecordsresponse.h"
#include "puttracesegmentsrequest.h"
#include "puttracesegmentsresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updatesamplingrulerequest.h"
#include "updatesamplingruleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::XRay
 * \brief Contains classess for accessing AWS X-Ray.
 *
 * \inmodule QtAwsXRay
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::XRayClient
 * \brief The XRayClient class provides access to the AWS X-Ray service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 */

/*!
 * \brief Constructs a XRayClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
XRayClient::XRayClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new XRayClientPrivate(this), parent)
{
    Q_D(XRayClient);
    d->apiVersion = QStringLiteral("2016-04-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("xray");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS X-Ray");
    d->serviceName = QStringLiteral("xray");
}

/*!
 * \overload XRayClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
XRayClient::XRayClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new XRayClientPrivate(this), parent)
{
    Q_D(XRayClient);
    d->apiVersion = QStringLiteral("2016-04-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("xray");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS X-Ray");
    d->serviceName = QStringLiteral("xray");
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * BatchGetTracesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of traces specified by ID. Each trace is a collection of segment documents that originates from a
 * single request. Use <code>GetTraceSummaries</code> to get a list of trace
 */
BatchGetTracesResponse * XRayClient::batchGetTraces(const BatchGetTracesRequest &request)
{
    return qobject_cast<BatchGetTracesResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group resource with a name and a filter expression.
 */
CreateGroupResponse * XRayClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * CreateSamplingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a rule to control sampling behavior for instrumented applications. Services retrieve rules with
 * <a>GetSamplingRules</a>, and evaluate each rule in ascending order of <i>priority</i> for each request. If a rule
 * matches, the service records a trace, borrowing it from the reservoir size. After 10 seconds, the service reports back
 * to X-Ray with <a>GetSamplingTargets</a> to get updated versions of each in-use rule. The updated rule contains a trace
 * quota that the service can use instead of borrowing from the
 */
CreateSamplingRuleResponse * XRayClient::createSamplingRule(const CreateSamplingRuleRequest &request)
{
    return qobject_cast<CreateSamplingRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a group
 */
DeleteGroupResponse * XRayClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * DeleteSamplingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a sampling
 */
DeleteSamplingRuleResponse * XRayClient::deleteSamplingRule(const DeleteSamplingRuleRequest &request)
{
    return qobject_cast<DeleteSamplingRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current encryption configuration for X-Ray
 */
GetEncryptionConfigResponse * XRayClient::getEncryptionConfig(const GetEncryptionConfigRequest &request)
{
    return qobject_cast<GetEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves group resource
 */
GetGroupResponse * XRayClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all active group
 */
GetGroupsResponse * XRayClient::getGroups(const GetGroupsRequest &request)
{
    return qobject_cast<GetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetSamplingRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all sampling
 */
GetSamplingRulesResponse * XRayClient::getSamplingRules(const GetSamplingRulesRequest &request)
{
    return qobject_cast<GetSamplingRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetSamplingStatisticSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about recent sampling results for all sampling
 */
GetSamplingStatisticSummariesResponse * XRayClient::getSamplingStatisticSummaries(const GetSamplingStatisticSummariesRequest &request)
{
    return qobject_cast<GetSamplingStatisticSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetSamplingTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a sampling quota for rules that the service is using to sample requests.
 */
GetSamplingTargetsResponse * XRayClient::getSamplingTargets(const GetSamplingTargetsRequest &request)
{
    return qobject_cast<GetSamplingTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetServiceGraphResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a document that describes services that process incoming requests, and downstream services that they call as a
 * result. Root services process incoming requests and make calls to downstream services. Root services are applications
 * that use the AWS X-Ray SDK. Downstream services can be other applications, AWS resources, HTTP web APIs, or SQL
 */
GetServiceGraphResponse * XRayClient::getServiceGraph(const GetServiceGraphRequest &request)
{
    return qobject_cast<GetServiceGraphResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetTimeSeriesServiceStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get an aggregation of service statistics defined by a specific time
 */
GetTimeSeriesServiceStatisticsResponse * XRayClient::getTimeSeriesServiceStatistics(const GetTimeSeriesServiceStatisticsRequest &request)
{
    return qobject_cast<GetTimeSeriesServiceStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetTraceGraphResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a service graph for one or more specific trace
 */
GetTraceGraphResponse * XRayClient::getTraceGraph(const GetTraceGraphRequest &request)
{
    return qobject_cast<GetTraceGraphResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * GetTraceSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves IDs and metadata for traces available for a specified time frame using an optional filter. To get the full
 * traces, pass the trace IDs to
 *
 * <code>BatchGetTraces</code>>
 *
 * A filter expression can target traced requests that hit specific service nodes or edges, have errors, or come from a
 * known user. For example, the following filter expression targets traces that pass through
 *
 * <code>api.example.com</code>>
 *
 * <code>service("api.example.com")</code>
 *
 * </p
 *
 * This filter expression finds traces that have an annotation named <code>account</code> with the value
 *
 * <code>12345</code>>
 *
 * <code>annotation.account = "12345"</code>
 *
 * </p
 *
 * For a full list of indexed fields and keywords that you can use in filter expressions, see <a
 * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-console-filters.html">Using Filter Expressions</a> in the
 * <i>AWS X-Ray Developer
 */
GetTraceSummariesResponse * XRayClient::getTraceSummaries(const GetTraceSummariesRequest &request)
{
    return qobject_cast<GetTraceSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * PutEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the encryption configuration for X-Ray
 */
PutEncryptionConfigResponse * XRayClient::putEncryptionConfig(const PutEncryptionConfigRequest &request)
{
    return qobject_cast<PutEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * PutTelemetryRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by the AWS X-Ray daemon to upload
 */
PutTelemetryRecordsResponse * XRayClient::putTelemetryRecords(const PutTelemetryRecordsRequest &request)
{
    return qobject_cast<PutTelemetryRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * PutTraceSegmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads segment documents to AWS X-Ray. The X-Ray SDK generates segment documents and sends them to the X-Ray daemon,
 * which uploads them in batches. A segment document can be a completed segment, an in-progress segment, or an array of
 *
 * subsegments>
 *
 * Segments must include the following fields. For the full segment document schema, see <a
 * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">AWS X-Ray Segment Documents</a>
 * in the <i>AWS X-Ray Developer
 *
 * Guide</i>> <p class="title"> <b>Required Segment Document Fields</b>
 *
 * </p <ul> <li>
 *
 * <code>name</code> - The name of the service that handled the
 *
 * request> </li> <li>
 *
 * <code>id</code> - A 64-bit identifier for the segment, unique among segments in the same trace, in 16 hexadecimal
 *
 * digits> </li> <li>
 *
 * <code>trace_id</code> - A unique identifier that connects all segments and subsegments originating from a single client
 *
 * request> </li> <li>
 *
 * <code>start_time</code> - Time the segment or subsegment was created, in floating point seconds in epoch time, accurate
 * to milliseconds. For example, <code>1480615200.010</code> or
 *
 * <code>1.480615200010E9</code>> </li> <li>
 *
 * <code>end_time</code> - Time the segment or subsegment was closed. For example, <code>1480615200.090</code> or
 * <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
 *
 * <code>in_progress</code>> </li> <li>
 *
 * <code>in_progress</code> - Set to <code>true</code> instead of specifying an <code>end_time</code> to record that a
 * segment has been started, but is not complete. Send an in progress segment when your application receives a request that
 * will take a long time to serve, to trace the fact that the request was received. When the response is sent, send the
 * complete segment to overwrite the in-progress
 *
 * segment> </li> </ul>
 *
 * A <code>trace_id</code> consists of three numbers separated by hyphens. For example,
 * 1-58406520-a006649127e371903a2de979. This
 *
 * includes> <p class="title"> <b>Trace ID Format</b>
 *
 * </p <ul> <li>
 *
 * The version number, i.e.
 *
 * <code>1</code>> </li> <li>
 *
 * The time of the original request, in Unix epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016
 * PST in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
 *
 * hexadecimal> </li> <li>
 *
 * A 96-bit identifier for the trace, globally unique, in 24 hexadecimal
 */
PutTraceSegmentsResponse * XRayClient::putTraceSegments(const PutTraceSegmentsRequest &request)
{
    return qobject_cast<PutTraceSegmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a group
 */
UpdateGroupResponse * XRayClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the XRayClient service, and returns a pointer to an
 * UpdateSamplingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a sampling rule's
 */
UpdateSamplingRuleResponse * XRayClient::updateSamplingRule(const UpdateSamplingRuleRequest &request)
{
    return qobject_cast<UpdateSamplingRuleResponse *>(send(request));
}

/*!
 * \class QtAws::XRay::XRayClientPrivate
 * \brief The XRayClientPrivate class provides private implementation for XRayClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a XRayClientPrivate object with public implementation \a q.
 */
XRayClientPrivate::XRayClientPrivate(XRayClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace XRay
} // namespace QtAws
