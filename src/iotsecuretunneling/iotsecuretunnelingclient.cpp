// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotsecuretunnelingclient.h"
#include "iotsecuretunnelingclient_p.h"

#include "core/awssignaturev4.h"
#include "closetunnelrequest.h"
#include "closetunnelresponse.h"
#include "describetunnelrequest.h"
#include "describetunnelresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtunnelsrequest.h"
#include "listtunnelsresponse.h"
#include "opentunnelrequest.h"
#include "opentunnelresponse.h"
#include "rotatetunnelaccesstokenrequest.h"
#include "rotatetunnelaccesstokenresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTSecureTunneling
 * \brief Contains classess for accessing AWS IoT Secure Tunneling.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingClient
 * \brief The IoTSecureTunnelingClient class provides access to the AWS IoT Secure Tunneling service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>IoT Secure Tunneling</fullname>
 * 
 *  IoT Secure Tunneling creates remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT Secure
 */

/*!
 * \brief Constructs a IoTSecureTunnelingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTSecureTunnelingClient::IoTSecureTunnelingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTSecureTunnelingClientPrivate(this), parent)
{
    Q_D(IoTSecureTunnelingClient);
    d->apiVersion = QStringLiteral("2018-10-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.tunneling.iot");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Secure Tunneling");
    d->serviceName = QStringLiteral("iotsecuredtunneling");
}

/*!
 * \overload IoTSecureTunnelingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTSecureTunnelingClient::IoTSecureTunnelingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTSecureTunnelingClientPrivate(this), parent)
{
    Q_D(IoTSecureTunnelingClient);
    d->apiVersion = QStringLiteral("2018-10-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.tunneling.iot");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Secure Tunneling");
    d->serviceName = QStringLiteral("iotsecuredtunneling");
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * CloseTunnelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Closes a tunnel identified by the unique tunnel id. When a <code>CloseTunnel</code> request is received, we close the
 * WebSocket connections between the client and proxy server so no data can be
 *
 * transmitted>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CloseTunnel</a>
 */
CloseTunnelResponse * IoTSecureTunnelingClient::closeTunnel(const CloseTunnelRequest &request)
{
    return qobject_cast<CloseTunnelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * DescribeTunnelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a tunnel identified by the unique tunnel
 *
 * id>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeTunnel</a>
 */
DescribeTunnelResponse * IoTSecureTunnelingClient::describeTunnel(const DescribeTunnelRequest &request)
{
    return qobject_cast<DescribeTunnelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * IoTSecureTunnelingClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * ListTunnelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tunnels for an Amazon Web Services account. Tunnels are listed by creation time in descending order, newer
 * tunnels will be listed before older
 *
 * tunnels>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTunnels</a>
 */
ListTunnelsResponse * IoTSecureTunnelingClient::listTunnels(const ListTunnelsRequest &request)
{
    return qobject_cast<ListTunnelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * OpenTunnelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new tunnel, and returns two client access tokens for clients to use to connect to the IoT Secure Tunneling
 * proxy
 *
 * server>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">OpenTunnel</a>
 */
OpenTunnelResponse * IoTSecureTunnelingClient::openTunnel(const OpenTunnelRequest &request)
{
    return qobject_cast<OpenTunnelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * RotateTunnelAccessTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes the current client access token (CAT) and returns new CAT for clients to use when reconnecting to secure
 * tunneling to access the same
 *
 * tunnel>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RotateTunnelAccessToken</a>
 *
 * action> <note>
 *
 * Rotating the CAT doesn't extend the tunnel duration. For example, say the tunnel duration is 12 hours and the tunnel has
 * already been open for 4 hours. When you rotate the access tokens, the new tokens that are generated can only be used for
 * the remaining 8
 */
RotateTunnelAccessTokenResponse * IoTSecureTunnelingClient::rotateTunnelAccessToken(const RotateTunnelAccessTokenRequest &request)
{
    return qobject_cast<RotateTunnelAccessTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A resource
 */
TagResourceResponse * IoTSecureTunnelingClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * IoTSecureTunnelingClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingClientPrivate
 * \brief The IoTSecureTunnelingClientPrivate class provides private implementation for IoTSecureTunnelingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingClientPrivate object with public implementation \a q.
 */
IoTSecureTunnelingClientPrivate::IoTSecureTunnelingClientPrivate(IoTSecureTunnelingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTSecureTunneling
} // namespace QtAws
