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

#include "kinesisvideoclient.h"
#include "kinesisvideoclient_p.h"

#include "core/awssignaturev4.h"
#include "createsignalingchannelrequest.h"
#include "createsignalingchannelresponse.h"
#include "createstreamrequest.h"
#include "createstreamresponse.h"
#include "deletesignalingchannelrequest.h"
#include "deletesignalingchannelresponse.h"
#include "deletestreamrequest.h"
#include "deletestreamresponse.h"
#include "describeimagegenerationconfigurationrequest.h"
#include "describeimagegenerationconfigurationresponse.h"
#include "describenotificationconfigurationrequest.h"
#include "describenotificationconfigurationresponse.h"
#include "describesignalingchannelrequest.h"
#include "describesignalingchannelresponse.h"
#include "describestreamrequest.h"
#include "describestreamresponse.h"
#include "getdataendpointrequest.h"
#include "getdataendpointresponse.h"
#include "getsignalingchannelendpointrequest.h"
#include "getsignalingchannelendpointresponse.h"
#include "listsignalingchannelsrequest.h"
#include "listsignalingchannelsresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtagsforstreamrequest.h"
#include "listtagsforstreamresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "tagstreamrequest.h"
#include "tagstreamresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "untagstreamrequest.h"
#include "untagstreamresponse.h"
#include "updatedataretentionrequest.h"
#include "updatedataretentionresponse.h"
#include "updateimagegenerationconfigurationrequest.h"
#include "updateimagegenerationconfigurationresponse.h"
#include "updatenotificationconfigurationrequest.h"
#include "updatenotificationconfigurationresponse.h"
#include "updatesignalingchannelrequest.h"
#include "updatesignalingchannelresponse.h"
#include "updatestreamrequest.h"
#include "updatestreamresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisVideo
 * \brief Contains classess for accessing Amazon Kinesis Video Streams.
 *
 * \inmodule QtAwsKinesisVideo
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::KinesisVideoClient
 * \brief The KinesisVideoClient class provides access to the Amazon Kinesis Video Streams service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideo
 *
 */

/*!
 * \brief Constructs a KinesisVideoClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisVideoClient::KinesisVideoClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoClientPrivate(this), parent)
{
    Q_D(KinesisVideoClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * \overload KinesisVideoClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisVideoClient::KinesisVideoClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoClientPrivate(this), parent)
{
    Q_D(KinesisVideoClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * CreateSignalingChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a signaling channel.
 *
 * </p
 *
 * <code>CreateSignalingChannel</code> is an asynchronous
 */
