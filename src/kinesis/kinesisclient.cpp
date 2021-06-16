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

#include "kinesisclient.h"
#include "kinesisclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstostreamrequest.h"
#include "addtagstostreamresponse.h"
#include "createstreamrequest.h"
#include "createstreamresponse.h"
#include "decreasestreamretentionperiodrequest.h"
#include "decreasestreamretentionperiodresponse.h"
#include "deletestreamrequest.h"
#include "deletestreamresponse.h"
#include "deregisterstreamconsumerrequest.h"
#include "deregisterstreamconsumerresponse.h"
#include "describelimitsrequest.h"
#include "describelimitsresponse.h"
#include "describestreamrequest.h"
#include "describestreamresponse.h"
#include "describestreamconsumerrequest.h"
#include "describestreamconsumerresponse.h"
#include "describestreamsummaryrequest.h"
#include "describestreamsummaryresponse.h"
#include "disableenhancedmonitoringrequest.h"
#include "disableenhancedmonitoringresponse.h"
#include "enableenhancedmonitoringrequest.h"
#include "enableenhancedmonitoringresponse.h"
#include "getrecordsrequest.h"
#include "getrecordsresponse.h"
#include "getsharditeratorrequest.h"
#include "getsharditeratorresponse.h"
#include "increasestreamretentionperiodrequest.h"
#include "increasestreamretentionperiodresponse.h"
#include "listshardsrequest.h"
#include "listshardsresponse.h"
#include "liststreamconsumersrequest.h"
#include "liststreamconsumersresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"
#include "listtagsforstreamrequest.h"
#include "listtagsforstreamresponse.h"
#include "mergeshardsrequest.h"
#include "mergeshardsresponse.h"
#include "putrecordrequest.h"
#include "putrecordresponse.h"
#include "putrecordsrequest.h"
#include "putrecordsresponse.h"
#include "registerstreamconsumerrequest.h"
#include "registerstreamconsumerresponse.h"
#include "removetagsfromstreamrequest.h"
#include "removetagsfromstreamresponse.h"
#include "splitshardrequest.h"
#include "splitshardresponse.h"
#include "startstreamencryptionrequest.h"
#include "startstreamencryptionresponse.h"
#include "stopstreamencryptionrequest.h"
#include "stopstreamencryptionresponse.h"
#include "subscribetoshardrequest.h"
#include "subscribetoshardresponse.h"
#include "updateshardcountrequest.h"
#include "updateshardcountresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Kinesis
 * \brief Contains classess for accessing Amazon Kinesis.
 *
 * \inmodule QtAwsKinesis
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::KinesisClient
 * \brief The KinesisClient class provides access to the Amazon Kinesis service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 */

/*!
 * \brief Constructs a KinesisClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisClient::KinesisClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisClientPrivate(this), parent)
{
    Q_D(KinesisClient);
    d->apiVersion = QStringLiteral("2013-12-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesis");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis");
    d->serviceName = QStringLiteral("kinesis");
}

/*!
 * \overload KinesisClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisClient::KinesisClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisClientPrivate(this), parent)
{
    Q_D(KinesisClient);
    d->apiVersion = QStringLiteral("2013-12-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesis");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis");
    d->serviceName = QStringLiteral("kinesis");
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * AddTagsToStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for the specified Kinesis data stream. Each time you invoke this operation, you can specify up to
 * 10 tags. If you want to add more than 10 tags to your stream, you can invoke this operation multiple times. In total,
 * each stream can have up to 50
 *
 * tags>
 *
 * If tags have already been assigned to the stream, <code>AddTagsToStream</code> overwrites any existing tags that
 * correspond to the specified tag
 *
 * keys>
 *
 * <a>AddTagsToStream</a> has a limit of five transactions per second per
 */
