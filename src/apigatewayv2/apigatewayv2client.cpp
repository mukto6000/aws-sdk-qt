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

#include "apigatewayv2client.h"
#include "apigatewayv2client_p.h"

#include "core/awssignaturev4.h"
#include "createapirequest.h"
#include "createapiresponse.h"
#include "createapimappingrequest.h"
#include "createapimappingresponse.h"
#include "createauthorizerrequest.h"
#include "createauthorizerresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createdomainnamerequest.h"
#include "createdomainnameresponse.h"
#include "createintegrationrequest.h"
#include "createintegrationresponse.h"
#include "createintegrationresponserequest.h"
#include "createintegrationresponseresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createrouterequest.h"
#include "createrouteresponse.h"
#include "createrouteresponserequest.h"
#include "createrouteresponseresponse.h"
#include "createstagerequest.h"
#include "createstageresponse.h"
#include "deleteapirequest.h"
#include "deleteapiresponse.h"
#include "deleteapimappingrequest.h"
#include "deleteapimappingresponse.h"
#include "deleteauthorizerrequest.h"
#include "deleteauthorizerresponse.h"
#include "deletedeploymentrequest.h"
#include "deletedeploymentresponse.h"
#include "deletedomainnamerequest.h"
#include "deletedomainnameresponse.h"
#include "deleteintegrationrequest.h"
#include "deleteintegrationresponse.h"
#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponseresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deleterouterequest.h"
#include "deleterouteresponse.h"
#include "deleterouteresponserequest.h"
#include "deleterouteresponseresponse.h"
#include "deletestagerequest.h"
#include "deletestageresponse.h"
#include "getapirequest.h"
#include "getapiresponse.h"
#include "getapimappingrequest.h"
#include "getapimappingresponse.h"
#include "getapimappingsrequest.h"
#include "getapimappingsresponse.h"
#include "getapisrequest.h"
#include "getapisresponse.h"
#include "getauthorizerrequest.h"
#include "getauthorizerresponse.h"
#include "getauthorizersrequest.h"
#include "getauthorizersresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getdeploymentsrequest.h"
#include "getdeploymentsresponse.h"
#include "getdomainnamerequest.h"
#include "getdomainnameresponse.h"
#include "getdomainnamesrequest.h"
#include "getdomainnamesresponse.h"
#include "getintegrationrequest.h"
#include "getintegrationresponse.h"
#include "getintegrationresponserequest.h"
#include "getintegrationresponseresponse.h"
#include "getintegrationresponsesrequest.h"
#include "getintegrationresponsesresponse.h"
#include "getintegrationsrequest.h"
#include "getintegrationsresponse.h"
#include "getmodelrequest.h"
#include "getmodelresponse.h"
#include "getmodeltemplaterequest.h"
#include "getmodeltemplateresponse.h"
#include "getmodelsrequest.h"
#include "getmodelsresponse.h"
#include "getrouterequest.h"
#include "getrouteresponse.h"
#include "getrouteresponserequest.h"
#include "getrouteresponseresponse.h"
#include "getrouteresponsesrequest.h"
#include "getrouteresponsesresponse.h"
#include "getroutesrequest.h"
#include "getroutesresponse.h"
#include "getstagerequest.h"
#include "getstageresponse.h"
#include "getstagesrequest.h"
#include "getstagesresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapirequest.h"
#include "updateapiresponse.h"
#include "updateapimappingrequest.h"
#include "updateapimappingresponse.h"
#include "updateauthorizerrequest.h"
#include "updateauthorizerresponse.h"
#include "updatedeploymentrequest.h"
#include "updatedeploymentresponse.h"
#include "updatedomainnamerequest.h"
#include "updatedomainnameresponse.h"
#include "updateintegrationrequest.h"
#include "updateintegrationresponse.h"
#include "updateintegrationresponserequest.h"
#include "updateintegrationresponseresponse.h"
#include "updatemodelrequest.h"
#include "updatemodelresponse.h"
#include "updaterouterequest.h"
#include "updaterouteresponse.h"
#include "updaterouteresponserequest.h"
#include "updaterouteresponseresponse.h"
#include "updatestagerequest.h"
#include "updatestageresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApiGatewayV2
 * \brief Contains classess for accessing AmazonApiGatewayV2.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ApiGatewayV2Client
 * \brief The ApiGatewayV2Client class provides access to the AmazonApiGatewayV2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 */

/*!
 * \brief Constructs a ApiGatewayV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApiGatewayV2Client::ApiGatewayV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApiGatewayV2ClientPrivate(this), parent)
{
    Q_D(ApiGatewayV2Client);
    d->apiVersion = QStringLiteral("2018-11-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AmazonApiGatewayV2");
    d->serviceName = QStringLiteral("apigateway");
}

/*!
 * \overload ApiGatewayV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApiGatewayV2Client::ApiGatewayV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApiGatewayV2ClientPrivate(this), parent)
{
    Q_D(ApiGatewayV2Client);
    d->apiVersion = QStringLiteral("2018-11-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AmazonApiGatewayV2");
    d->serviceName = QStringLiteral("apigateway");
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Api
 */
