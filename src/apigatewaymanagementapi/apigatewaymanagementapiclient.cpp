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

#include "apigatewaymanagementapiclient.h"
#include "apigatewaymanagementapiclient_p.h"

#include "core/awssignaturev4.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "getconnectionrequest.h"
#include "getconnectionresponse.h"
#include "posttoconnectionrequest.h"
#include "posttoconnectionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApiGatewayManagementApi
 * \brief Contains classess for accessing AmazonApiGatewayManagementApi.
 *
 * \inmodule QtAwsApiGatewayManagementApi
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApiGatewayManagementApi {

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiClient
 * \brief The ApiGatewayManagementApiClient class provides access to the AmazonApiGatewayManagementApi service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGatewayManagementApi
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 */

/*!
 * \brief Constructs a ApiGatewayManagementApiClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-29"),
    QStringLiteral("execute-api"),
    QStringLiteral("AmazonApiGatewayManagementApi"),
    QStringLiteral("execute-api"),
    parent), d_ptr(new ApiGatewayManagementApiClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ApiGatewayManagementApiClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-29"),
    QStringLiteral("execute-api"),
    QStringLiteral("AmazonApiGatewayManagementApi"),
    QStringLiteral("execute-api"),
    parent), d_ptr(new ApiGatewayManagementApiClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ApiGatewayManagementApiClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the connection with the provided
 */
DeleteConnectionResponse * ApiGatewayManagementApiClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayManagementApiClient service, and returns a pointer to an
 * GetConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about the connection with the provided
 */
GetConnectionResponse * ApiGatewayManagementApiClient::getConnection(const GetConnectionRequest &request)
{
    return qobject_cast<GetConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayManagementApiClient service, and returns a pointer to an
 * PostToConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends the provided data to the specified
 */
PostToConnectionResponse * ApiGatewayManagementApiClient::postToConnection(const PostToConnectionRequest &request)
{
    return qobject_cast<PostToConnectionResponse *>(send(request));
}

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiClientPrivate
 * \brief The ApiGatewayManagementApiClientPrivate class provides private implementation for ApiGatewayManagementApiClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGatewayManagementApi
 */

/*!
 * Constructs a ApiGatewayManagementApiClientPrivate object with public implementation \a q.
 */
ApiGatewayManagementApiClientPrivate::ApiGatewayManagementApiClientPrivate(ApiGatewayManagementApiClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ApiGatewayManagementApi
} // namespace QtAws