AddTagsToStreamResponse * KinesisClient::addTagsToStream(const AddTagsToStreamRequest &request)
{
    return qobject_cast<AddTagsToStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * CreateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Kinesis data stream. A stream captures and transports data records that are continuously emitted from
 * different data sources or <i>producers</i>. Scale-out within a stream is explicitly supported by means of shards, which
 * are uniquely identified groups of data records in a
 *
 * stream>
 *
 * You specify and control the number of shards that a stream is composed of. Each shard can support reads up to five
 * transactions per second, up to a maximum data read total of 2 MB per second. Each shard can support writes up to 1,000
 * records per second, up to a maximum data write total of 1 MB per second. If the amount of data input increases or
 * decreases, you can add or remove
 *
 * shards>
 *
 * The stream name identifies the stream. The name is scoped to the AWS account used by the application. It is also scoped
 * by AWS Region. That is, two streams in two different accounts can have the same name, and two streams in the same
 * account, but in two different Regions, can have the same
 *
 * name>
 *
 * <code>CreateStream</code> is an asynchronous operation. Upon receiving a <code>CreateStream</code> request, Kinesis Data
 * Streams immediately returns and sets the stream status to <code>CREATING</code>. After the stream is created, Kinesis
 * Data Streams sets the stream status to <code>ACTIVE</code>. You should perform read and write operations only on an
 * <code>ACTIVE</code> stream.
 *
 * </p
 *
 * You receive a <code>LimitExceededException</code> when making a <code>CreateStream</code> request when you try to do one
 * of the
 *
 * following> <ul> <li>
 *
 * Have more than five streams in the <code>CREATING</code> state at any point in
 *
 * time> </li> <li>
 *
 * Create more shards than are authorized for your
 *
 * account> </li> </ul>
 *
 * For the default shard limit for an AWS account, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Amazon Kinesis Data Streams
 * Limits</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>. To increase this limit, <a
 * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">contact AWS
 *
 * Support</a>>
 *
 * You can use <code>DescribeStream</code> to check the stream status, which is returned in
 *
 * <code>StreamStatus</code>>
 *
 * <a>CreateStream</a> has a limit of five transactions per second per
 */
CreateStreamResponse * KinesisClient::createStream(const CreateStreamRequest &request)
{
    return qobject_cast<CreateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DecreaseStreamRetentionPeriodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Decreases the Kinesis data stream's retention period, which is the length of time data records are accessible after they
 * are added to the stream. The minimum value of a stream's retention period is 24
 *
 * hours>
 *
 * This operation may result in lost data. For example, if the stream's retention period is 48 hours and is decreased to 24
 * hours, any data already in the stream that is older than 24 hours is
 */
DecreaseStreamRetentionPeriodResponse * KinesisClient::decreaseStreamRetentionPeriod(const DecreaseStreamRetentionPeriodRequest &request)
{
    return qobject_cast<DecreaseStreamRetentionPeriodResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DeleteStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Kinesis data stream and all its shards and data. You must shut down any applications that are operating on the
 * stream before you delete the stream. If an application attempts to operate on a deleted stream, it receives the
 * exception
 *
 * <code>ResourceNotFoundException</code>>
 *
 * If the stream is in the <code>ACTIVE</code> state, you can delete it. After a <code>DeleteStream</code> request, the
 * specified stream is in the <code>DELETING</code> state until Kinesis Data Streams completes the
 *
 * deletion>
 *
 * <b>Note:</b> Kinesis Data Streams might continue to accept data read and write operations, such as <a>PutRecord</a>,
 * <a>PutRecords</a>, and <a>GetRecords</a>, on a stream in the <code>DELETING</code> state until the stream deletion is
 *
 * complete>
 *
 * When you delete a stream, any shards in that stream are also deleted, and any tags are dissociated from the
 *
 * stream>
 *
 * You can use the <a>DescribeStream</a> operation to check the state of the stream, which is returned in
 *
 * <code>StreamStatus</code>>
 *
 * <a>DeleteStream</a> has a limit of five transactions per second per
 */
DeleteStreamResponse * KinesisClient::deleteStream(const DeleteStreamRequest &request)
{
    return qobject_cast<DeleteStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DeregisterStreamConsumerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * To deregister a consumer, provide its ARN. Alternatively, you can provide the ARN of the data stream and the name you
 * gave the consumer when you registered it. You may also provide all three parameters, as long as they don't conflict with
 * each other. If you don't know the name or ARN of the consumer that you want to deregister, you can use the
 * <a>ListStreamConsumers</a> operation to get a list of the descriptions of all the consumers that are currently
 * registered with a given data stream. The description of a consumer contains its name and
 *
 * ARN>
 *
 * This operation has a limit of five transactions per second per
 */
DeregisterStreamConsumerResponse * KinesisClient::deregisterStreamConsumer(const DeregisterStreamConsumerRequest &request)
{
    return qobject_cast<DeregisterStreamConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DescribeLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the shard limits and usage for the
 *
 * account>
 *
 * If you update your account limits, the old limits might be returned for a few
 *
 * minutes>
 *
 * This operation has a limit of one transaction per second per
 */
DescribeLimitsResponse * KinesisClient::describeLimits(const DescribeLimitsRequest &request)
{
    return qobject_cast<DescribeLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DescribeStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified Kinesis data
 *
 * stream>
 *
 * The information returned includes the stream name, Amazon Resource Name (ARN), creation time, enhanced metric
 * configuration, and shard map. The shard map is an array of shard objects. For each shard object, there is the hash key
 * and sequence number ranges that the shard spans, and the IDs of any earlier shards that played in a role in creating the
 * shard. Every record ingested in the stream is identified by a sequence number, which is assigned when the record is put
 * into the
 *
 * stream>
 *
 * You can limit the number of shards returned by each call. For more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-retrieve-shards.html">Retrieving Shards from
 * a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * There are no guarantees about the chronological order shards returned. To process shards in chronological order, use the
 * ID of the parent shard to track the lineage to the oldest
 *
 * shard>
 *
 * This operation has a limit of 10 transactions per second per
 */
DescribeStreamResponse * KinesisClient::describeStream(const DescribeStreamRequest &request)
{
    return qobject_cast<DescribeStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DescribeStreamConsumerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * To get the description of a registered consumer, provide the ARN of the consumer. Alternatively, you can provide the ARN
 * of the data stream and the name you gave the consumer when you registered it. You may also provide all three parameters,
 * as long as they don't conflict with each other. If you don't know the name or ARN of the consumer that you want to
 * describe, you can use the <a>ListStreamConsumers</a> operation to get a list of the descriptions of all the consumers
 * that are currently registered with a given data
 *
 * stream>
 *
 * This operation has a limit of 20 transactions per second per
 */
DescribeStreamConsumerResponse * KinesisClient::describeStreamConsumer(const DescribeStreamConsumerRequest &request)
{
    return qobject_cast<DescribeStreamConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DescribeStreamSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a summarized description of the specified Kinesis data stream without the shard
 *
 * list>
 *
 * The information returned includes the stream name, Amazon Resource Name (ARN), status, record retention period,
 * approximate creation time, monitoring, encryption details, and open shard count.
 */
DescribeStreamSummaryResponse * KinesisClient::describeStreamSummary(const DescribeStreamSummaryRequest &request)
{
    return qobject_cast<DescribeStreamSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * DisableEnhancedMonitoringResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables enhanced
 */
DisableEnhancedMonitoringResponse * KinesisClient::disableEnhancedMonitoring(const DisableEnhancedMonitoringRequest &request)
{
    return qobject_cast<DisableEnhancedMonitoringResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * EnableEnhancedMonitoringResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables enhanced Kinesis data stream monitoring for shard-level
 */
EnableEnhancedMonitoringResponse * KinesisClient::enableEnhancedMonitoring(const EnableEnhancedMonitoringRequest &request)
{
    return qobject_cast<EnableEnhancedMonitoringResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * GetRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets data records from a Kinesis data stream's
 *
 * shard>
 *
 * Specify a shard iterator using the <code>ShardIterator</code> parameter. The shard iterator specifies the position in
 * the shard from which you want to start reading data records sequentially. If there are no records available in the
 * portion of the shard that the iterator points to, <a>GetRecords</a> returns an empty list. It might take multiple calls
 * to get to a portion of the shard that contains
 *
 * records>
 *
 * You can scale by provisioning multiple shards per stream while considering service limits (for more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Amazon Kinesis Data Streams
 * Limits</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>). Your application should have one thread per
 * shard, each reading continuously from its stream. To read from a stream continually, call <a>GetRecords</a> in a loop.
 * Use <a>GetShardIterator</a> to get the shard iterator to specify in the first <a>GetRecords</a> call. <a>GetRecords</a>
 * returns a new shard iterator in <code>NextShardIterator</code>. Specify the shard iterator returned in
 * <code>NextShardIterator</code> in subsequent calls to <a>GetRecords</a>. If the shard has been closed, the shard
 * iterator can't return more data and <a>GetRecords</a> returns <code>null</code> in <code>NextShardIterator</code>. You
 * can terminate the loop when the shard is closed, or when the shard iterator reaches the record with the sequence number
 * or other attribute that marks it as the last record to
 *
 * process>
 *
 * Each data record can be up to 1 MiB in size, and each shard can read up to 2 MiB per second. You can ensure that your
 * calls don't exceed the maximum supported size or throughput by using the <code>Limit</code> parameter to specify the
 * maximum number of records that <a>GetRecords</a> can return. Consider your average record size when determining this
 * limit. The maximum number of records that can be returned per call is
 *
 * 10,000>
 *
 * The size of the data returned by <a>GetRecords</a> varies depending on the utilization of the shard. The maximum size of
 * data that <a>GetRecords</a> can return is 10 MiB. If a call returns this amount of data, subsequent calls made within
 * the next 5 seconds throw <code>ProvisionedThroughputExceededException</code>. If there is insufficient provisioned
 * throughput on the stream, subsequent calls made within the next 1 second throw
 * <code>ProvisionedThroughputExceededException</code>. <a>GetRecords</a> doesn't return any data when it throws an
 * exception. For this reason, we recommend that you wait 1 second between calls to <a>GetRecords</a>. However, it's
 * possible that the application will get exceptions for longer than 1
 *
 * second>
 *
 * To detect whether the application is falling behind in processing, you can use the <code>MillisBehindLatest</code>
 * response attribute. You can also monitor the stream using CloudWatch metrics and other mechanisms (see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring.html">Monitoring</a> in the <i>Amazon Kinesis Data
 * Streams Developer
 *
 * Guide</i>)>
 *
 * Each Amazon Kinesis record includes a value, <code>ApproximateArrivalTimestamp</code>, that is set when a stream
 * successfully receives and stores a record. This is commonly referred to as a server-side time stamp, whereas a
 * client-side time stamp is set when a data producer creates or sends the record to a stream (a data producer is any data
 * source putting data records into a stream, for example with <a>PutRecords</a>). The time stamp has millisecond
 * precision. There are no guarantees about the time stamp accuracy, or that the time stamp is always increasing. For
 * example, records in a shard or across a stream might have time stamps that are out of
 *
 * order>
 *
 * This operation has a limit of five transactions per second per
 */
GetRecordsResponse * KinesisClient::getRecords(const GetRecordsRequest &request)
{
    return qobject_cast<GetRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * GetShardIteratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Amazon Kinesis shard iterator. A shard iterator expires 5 minutes after it is returned to the
 *
 * requester>
 *
 * A shard iterator specifies the shard position from which to start reading data records sequentially. The position is
 * specified using the sequence number of a data record in a shard. A sequence number is the identifier associated with
 * every record ingested in the stream, and is assigned when a record is put into the stream. Each stream has one or more
 *
 * shards>
 *
 * You must specify the shard iterator type. For example, you can set the <code>ShardIteratorType</code> parameter to read
 * exactly from the position denoted by a specific sequence number by using the <code>AT_SEQUENCE_NUMBER</code> shard
 * iterator type. Alternatively, the parameter can read right after the sequence number by using the
 * <code>AFTER_SEQUENCE_NUMBER</code> shard iterator type, using sequence numbers returned by earlier calls to
 * <a>PutRecord</a>, <a>PutRecords</a>, <a>GetRecords</a>, or <a>DescribeStream</a>. In the request, you can specify the
 * shard iterator type <code>AT_TIMESTAMP</code> to read records from an arbitrary point in time, <code>TRIM_HORIZON</code>
 * to cause <code>ShardIterator</code> to point to the last untrimmed record in the shard in the system (the oldest data
 * record in the shard), or <code>LATEST</code> so that you always read the most recent data in the shard.
 *
 * </p
 *
 * When you read repeatedly from a stream, use a <a>GetShardIterator</a> request to get the first shard iterator for use in
 * your first <a>GetRecords</a> request and for subsequent reads use the shard iterator returned by the <a>GetRecords</a>
 * request in <code>NextShardIterator</code>. A new shard iterator is returned by every <a>GetRecords</a> request in
 * <code>NextShardIterator</code>, which you use in the <code>ShardIterator</code> parameter of the next <a>GetRecords</a>
 * request.
 *
 * </p
 *
 * If a <a>GetShardIterator</a> request is made too often, you receive a
 * <code>ProvisionedThroughputExceededException</code>. For more information about throughput limits, see
 * <a>GetRecords</a>, and <a href="http://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Streams
 * Limits</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * If the shard is closed, <a>GetShardIterator</a> returns a valid iterator for the last sequence number of the shard. A
 * shard can be closed as a result of using <a>SplitShard</a> or
 *
 * <a>MergeShards</a>>
 *
 * <a>GetShardIterator</a> has a limit of five transactions per second per account per open
 */
GetShardIteratorResponse * KinesisClient::getShardIterator(const GetShardIteratorRequest &request)
{
    return qobject_cast<GetShardIteratorResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * IncreaseStreamRetentionPeriodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Increases the Kinesis data stream's retention period, which is the length of time data records are accessible after they
 * are added to the stream. The maximum value of a stream's retention period is 168 hours (7
 *
 * days)>
 *
 * If you choose a longer stream retention period, this operation increases the time period during which records that have
 * not yet expired are accessible. However, it does not make previous, expired data (older than the stream's previous
 * retention period) accessible after the operation has been called. For example, if a stream's retention period is set to
 * 24 hours and is increased to 168 hours, any data that is older than 24 hours remains inaccessible to consumer
 */
IncreaseStreamRetentionPeriodResponse * KinesisClient::increaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest &request)
{
    return qobject_cast<IncreaseStreamRetentionPeriodResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * ListShardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the shards in a stream and provides information about each shard. This operation has a limit of 100 transactions
 * per second per data
 *
 * stream> <b>
 *
 * This API is a new operation that is used by the Amazon Kinesis Client Library (KCL). If you have a fine-grained IAM
 * policy that only allows specific operations, you must update your policy to allow calls to this API. For more
 * information, see <a href="https://docs.aws.amazon.com/streams/latest/dev/controlling-access.html">Controlling Access to
 * Amazon Kinesis Data Streams Resources Using
 */
ListShardsResponse * KinesisClient::listShards(const ListShardsRequest &request)
{
    return qobject_cast<ListShardsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * ListStreamConsumersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the consumers registered to receive data from a stream using enhanced fan-out, and provides information about each
 *
 * consumer>
 *
 * This operation has a limit of 10 transactions per second per
 */
ListStreamConsumersResponse * KinesisClient::listStreamConsumers(const ListStreamConsumersRequest &request)
{
    return qobject_cast<ListStreamConsumersResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your Kinesis data
 *
 * streams>
 *
 * The number of streams may be too large to return from a single call to <code>ListStreams</code>. You can limit the
 * number of returned streams using the <code>Limit</code> parameter. If you do not specify a value for the
 * <code>Limit</code> parameter, Kinesis Data Streams uses the default limit, which is currently
 *
 * 10>
 *
 * You can detect if there are more streams available to list by using the <code>HasMoreStreams</code> flag from the
 * returned output. If there are more streams available, you can request more streams by using the name of the last stream
 * returned by the <code>ListStreams</code> request in the <code>ExclusiveStartStreamName</code> parameter in a subsequent
 * request to <code>ListStreams</code>. The group of stream names returned by the subsequent request is then added to the
 * list. You can continue this process until all the stream names have been collected in the list.
 *
 * </p
 *
 * <a>ListStreams</a> has a limit of five transactions per second per
 */
ListStreamsResponse * KinesisClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * ListTagsForStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified Kinesis data stream. This operation has a limit of five transactions per second per
 */
ListTagsForStreamResponse * KinesisClient::listTagsForStream(const ListTagsForStreamRequest &request)
{
    return qobject_cast<ListTagsForStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * MergeShardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Merges two adjacent shards in a Kinesis data stream and combines them into a single shard to reduce the stream's
 * capacity to ingest and transport data. Two shards are considered adjacent if the union of the hash key ranges for the
 * two shards form a contiguous set with no gaps. For example, if you have two shards, one with a hash key range of
 * 276...381 and the other with a hash key range of 382...454, then you could merge these two shards into a single shard
 * that would have a hash key range of 276...454. After the merge, the single child shard receives data for all hash key
 * values covered by the two parent
 *
 * shards>
 *
 * <code>MergeShards</code> is called when there is a need to reduce the overall capacity of a stream because of excess
 * capacity that is not being used. You must specify the shard to be merged and the adjacent shard for a stream. For more
 * information about merging shards, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-resharding-merge.html">Merge Two Shards</a>
 * in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * If the stream is in the <code>ACTIVE</code> state, you can call <code>MergeShards</code>. If a stream is in the
 * <code>CREATING</code>, <code>UPDATING</code>, or <code>DELETING</code> state, <code>MergeShards</code> returns a
 * <code>ResourceInUseException</code>. If the specified stream does not exist, <code>MergeShards</code> returns a
 * <code>ResourceNotFoundException</code>.
 *
 * </p
 *
 * You can use <a>DescribeStream</a> to check the state of the stream, which is returned in
 *
 * <code>StreamStatus</code>>
 *
 * <code>MergeShards</code> is an asynchronous operation. Upon receiving a <code>MergeShards</code> request, Amazon Kinesis
 * Data Streams immediately returns a response and sets the <code>StreamStatus</code> to <code>UPDATING</code>. After the
 * operation is completed, Kinesis Data Streams sets the <code>StreamStatus</code> to <code>ACTIVE</code>. Read and write
 * operations continue to work while the stream is in the <code>UPDATING</code> state.
 *
 * </p
 *
 * You use <a>DescribeStream</a> to determine the shard IDs that are specified in the <code>MergeShards</code> request.
 *
 * </p
 *
 * If you try to operate on too many streams in parallel using <a>CreateStream</a>, <a>DeleteStream</a>,
 * <code>MergeShards</code>, or <a>SplitShard</a>, you receive a <code>LimitExceededException</code>.
 *
 * </p
 *
 * <code>MergeShards</code> has a limit of five transactions per second per
 */
MergeShardsResponse * KinesisClient::mergeShards(const MergeShardsRequest &request)
{
    return qobject_cast<MergeShardsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * PutRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes a single data record into an Amazon Kinesis data stream. Call <code>PutRecord</code> to send data into the stream
 * for real-time ingestion and subsequent processing, one record at a time. Each shard can support writes up to 1,000
 * records per second, up to a maximum data write total of 1 MB per
 *
 * second>
 *
 * You must specify the name of the stream that captures, stores, and transports the data; a partition key; and the data
 * blob
 *
 * itself>
 *
 * The data blob can be any type of data; for example, a segment from a log file, geographic/location data, website
 * clickstream data, and so
 *
 * on>
 *
 * The partition key is used by Kinesis Data Streams to distribute data across shards. Kinesis Data Streams segregates the
 * data records that belong to a stream into multiple shards, using the partition key associated with each data record to
 * determine the shard to which a given data record
 *
 * belongs>
 *
 * Partition keys are Unicode strings, with a maximum length limit of 256 characters for each key. An MD5 hash function is
 * used to map partition keys to 128-bit integer values and to map associated data records to shards using the hash key
 * ranges of the shards. You can override hashing the partition key to determine the shard by explicitly specifying a hash
 * value using the <code>ExplicitHashKey</code> parameter. For more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-add-data-to-stream">Adding
 * Data to a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * <code>PutRecord</code> returns the shard ID of where the data record was placed and the sequence number that was
 * assigned to the data
 *
 * record>
 *
 * Sequence numbers increase over time and are specific to a shard within a stream, not across all shards within a stream.
 * To guarantee strictly increasing ordering, write serially to a shard and use the <code>SequenceNumberForOrdering</code>
 * parameter. For more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-add-data-to-stream">Adding
 * Data to a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * If a <code>PutRecord</code> request cannot be processed because of insufficient provisioned throughput on the shard
 * involved in the request, <code>PutRecord</code> throws <code>ProvisionedThroughputExceededException</code>.
 *
 * </p
 *
 * By default, data records are accessible for 24 hours from the time that they are added to a stream. You can use
 * <a>IncreaseStreamRetentionPeriod</a> or <a>DecreaseStreamRetentionPeriod</a> to modify this retention
 */
PutRecordResponse * KinesisClient::putRecord(const PutRecordRequest &request)
{
    return qobject_cast<PutRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * PutRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes multiple data records into a Kinesis data stream in a single call (also referred to as a <code>PutRecords</code>
 * request). Use this operation to send data into the stream for data ingestion and processing.
 *
 * </p
 *
 * Each <code>PutRecords</code> request can support up to 500 records. Each record in the request can be as large as 1 MB,
 * up to a limit of 5 MB for the entire request, including partition keys. Each shard can support writes up to 1,000
 * records per second, up to a maximum data write total of 1 MB per
 *
 * second>
 *
 * You must specify the name of the stream that captures, stores, and transports the data; and an array of request
 * <code>Records</code>, with each record in the array requiring a partition key and data blob. The record size limit
 * applies to the total size of the partition key and data
 *
 * blob>
 *
 * The data blob can be any type of data; for example, a segment from a log file, geographic/location data, website
 * clickstream data, and so
 *
 * on>
 *
 * The partition key is used by Kinesis Data Streams as input to a hash function that maps the partition key and associated
 * data to a specific shard. An MD5 hash function is used to map partition keys to 128-bit integer values and to map
 * associated data records to shards. As a result of this hashing mechanism, all data records with the same partition key
 * map to the same shard within the stream. For more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-add-data-to-stream">Adding
 * Data to a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * Each record in the <code>Records</code> array may include an optional parameter, <code>ExplicitHashKey</code>, which
 * overrides the partition key to shard mapping. This parameter allows a data producer to determine explicitly the shard
 * where the record is stored. For more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-putrecords">Adding
 * Multiple Records with PutRecords</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * The <code>PutRecords</code> response includes an array of response <code>Records</code>. Each record in the response
 * array directly correlates with a record in the request array using natural ordering, from the top to the bottom of the
 * request and response. The response <code>Records</code> array always includes the same number of records as the request
 *
 * array>
 *
 * The response <code>Records</code> array includes both successfully and unsuccessfully processed records. Kinesis Data
 * Streams attempts to process all records in each <code>PutRecords</code> request. A single record failure does not stop
 * the processing of subsequent
 *
 * records>
 *
 * A successfully processed record includes <code>ShardId</code> and <code>SequenceNumber</code> values. The
 * <code>ShardId</code> parameter identifies the shard in the stream where the record is stored. The
 * <code>SequenceNumber</code> parameter is an identifier assigned to the put record, unique to all records in the
 *
 * stream>
 *
 * An unsuccessfully processed record includes <code>ErrorCode</code> and <code>ErrorMessage</code> values.
 * <code>ErrorCode</code> reflects the type of error and can be one of the following values:
 * <code>ProvisionedThroughputExceededException</code> or <code>InternalFailure</code>. <code>ErrorMessage</code> provides
 * more detailed information about the <code>ProvisionedThroughputExceededException</code> exception including the account
 * ID, stream name, and shard ID of the record that was throttled. For more information about partially successful
 * responses, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-add-data-to-stream.html#kinesis-using-sdk-java-putrecords">Adding
 * Multiple Records with PutRecords</a> in the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * By default, data records are accessible for 24 hours from the time that they are added to a stream. You can use
 * <a>IncreaseStreamRetentionPeriod</a> or <a>DecreaseStreamRetentionPeriod</a> to modify this retention
 */
PutRecordsResponse * KinesisClient::putRecords(const PutRecordsRequest &request)
{
    return qobject_cast<PutRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * RegisterStreamConsumerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a consumer with a Kinesis data stream. When you use this operation, the consumer you register can read data
 * from the stream at a rate of up to 2 MiB per second. This rate is unaffected by the total number of consumers that read
 * from the same
 *
 * stream>
 *
 * You can register up to 5 consumers per stream. A given consumer can only be registered with one
 *
 * stream>
 *
 * This operation has a limit of five transactions per second per
 */
RegisterStreamConsumerResponse * KinesisClient::registerStreamConsumer(const RegisterStreamConsumerRequest &request)
{
    return qobject_cast<RegisterStreamConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * RemoveTagsFromStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified Kinesis data stream. Removed tags are deleted and cannot be recovered after this
 * operation successfully
 *
 * completes>
 *
 * If you specify a tag that does not exist, it is
 *
 * ignored>
 *
 * <a>RemoveTagsFromStream</a> has a limit of five transactions per second per
 */
RemoveTagsFromStreamResponse * KinesisClient::removeTagsFromStream(const RemoveTagsFromStreamRequest &request)
{
    return qobject_cast<RemoveTagsFromStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * SplitShardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Splits a shard into two new shards in the Kinesis data stream, to increase the stream's capacity to ingest and transport
 * data. <code>SplitShard</code> is called when there is a need to increase the overall capacity of a stream because of an
 * expected increase in the volume of data records being ingested.
 *
 * </p
 *
 * You can also use <code>SplitShard</code> when a shard appears to be approaching its maximum utilization; for example,
 * the producers sending data into the specific shard are suddenly sending more than previously anticipated. You can also
 * call <code>SplitShard</code> to increase stream capacity, so that more Kinesis Data Streams applications can
 * simultaneously read data from the stream for real-time processing.
 *
 * </p
 *
 * You must specify the shard to be split and the new hash key, which is the position in the shard where the shard gets
 * split in two. In many cases, the new hash key might be the average of the beginning and ending hash key, but it can be
 * any hash key value in the range being mapped into the shard. For more information, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-resharding-split.html">Split a Shard</a> in
 * the <i>Amazon Kinesis Data Streams Developer
 *
 * Guide</i>>
 *
 * You can use <a>DescribeStream</a> to determine the shard ID and hash key values for the <code>ShardToSplit</code> and
 * <code>NewStartingHashKey</code> parameters that are specified in the <code>SplitShard</code>
 *
 * request>
 *
 * <code>SplitShard</code> is an asynchronous operation. Upon receiving a <code>SplitShard</code> request, Kinesis Data
 * Streams immediately returns a response and sets the stream status to <code>UPDATING</code>. After the operation is
 * completed, Kinesis Data Streams sets the stream status to <code>ACTIVE</code>. Read and write operations continue to
 * work while the stream is in the <code>UPDATING</code> state.
 *
 * </p
 *
 * You can use <code>DescribeStream</code> to check the status of the stream, which is returned in
 * <code>StreamStatus</code>. If the stream is in the <code>ACTIVE</code> state, you can call <code>SplitShard</code>. If a
 * stream is in <code>CREATING</code> or <code>UPDATING</code> or <code>DELETING</code> states, <code>DescribeStream</code>
 * returns a
 *
 * <code>ResourceInUseException</code>>
 *
 * If the specified stream does not exist, <code>DescribeStream</code> returns a <code>ResourceNotFoundException</code>. If
 * you try to create more shards than are authorized for your account, you receive a <code>LimitExceededException</code>.
 *
 * </p
 *
 * For the default shard limit for an AWS account, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Kinesis Data Streams Limits</a> in
 * the <i>Amazon Kinesis Data Streams Developer Guide</i>. To increase this limit, <a
 * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">contact AWS
 *
 * Support</a>>
 *
 * If you try to operate on too many streams simultaneously using <a>CreateStream</a>, <a>DeleteStream</a>,
 * <a>MergeShards</a>, and/or <a>SplitShard</a>, you receive a <code>LimitExceededException</code>.
 *
 * </p
 *
 * <code>SplitShard</code> has a limit of five transactions per second per
 */
SplitShardResponse * KinesisClient::splitShard(const SplitShardRequest &request)
{
    return qobject_cast<SplitShardResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * StartStreamEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables or updates server-side encryption using an AWS KMS key for a specified stream.
 *
 * </p
 *
 * Starting encryption is an asynchronous operation. Upon receiving the request, Kinesis Data Streams returns immediately
 * and sets the status of the stream to <code>UPDATING</code>. After the update is complete, Kinesis Data Streams sets the
 * status of the stream back to <code>ACTIVE</code>. Updating or applying encryption normally takes a few seconds to
 * complete, but it can take minutes. You can continue to read and write data to your stream while its status is
 * <code>UPDATING</code>. Once the status of the stream is <code>ACTIVE</code>, encryption begins for records written to
 * the stream.
 *
 * </p
 *
 * API Limits: You can successfully apply a new AWS KMS key for server-side encryption 25 times in a rolling 24-hour
 *
 * period>
 *
 * Note: It can take up to 5 seconds after the stream is in an <code>ACTIVE</code> status before all records written to the
 * stream are encrypted. After you enable encryption, you can verify that encryption is applied by inspecting the API
 * response from <code>PutRecord</code> or
 */
StartStreamEncryptionResponse * KinesisClient::startStreamEncryption(const StartStreamEncryptionRequest &request)
{
    return qobject_cast<StartStreamEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * StopStreamEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables server-side encryption for a specified stream.
 *
 * </p
 *
 * Stopping encryption is an asynchronous operation. Upon receiving the request, Kinesis Data Streams returns immediately
 * and sets the status of the stream to <code>UPDATING</code>. After the update is complete, Kinesis Data Streams sets the
 * status of the stream back to <code>ACTIVE</code>. Stopping encryption normally takes a few seconds to complete, but it
 * can take minutes. You can continue to read and write data to your stream while its status is <code>UPDATING</code>. Once
 * the status of the stream is <code>ACTIVE</code>, records written to the stream are no longer encrypted by Kinesis Data
 * Streams.
 *
 * </p
 *
 * API Limits: You can successfully disable server-side encryption 25 times in a rolling 24-hour period.
 *
 * </p
 *
 * Note: It can take up to 5 seconds after the stream is in an <code>ACTIVE</code> status before all records written to the
 * stream are no longer subject to encryption. After you disabled encryption, you can verify that encryption is not applied
 * by inspecting the API response from <code>PutRecord</code> or
 */
StopStreamEncryptionResponse * KinesisClient::stopStreamEncryption(const StopStreamEncryptionRequest &request)
{
    return qobject_cast<StopStreamEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * SubscribeToShardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Call this operation from your consumer after you call <a>RegisterStreamConsumer</a> to register the consumer with
 * Kinesis Data Streams. If the call succeeds, your consumer starts receiving events of type <a>SubscribeToShardEvent</a>
 * for up to 5 minutes, after which time you need to call <code>SubscribeToShard</code> again to renew the subscription if
 * you want to continue to receive
 *
 * records>
 *
 * You can make one call to <code>SubscribeToShard</code> per second per <code>ConsumerARN</code>. If your call succeeds,
 * and then you call the operation again less than 5 seconds later, the second call generates a
 * <a>ResourceInUseException</a>. If you call the operation a second time more than 5 seconds after the first call
 * succeeds, the second call succeeds and the first connection gets shut
 */
SubscribeToShardResponse * KinesisClient::subscribeToShard(const SubscribeToShardRequest &request)
{
    return qobject_cast<SubscribeToShardResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisClient service, and returns a pointer to an
 * UpdateShardCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the shard count of the specified stream to the specified number of
 *
 * shards>
 *
 * Updating the shard count is an asynchronous operation. Upon receiving the request, Kinesis Data Streams returns
 * immediately and sets the status of the stream to <code>UPDATING</code>. After the update is complete, Kinesis Data
 * Streams sets the status of the stream back to <code>ACTIVE</code>. Depending on the size of the stream, the scaling
 * action could take a few minutes to complete. You can continue to read and write data to your stream while its status is
 *
 * <code>UPDATING</code>>
 *
 * To update the shard count, Kinesis Data Streams performs splits or merges on individual shards. This can cause
 * short-lived shards to be created, in addition to the final shards. We recommend that you double or halve the shard
 * count, as this results in the fewest number of splits or
 *
 * merges>
 *
 * This operation has the following default limits. By default, you cannot do the
 *
 * following> <ul> <li>
 *
 * Scale more than twice per rolling 24-hour period per
 *
 * strea> </li> <li>
 *
 * Scale up to more than double your current shard count for a
 *
 * strea> </li> <li>
 *
 * Scale down below half your current shard count for a
 *
 * strea> </li> <li>
 *
 * Scale up to more than 500 shards in a
 *
 * strea> </li> <li>
 *
 * Scale a stream with more than 500 shards down unless the result is less than 500
 *
 * shard> </li> <li>
 *
 * Scale up to more than the shard limit for your
 *
 * accoun> </li> </ul>
 *
 * For the default limits for an AWS account, see <a
 * href="http://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Streams Limits</a> in the <i>Amazon
 * Kinesis Data Streams Developer Guide</i>. To request an increase in the call rate limit, the shard limit for this API,
 * or your overall shard limit, use the <a
 * href="https://console.aws.amazon.com/support/v1#/case/create?issueType=service-limit-increase&amp;limitType=service-code-kinesis">limits
 */
UpdateShardCountResponse * KinesisClient::updateShardCount(const UpdateShardCountRequest &request)
{
    return qobject_cast<UpdateShardCountResponse *>(send(request));
}

/*!
 * \class QtAws::Kinesis::KinesisClientPrivate
 * \brief The KinesisClientPrivate class provides private implementation for KinesisClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a KinesisClientPrivate object with public implementation \a q.
 */
KinesisClientPrivate::KinesisClientPrivate(KinesisClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Kinesis
} // namespace QtAws