CreateSignalingChannelResponse * KinesisVideoClient::createSignalingChannel(const CreateSignalingChannelRequest &request)
{
    return qobject_cast<CreateSignalingChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * CreateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Kinesis video stream.
 *
 * </p
 *
 * When you create a new stream, Kinesis Video Streams assigns it a version number. When you change the stream's metadata,
 * Kinesis Video Streams updates the version.
 *
 * </p
 *
 * <code>CreateStream</code> is an asynchronous
 *
 * operation>
 *
 * For information about how the service works, see <a
 * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/how-it-works.html">How it Works</a>.
 *
 * </p
 *
 * You must have permissions for the <code>KinesisVideo:CreateStream</code>
 */
CreateStreamResponse * KinesisVideoClient::createStream(const CreateStreamRequest &request)
{
    return qobject_cast<CreateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DeleteSignalingChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified signaling channel. <code>DeleteSignalingChannel</code> is an asynchronous operation. If you don't
 * specify the channel's current version, the most recent version is
 */
DeleteSignalingChannelResponse * KinesisVideoClient::deleteSignalingChannel(const DeleteSignalingChannelRequest &request)
{
    return qobject_cast<DeleteSignalingChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DeleteStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Kinesis video stream and the data contained in the stream.
 *
 * </p
 *
 * This method marks the stream for deletion, and makes the data in the stream inaccessible
 *
 * immediately>
 *
 *
 * </p
 *
 * To ensure that you have the latest version of the stream before deleting it, you can specify the stream version. Kinesis
 * Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new version
 * number. To get the latest stream version, use the <code>DescribeStream</code> API.
 *
 * </p
 *
 * This operation requires permission for the <code>KinesisVideo:DeleteStream</code>
 */
DeleteStreamResponse * KinesisVideoClient::deleteStream(const DeleteStreamRequest &request)
{
    return qobject_cast<DeleteStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DescribeImageGenerationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the <code>ImageGenerationConfiguration</code> for a given Kinesis video
 */
DescribeImageGenerationConfigurationResponse * KinesisVideoClient::describeImageGenerationConfiguration(const DescribeImageGenerationConfigurationRequest &request)
{
    return qobject_cast<DescribeImageGenerationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DescribeNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the <code>NotificationConfiguration</code> for a given Kinesis video
 */
DescribeNotificationConfigurationResponse * KinesisVideoClient::describeNotificationConfiguration(const DescribeNotificationConfigurationRequest &request)
{
    return qobject_cast<DescribeNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DescribeSignalingChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the most current information about the signaling channel. You must specify either the name or the Amazon
 * Resource Name (ARN) of the channel that you want to
 */
DescribeSignalingChannelResponse * KinesisVideoClient::describeSignalingChannel(const DescribeSignalingChannelRequest &request)
{
    return qobject_cast<DescribeSignalingChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DescribeStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the most current information about the specified stream. You must specify either the <code>StreamName</code> or
 * the <code>StreamARN</code>.
 */
DescribeStreamResponse * KinesisVideoClient::describeStream(const DescribeStreamRequest &request)
{
    return qobject_cast<DescribeStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * GetDataEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an endpoint for a specified stream for either reading or writing. Use this endpoint in your application to read
 * from the specified stream (using the <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or write
 * to it (using the <code>PutMedia</code> operation).
 *
 * </p <note>
 *
 * The returned endpoint does not have the API name appended. The client needs to add the API name to the returned
 *
 * endpoint> </note>
 *
 * In the request, specify the stream either by <code>StreamName</code> or
 */
GetDataEndpointResponse * KinesisVideoClient::getDataEndpoint(const GetDataEndpointRequest &request)
{
    return qobject_cast<GetDataEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * GetSignalingChannelEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides an endpoint for the specified signaling channel to send and receive messages. This API uses the
 * <code>SingleMasterChannelEndpointConfiguration</code> input parameter, which consists of the <code>Protocols</code> and
 * <code>Role</code>
 *
 * properties>
 *
 * <code>Protocols</code> is used to determine the communication mechanism. For example, if you specify <code>WSS</code> as
 * the protocol, this API produces a secure websocket endpoint. If you specify <code>HTTPS</code> as the protocol, this API
 * generates an HTTPS endpoint.
 *
 * </p
 *
 * <code>Role</code> determines the messaging permissions. A <code>MASTER</code> role results in this API generating an
 * endpoint that a client can use to communicate with any of the viewers on the channel. A <code>VIEWER</code> role results
 * in this API generating an endpoint that a client can use to communicate only with a <code>MASTER</code>.
 */
GetSignalingChannelEndpointResponse * KinesisVideoClient::getSignalingChannelEndpoint(const GetSignalingChannelEndpointRequest &request)
{
    return qobject_cast<GetSignalingChannelEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * ListSignalingChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>ChannelInfo</code> objects. Each object describes a signaling channel. To retrieve only those
 * channels that satisfy a specific condition, you can specify a
 */
ListSignalingChannelsResponse * KinesisVideoClient::listSignalingChannels(const ListSignalingChannelsRequest &request)
{
    return qobject_cast<ListSignalingChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>StreamInfo</code> objects. Each object describes a stream. To retrieve only streams that
 * satisfy a specific condition, you can specify a <code>StreamNameCondition</code>.
 */
ListStreamsResponse * KinesisVideoClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags associated with the specified signaling
 */
ListTagsForResourceResponse * KinesisVideoClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * ListTagsForStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags associated with the specified
 *
 * stream>
 *
 * In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>.
 */
ListTagsForStreamResponse * KinesisVideoClient::listTagsForStream(const ListTagsForStreamRequest &request)
{
    return qobject_cast<ListTagsForStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a signaling channel. A <i>tag</i> is a key-value pair (the value is optional) that you can
 * define and assign to Amazon Web Services resources. If you specify a tag that already exists, the tag value is replaced
 * with the value that you specify in the request. For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>Billing and Cost Management and Cost Management User
 */
TagResourceResponse * KinesisVideoClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * TagStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the value is optional) that you can define and
 * assign to Amazon Web Services resources. If you specify a tag that already exists, the tag value is replaced with the
 * value that you specify in the request. For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>Billing and Cost Management and Cost Management User Guide</i>.
 *
 * </p
 *
 * You must provide either the <code>StreamName</code> or the
 *
 * <code>StreamARN</code>>
 *
 * This operation requires permission for the <code>KinesisVideo:TagStream</code>
 *
 * action>
 *
 * A Kinesis video stream can support up to 50
 */
TagStreamResponse * KinesisVideoClient::tagStream(const TagStreamRequest &request)
{
    return qobject_cast<TagStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a signaling channel. In the request, specify only a tag key or keys; don't specify the
 * value. If you specify a tag key that does not exist, it's
 */
UntagResourceResponse * KinesisVideoClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UntagStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a stream. In the request, specify only a tag key or keys; don't specify the value. If you
 * specify a tag key that does not exist, it's
 *
 * ignored>
 *
 * In the request, you must provide the <code>StreamName</code> or
 */
UntagStreamResponse * KinesisVideoClient::untagStream(const UntagStreamRequest &request)
{
    return qobject_cast<UntagStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateDataRetentionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Increases or decreases the stream's data retention period by the value that you specify. To indicate whether you want to
 * increase or decrease the data retention period, specify the <code>Operation</code> parameter in the request body. In the
 * request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>.
 *
 * </p <note>
 *
 * The retention period that you specify replaces the current
 *
 * value> </note>
 *
 * This operation requires permission for the <code>KinesisVideo:UpdateDataRetention</code>
 *
 * action>
 *
 * Changing the data retention period affects the data in the stream as
 *
 * follows> <ul> <li>
 *
 * If the data retention period is increased, existing data is retained for the new retention period. For example, if the
 * data retention period is increased from one hour to seven hours, all existing data is retained for seven
 *
 * hours> </li> <li>
 *
 * If the data retention period is decreased, existing data is retained for the new retention period. For example, if the
 * data retention period is decreased from seven hours to one hour, all existing data is retained for one hour, and any
 * data older than one hour is deleted
 */
UpdateDataRetentionResponse * KinesisVideoClient::updateDataRetention(const UpdateDataRetentionRequest &request)
{
    return qobject_cast<UpdateDataRetentionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateImageGenerationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>StreamInfo</code> and <code>ImageProcessingConfiguration</code>
 */
UpdateImageGenerationConfigurationResponse * KinesisVideoClient::updateImageGenerationConfiguration(const UpdateImageGenerationConfigurationRequest &request)
{
    return qobject_cast<UpdateImageGenerationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the notification information for a
 */
UpdateNotificationConfigurationResponse * KinesisVideoClient::updateNotificationConfiguration(const UpdateNotificationConfigurationRequest &request)
{
    return qobject_cast<UpdateNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateSignalingChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the existing signaling channel. This is an asynchronous operation and takes time to complete.
 *
 * </p
 *
 * If the <code>MessageTtlSeconds</code> value is updated (either increased or reduced), it only applies to new messages
 * sent via this channel after it's been updated. Existing messages are still expired as per the previous
 * <code>MessageTtlSeconds</code>
 */
UpdateSignalingChannelResponse * KinesisVideoClient::updateSignalingChannel(const UpdateSignalingChannelRequest &request)
{
    return qobject_cast<UpdateSignalingChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates stream metadata, such as the device name and media
 *
 * type>
 *
 * You must provide the stream name or the Amazon Resource Name (ARN) of the
 *
 * stream>
 *
 * To make sure that you have the latest version of the stream before updating it, you can specify the stream version.
 * Kinesis Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new
 * version number. To get the latest stream version, use the <code>DescribeStream</code> API.
 *
 * </p
 *
 * <code>UpdateStream</code> is an asynchronous operation, and takes time to
 */
UpdateStreamResponse * KinesisVideoClient::updateStream(const UpdateStreamRequest &request)
{
    return qobject_cast<UpdateStreamResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisVideo::KinesisVideoClientPrivate
 * \brief The KinesisVideoClientPrivate class provides private implementation for KinesisVideoClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoClientPrivate object with public implementation \a q.
 */
KinesisVideoClientPrivate::KinesisVideoClientPrivate(KinesisVideoClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisVideo
} // namespace QtAws