CreateApiResponse * ApiGatewayV2Client::createApi(const CreateApiRequest &request)
{
    return qobject_cast<CreateApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateApiMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an API
 */
CreateApiMappingResponse * ApiGatewayV2Client::createApiMapping(const CreateApiMappingRequest &request)
{
    return qobject_cast<CreateApiMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Authorizer for an
 */
CreateAuthorizerResponse * ApiGatewayV2Client::createAuthorizer(const CreateAuthorizerRequest &request)
{
    return qobject_cast<CreateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Deployment for an
 */
CreateDeploymentResponse * ApiGatewayV2Client::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a domain
 */
CreateDomainNameResponse * ApiGatewayV2Client::createDomainName(const CreateDomainNameRequest &request)
{
    return qobject_cast<CreateDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateIntegrationResponse * ApiGatewayV2Client::createIntegration(const CreateIntegrationRequest &request)
{
    return qobject_cast<CreateIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateIntegrationResponseResponse * ApiGatewayV2Client::createIntegrationResponse(const CreateIntegrationResponseRequest &request)
{
    return qobject_cast<CreateIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Model for an
 */
CreateModelResponse * ApiGatewayV2Client::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Route for an
 */
CreateRouteResponse * ApiGatewayV2Client::createRoute(const CreateRouteRequest &request)
{
    return qobject_cast<CreateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateRouteResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a RouteResponse for a
 */
CreateRouteResponseResponse * ApiGatewayV2Client::createRouteResponse(const CreateRouteResponseRequest &request)
{
    return qobject_cast<CreateRouteResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * CreateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Stage for an
 */
CreateStageResponse * ApiGatewayV2Client::createStage(const CreateStageRequest &request)
{
    return qobject_cast<CreateStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Api
 */
DeleteApiResponse * ApiGatewayV2Client::deleteApi(const DeleteApiRequest &request)
{
    return qobject_cast<DeleteApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteApiMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an API
 */
DeleteApiMappingResponse * ApiGatewayV2Client::deleteApiMapping(const DeleteApiMappingRequest &request)
{
    return qobject_cast<DeleteApiMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAuthorizerResponse * ApiGatewayV2Client::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{
    return qobject_cast<DeleteAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDeploymentResponse * ApiGatewayV2Client::deleteDeployment(const DeleteDeploymentRequest &request)
{
    return qobject_cast<DeleteDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a domain
 */
DeleteDomainNameResponse * ApiGatewayV2Client::deleteDomainName(const DeleteDomainNameRequest &request)
{
    return qobject_cast<DeleteDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteIntegrationResponse * ApiGatewayV2Client::deleteIntegration(const DeleteIntegrationRequest &request)
{
    return qobject_cast<DeleteIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteIntegrationResponseResponse * ApiGatewayV2Client::deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request)
{
    return qobject_cast<DeleteIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteModelResponse * ApiGatewayV2Client::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteRouteResponse * ApiGatewayV2Client::deleteRoute(const DeleteRouteRequest &request)
{
    return qobject_cast<DeleteRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteRouteResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteRouteResponseResponse * ApiGatewayV2Client::deleteRouteResponse(const DeleteRouteResponseRequest &request)
{
    return qobject_cast<DeleteRouteResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * DeleteStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteStageResponse * ApiGatewayV2Client::deleteStage(const DeleteStageRequest &request)
{
    return qobject_cast<DeleteStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Api
 */
GetApiResponse * ApiGatewayV2Client::getApi(const GetApiRequest &request)
{
    return qobject_cast<GetApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetApiMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The API
 */
GetApiMappingResponse * ApiGatewayV2Client::getApiMapping(const GetApiMappingRequest &request)
{
    return qobject_cast<GetApiMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetApiMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The API
 */
GetApiMappingsResponse * ApiGatewayV2Client::getApiMappings(const GetApiMappingsRequest &request)
{
    return qobject_cast<GetApiMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetApisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a collection of Api
 */
GetApisResponse * ApiGatewayV2Client::getApis(const GetApisRequest &request)
{
    return qobject_cast<GetApisResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an
 */
GetAuthorizerResponse * ApiGatewayV2Client::getAuthorizer(const GetAuthorizerRequest &request)
{
    return qobject_cast<GetAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetAuthorizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Authorizers for an
 */
GetAuthorizersResponse * ApiGatewayV2Client::getAuthorizers(const GetAuthorizersRequest &request)
{
    return qobject_cast<GetAuthorizersResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 */
GetDeploymentResponse * ApiGatewayV2Client::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Deployments for an
 */
GetDeploymentsResponse * ApiGatewayV2Client::getDeployments(const GetDeploymentsRequest &request)
{
    return qobject_cast<GetDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a domain
 */
GetDomainNameResponse * ApiGatewayV2Client::getDomainName(const GetDomainNameRequest &request)
{
    return qobject_cast<GetDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetDomainNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the domain names for an AWS
 */
GetDomainNamesResponse * ApiGatewayV2Client::getDomainNames(const GetDomainNamesRequest &request)
{
    return qobject_cast<GetDomainNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an
 */
GetIntegrationResponse * ApiGatewayV2Client::getIntegration(const GetIntegrationRequest &request)
{
    return qobject_cast<GetIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an
 */
GetIntegrationResponseResponse * ApiGatewayV2Client::getIntegrationResponse(const GetIntegrationResponseRequest &request)
{
    return qobject_cast<GetIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetIntegrationResponsesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the IntegrationResponses for an
 */
GetIntegrationResponsesResponse * ApiGatewayV2Client::getIntegrationResponses(const GetIntegrationResponsesRequest &request)
{
    return qobject_cast<GetIntegrationResponsesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetIntegrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Integrations for an
 */
GetIntegrationsResponse * ApiGatewayV2Client::getIntegrations(const GetIntegrationsRequest &request)
{
    return qobject_cast<GetIntegrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 */
GetModelResponse * ApiGatewayV2Client::getModel(const GetModelRequest &request)
{
    return qobject_cast<GetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetModelTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a model
 */
GetModelTemplateResponse * ApiGatewayV2Client::getModelTemplate(const GetModelTemplateRequest &request)
{
    return qobject_cast<GetModelTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Models for an
 */
GetModelsResponse * ApiGatewayV2Client::getModels(const GetModelsRequest &request)
{
    return qobject_cast<GetModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 */
GetRouteResponse * ApiGatewayV2Client::getRoute(const GetRouteRequest &request)
{
    return qobject_cast<GetRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetRouteResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 */
GetRouteResponseResponse * ApiGatewayV2Client::getRouteResponse(const GetRouteResponseRequest &request)
{
    return qobject_cast<GetRouteResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetRouteResponsesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the RouteResponses for a
 */
GetRouteResponsesResponse * ApiGatewayV2Client::getRouteResponses(const GetRouteResponsesRequest &request)
{
    return qobject_cast<GetRouteResponsesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Routes for an
 */
GetRoutesResponse * ApiGatewayV2Client::getRoutes(const GetRoutesRequest &request)
{
    return qobject_cast<GetRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 */
GetStageResponse * ApiGatewayV2Client::getStage(const GetStageRequest &request)
{
    return qobject_cast<GetStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetStagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Stages for an
 */
GetStagesResponse * ApiGatewayV2Client::getStages(const GetStagesRequest &request)
{
    return qobject_cast<GetStagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Tags for an
 */
GetTagsResponse * ApiGatewayV2Client::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tag an APIGW
 */
TagResourceResponse * ApiGatewayV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Untag an APIGW
 */
UntagResourceResponse * ApiGatewayV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Api
 */
UpdateApiResponse * ApiGatewayV2Client::updateApi(const UpdateApiRequest &request)
{
    return qobject_cast<UpdateApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateApiMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The API
 */
UpdateApiMappingResponse * ApiGatewayV2Client::updateApiMapping(const UpdateApiMappingRequest &request)
{
    return qobject_cast<UpdateApiMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateAuthorizerResponse * ApiGatewayV2Client::updateAuthorizer(const UpdateAuthorizerRequest &request)
{
    return qobject_cast<UpdateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateDeploymentResponse * ApiGatewayV2Client::updateDeployment(const UpdateDeploymentRequest &request)
{
    return qobject_cast<UpdateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a domain
 */
UpdateDomainNameResponse * ApiGatewayV2Client::updateDomainName(const UpdateDomainNameRequest &request)
{
    return qobject_cast<UpdateDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateIntegrationResponse * ApiGatewayV2Client::updateIntegration(const UpdateIntegrationRequest &request)
{
    return qobject_cast<UpdateIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateIntegrationResponseResponse * ApiGatewayV2Client::updateIntegrationResponse(const UpdateIntegrationResponseRequest &request)
{
    return qobject_cast<UpdateIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateModelResponse * ApiGatewayV2Client::updateModel(const UpdateModelRequest &request)
{
    return qobject_cast<UpdateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateRouteResponse * ApiGatewayV2Client::updateRoute(const UpdateRouteRequest &request)
{
    return qobject_cast<UpdateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateRouteResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateRouteResponseResponse * ApiGatewayV2Client::updateRouteResponse(const UpdateRouteResponseRequest &request)
{
    return qobject_cast<UpdateRouteResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayV2Client service, and returns a pointer to an
 * UpdateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateStageResponse * ApiGatewayV2Client::updateStage(const UpdateStageRequest &request)
{
    return qobject_cast<UpdateStageResponse *>(send(request));
}

/*!
 * \class QtAws::ApiGatewayV2::ApiGatewayV2ClientPrivate
 * \brief The ApiGatewayV2ClientPrivate class provides private implementation for ApiGatewayV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ApiGatewayV2ClientPrivate object with public implementation \a q.
 */
ApiGatewayV2ClientPrivate::ApiGatewayV2ClientPrivate(ApiGatewayV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApiGatewayV2
} // namespace QtAws
