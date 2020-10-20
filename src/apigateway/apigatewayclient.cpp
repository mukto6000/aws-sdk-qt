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

#include "apigatewayclient.h"
#include "apigatewayclient_p.h"

#include "core/awssignaturev4.h"
#include "createapikeyrequest.h"
#include "createapikeyresponse.h"
#include "createauthorizerrequest.h"
#include "createauthorizerresponse.h"
#include "createbasepathmappingrequest.h"
#include "createbasepathmappingresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createdocumentationpartrequest.h"
#include "createdocumentationpartresponse.h"
#include "createdocumentationversionrequest.h"
#include "createdocumentationversionresponse.h"
#include "createdomainnamerequest.h"
#include "createdomainnameresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createrequestvalidatorrequest.h"
#include "createrequestvalidatorresponse.h"
#include "createresourcerequest.h"
#include "createresourceresponse.h"
#include "createrestapirequest.h"
#include "createrestapiresponse.h"
#include "createstagerequest.h"
#include "createstageresponse.h"
#include "createusageplanrequest.h"
#include "createusageplanresponse.h"
#include "createusageplankeyrequest.h"
#include "createusageplankeyresponse.h"
#include "createvpclinkrequest.h"
#include "createvpclinkresponse.h"
#include "deleteapikeyrequest.h"
#include "deleteapikeyresponse.h"
#include "deleteauthorizerrequest.h"
#include "deleteauthorizerresponse.h"
#include "deletebasepathmappingrequest.h"
#include "deletebasepathmappingresponse.h"
#include "deleteclientcertificaterequest.h"
#include "deleteclientcertificateresponse.h"
#include "deletedeploymentrequest.h"
#include "deletedeploymentresponse.h"
#include "deletedocumentationpartrequest.h"
#include "deletedocumentationpartresponse.h"
#include "deletedocumentationversionrequest.h"
#include "deletedocumentationversionresponse.h"
#include "deletedomainnamerequest.h"
#include "deletedomainnameresponse.h"
#include "deletegatewayresponserequest.h"
#include "deletegatewayresponseresponse.h"
#include "deleteintegrationrequest.h"
#include "deleteintegrationresponse.h"
#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponseresponse.h"
#include "deletemethodrequest.h"
#include "deletemethodresponse.h"
#include "deletemethodresponserequest.h"
#include "deletemethodresponseresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deleterequestvalidatorrequest.h"
#include "deleterequestvalidatorresponse.h"
#include "deleteresourcerequest.h"
#include "deleteresourceresponse.h"
#include "deleterestapirequest.h"
#include "deleterestapiresponse.h"
#include "deletestagerequest.h"
#include "deletestageresponse.h"
#include "deleteusageplanrequest.h"
#include "deleteusageplanresponse.h"
#include "deleteusageplankeyrequest.h"
#include "deleteusageplankeyresponse.h"
#include "deletevpclinkrequest.h"
#include "deletevpclinkresponse.h"
#include "flushstageauthorizerscacherequest.h"
#include "flushstageauthorizerscacheresponse.h"
#include "flushstagecacherequest.h"
#include "flushstagecacheresponse.h"
#include "generateclientcertificaterequest.h"
#include "generateclientcertificateresponse.h"
#include "getaccountrequest.h"
#include "getaccountresponse.h"
#include "getapikeyrequest.h"
#include "getapikeyresponse.h"
#include "getapikeysrequest.h"
#include "getapikeysresponse.h"
#include "getauthorizerrequest.h"
#include "getauthorizerresponse.h"
#include "getauthorizersrequest.h"
#include "getauthorizersresponse.h"
#include "getbasepathmappingrequest.h"
#include "getbasepathmappingresponse.h"
#include "getbasepathmappingsrequest.h"
#include "getbasepathmappingsresponse.h"
#include "getclientcertificaterequest.h"
#include "getclientcertificateresponse.h"
#include "getclientcertificatesrequest.h"
#include "getclientcertificatesresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getdeploymentsrequest.h"
#include "getdeploymentsresponse.h"
#include "getdocumentationpartrequest.h"
#include "getdocumentationpartresponse.h"
#include "getdocumentationpartsrequest.h"
#include "getdocumentationpartsresponse.h"
#include "getdocumentationversionrequest.h"
#include "getdocumentationversionresponse.h"
#include "getdocumentationversionsrequest.h"
#include "getdocumentationversionsresponse.h"
#include "getdomainnamerequest.h"
#include "getdomainnameresponse.h"
#include "getdomainnamesrequest.h"
#include "getdomainnamesresponse.h"
#include "getexportrequest.h"
#include "getexportresponse.h"
#include "getgatewayresponserequest.h"
#include "getgatewayresponseresponse.h"
#include "getgatewayresponsesrequest.h"
#include "getgatewayresponsesresponse.h"
#include "getintegrationrequest.h"
#include "getintegrationresponse.h"
#include "getintegrationresponserequest.h"
#include "getintegrationresponseresponse.h"
#include "getmethodrequest.h"
#include "getmethodresponse.h"
#include "getmethodresponserequest.h"
#include "getmethodresponseresponse.h"
#include "getmodelrequest.h"
#include "getmodelresponse.h"
#include "getmodeltemplaterequest.h"
#include "getmodeltemplateresponse.h"
#include "getmodelsrequest.h"
#include "getmodelsresponse.h"
#include "getrequestvalidatorrequest.h"
#include "getrequestvalidatorresponse.h"
#include "getrequestvalidatorsrequest.h"
#include "getrequestvalidatorsresponse.h"
#include "getresourcerequest.h"
#include "getresourceresponse.h"
#include "getresourcesrequest.h"
#include "getresourcesresponse.h"
#include "getrestapirequest.h"
#include "getrestapiresponse.h"
#include "getrestapisrequest.h"
#include "getrestapisresponse.h"
#include "getsdkrequest.h"
#include "getsdkresponse.h"
#include "getsdktyperequest.h"
#include "getsdktyperesponse.h"
#include "getsdktypesrequest.h"
#include "getsdktypesresponse.h"
#include "getstagerequest.h"
#include "getstageresponse.h"
#include "getstagesrequest.h"
#include "getstagesresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"
#include "getusagerequest.h"
#include "getusageresponse.h"
#include "getusageplanrequest.h"
#include "getusageplanresponse.h"
#include "getusageplankeyrequest.h"
#include "getusageplankeyresponse.h"
#include "getusageplankeysrequest.h"
#include "getusageplankeysresponse.h"
#include "getusageplansrequest.h"
#include "getusageplansresponse.h"
#include "getvpclinkrequest.h"
#include "getvpclinkresponse.h"
#include "getvpclinksrequest.h"
#include "getvpclinksresponse.h"
#include "importapikeysrequest.h"
#include "importapikeysresponse.h"
#include "importdocumentationpartsrequest.h"
#include "importdocumentationpartsresponse.h"
#include "importrestapirequest.h"
#include "importrestapiresponse.h"
#include "putgatewayresponserequest.h"
#include "putgatewayresponseresponse.h"
#include "putintegrationrequest.h"
#include "putintegrationresponse.h"
#include "putintegrationresponserequest.h"
#include "putintegrationresponseresponse.h"
#include "putmethodrequest.h"
#include "putmethodresponse.h"
#include "putmethodresponserequest.h"
#include "putmethodresponseresponse.h"
#include "putrestapirequest.h"
#include "putrestapiresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testinvokeauthorizerrequest.h"
#include "testinvokeauthorizerresponse.h"
#include "testinvokemethodrequest.h"
#include "testinvokemethodresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountrequest.h"
#include "updateaccountresponse.h"
#include "updateapikeyrequest.h"
#include "updateapikeyresponse.h"
#include "updateauthorizerrequest.h"
#include "updateauthorizerresponse.h"
#include "updatebasepathmappingrequest.h"
#include "updatebasepathmappingresponse.h"
#include "updateclientcertificaterequest.h"
#include "updateclientcertificateresponse.h"
#include "updatedeploymentrequest.h"
#include "updatedeploymentresponse.h"
#include "updatedocumentationpartrequest.h"
#include "updatedocumentationpartresponse.h"
#include "updatedocumentationversionrequest.h"
#include "updatedocumentationversionresponse.h"
#include "updatedomainnamerequest.h"
#include "updatedomainnameresponse.h"
#include "updategatewayresponserequest.h"
#include "updategatewayresponseresponse.h"
#include "updateintegrationrequest.h"
#include "updateintegrationresponse.h"
#include "updateintegrationresponserequest.h"
#include "updateintegrationresponseresponse.h"
#include "updatemethodrequest.h"
#include "updatemethodresponse.h"
#include "updatemethodresponserequest.h"
#include "updatemethodresponseresponse.h"
#include "updatemodelrequest.h"
#include "updatemodelresponse.h"
#include "updaterequestvalidatorrequest.h"
#include "updaterequestvalidatorresponse.h"
#include "updateresourcerequest.h"
#include "updateresourceresponse.h"
#include "updaterestapirequest.h"
#include "updaterestapiresponse.h"
#include "updatestagerequest.h"
#include "updatestageresponse.h"
#include "updateusagerequest.h"
#include "updateusageresponse.h"
#include "updateusageplanrequest.h"
#include "updateusageplanresponse.h"
#include "updatevpclinkrequest.h"
#include "updatevpclinkresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::APIGateway
 * \brief Contains classess for accessing Amazon API Gateway.
 *
 * \inmodule QtAwsAPIGateway
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::APIGatewayClient
 * \brief The APIGatewayClient class provides access to the Amazon API Gateway service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 */

/*!
 * \brief Constructs a APIGatewayClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
APIGatewayClient::APIGatewayClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new APIGatewayClientPrivate(this), parent)
{
    Q_D(APIGatewayClient);
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon API Gateway");
    d->serviceName = QStringLiteral("apigateway");
}

/*!
 * \overload APIGatewayClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
APIGatewayClient::APIGatewayClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new APIGatewayClientPrivate(this), parent)
{
    Q_D(APIGatewayClient);
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon API Gateway");
    d->serviceName = QStringLiteral("apigateway");
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an <a>ApiKey</a> resource.
 *
 * </p <div class="seeAlso"><a href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/create-api-key.html">AWS
 */
CreateApiKeyResponse * APIGatewayClient::createApiKey(const CreateApiKeyRequest &request)
{
    return qobject_cast<CreateApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new <a>Authorizer</a> resource to an existing <a>RestApi</a>
 *
 * resource> <div class="seeAlso"><a
 */
CreateAuthorizerResponse * APIGatewayClient::createAuthorizer(const CreateAuthorizerRequest &request)
{
    return qobject_cast<CreateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <a>BasePathMapping</a>
 */
CreateBasePathMappingResponse * APIGatewayClient::createBasePathMapping(const CreateBasePathMappingRequest &request)
{
    return qobject_cast<CreateBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>Deployment</a> resource, which makes a specified <a>RestApi</a> callable over the
 */
CreateDeploymentResponse * APIGatewayClient::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateDocumentationPartResponse * APIGatewayClient::createDocumentationPart(const CreateDocumentationPartRequest &request)
{
    return qobject_cast<CreateDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateDocumentationVersionResponse * APIGatewayClient::createDocumentationVersion(const CreateDocumentationVersionRequest &request)
{
    return qobject_cast<CreateDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new domain
 */
CreateDomainNameResponse * APIGatewayClient::createDomainName(const CreateDomainNameRequest &request)
{
    return qobject_cast<CreateDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new <a>Model</a> resource to an existing <a>RestApi</a>
 */
CreateModelResponse * APIGatewayClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>ReqeustValidator</a> of a given
 */
CreateRequestValidatorResponse * APIGatewayClient::createRequestValidator(const CreateRequestValidatorRequest &request)
{
    return qobject_cast<CreateRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>Resource</a>
 */
CreateResourceResponse * APIGatewayClient::createResource(const CreateResourceRequest &request)
{
    return qobject_cast<CreateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <a>RestApi</a>
 */
CreateRestApiResponse * APIGatewayClient::createRestApi(const CreateRestApiRequest &request)
{
    return qobject_cast<CreateRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <a>Stage</a> resource that references a pre-existing <a>Deployment</a> for the API.
 */
CreateStageResponse * APIGatewayClient::createStage(const CreateStageRequest &request)
{
    return qobject_cast<CreateStageResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a usage plan with the throttle and quota limits, as well as the associated API stages, specified in the payload.
 */
CreateUsagePlanResponse * APIGatewayClient::createUsagePlan(const CreateUsagePlanRequest &request)
{
    return qobject_cast<CreateUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateUsagePlanKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a usage plan key for adding an existing API key to a usage
 */
CreateUsagePlanKeyResponse * APIGatewayClient::createUsagePlanKey(const CreateUsagePlanKeyRequest &request)
{
    return qobject_cast<CreateUsagePlanKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * CreateVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPC link, under the caller's account in a selected region, in an asynchronous operation that typically takes
 * 2-4 minutes to complete and become operational. The caller must have permissions to create and update VPC Endpoint
 */
CreateVpcLinkResponse * APIGatewayClient::createVpcLink(const CreateVpcLinkRequest &request)
{
    return qobject_cast<CreateVpcLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the <a>ApiKey</a>
 */
DeleteApiKeyResponse * APIGatewayClient::deleteApiKey(const DeleteApiKeyRequest &request)
{
    return qobject_cast<DeleteApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 */
DeleteAuthorizerResponse * APIGatewayClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{
    return qobject_cast<DeleteAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the <a>BasePathMapping</a>
 */
DeleteBasePathMappingResponse * APIGatewayClient::deleteBasePathMapping(const DeleteBasePathMappingRequest &request)
{
    return qobject_cast<DeleteBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the <a>ClientCertificate</a>
 */
DeleteClientCertificateResponse * APIGatewayClient::deleteClientCertificate(const DeleteClientCertificateRequest &request)
{
    return qobject_cast<DeleteClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a>Deployment</a> resource. Deleting a deployment will only succeed if there are no <a>Stage</a> resources
 * associated with
 */
DeleteDeploymentResponse * APIGatewayClient::deleteDeployment(const DeleteDeploymentRequest &request)
{
    return qobject_cast<DeleteDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteDocumentationPartResponse * APIGatewayClient::deleteDocumentationPart(const DeleteDocumentationPartRequest &request)
{
    return qobject_cast<DeleteDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteDocumentationVersionResponse * APIGatewayClient::deleteDocumentationVersion(const DeleteDocumentationVersionRequest &request)
{
    return qobject_cast<DeleteDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the <a>DomainName</a>
 */
DeleteDomainNameResponse * APIGatewayClient::deleteDomainName(const DeleteDomainNameRequest &request)
{
    return qobject_cast<DeleteDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Clears any customization of a <a>GatewayResponse</a> of a specified response type on the given <a>RestApi</a> and resets
 * it with the default
 */
DeleteGatewayResponseResponse * APIGatewayClient::deleteGatewayResponse(const DeleteGatewayResponseRequest &request)
{
    return qobject_cast<DeleteGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a delete
 */
DeleteIntegrationResponse * APIGatewayClient::deleteIntegration(const DeleteIntegrationRequest &request)
{
    return qobject_cast<DeleteIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a delete integration
 */
DeleteIntegrationResponseResponse * APIGatewayClient::deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request)
{
    return qobject_cast<DeleteIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing <a>Method</a>
 */
DeleteMethodResponse * APIGatewayClient::deleteMethod(const DeleteMethodRequest &request)
{
    return qobject_cast<DeleteMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing <a>MethodResponse</a>
 */
DeleteMethodResponseResponse * APIGatewayClient::deleteMethodResponse(const DeleteMethodResponseRequest &request)
{
    return qobject_cast<DeleteMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteModelResponse * APIGatewayClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a>RequestValidator</a> of a given
 */
DeleteRequestValidatorResponse * APIGatewayClient::deleteRequestValidator(const DeleteRequestValidatorRequest &request)
{
    return qobject_cast<DeleteRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a>Resource</a>
 */
DeleteResourceResponse * APIGatewayClient::deleteResource(const DeleteResourceRequest &request)
{
    return qobject_cast<DeleteResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteRestApiResponse * APIGatewayClient::deleteRestApi(const DeleteRestApiRequest &request)
{
    return qobject_cast<DeleteRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a>Stage</a>
 */
DeleteStageResponse * APIGatewayClient::deleteStage(const DeleteStageRequest &request)
{
    return qobject_cast<DeleteStageResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a usage plan of a given plan
 */
DeleteUsagePlanResponse * APIGatewayClient::deleteUsagePlan(const DeleteUsagePlanRequest &request)
{
    return qobject_cast<DeleteUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteUsagePlanKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a usage plan key and remove the underlying API key from the associated usage
 */
DeleteUsagePlanKeyResponse * APIGatewayClient::deleteUsagePlanKey(const DeleteUsagePlanKeyRequest &request)
{
    return qobject_cast<DeleteUsagePlanKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * DeleteVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing <a>VpcLink</a> of a specified
 */
DeleteVpcLinkResponse * APIGatewayClient::deleteVpcLink(const DeleteVpcLinkRequest &request)
{
    return qobject_cast<DeleteVpcLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * FlushStageAuthorizersCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Flushes all authorizer cache entries on a
 */
FlushStageAuthorizersCacheResponse * APIGatewayClient::flushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest &request)
{
    return qobject_cast<FlushStageAuthorizersCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * FlushStageCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Flushes a stage's
 */
FlushStageCacheResponse * APIGatewayClient::flushStageCache(const FlushStageCacheRequest &request)
{
    return qobject_cast<FlushStageCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GenerateClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a <a>ClientCertificate</a>
 */
GenerateClientCertificateResponse * APIGatewayClient::generateClientCertificate(const GenerateClientCertificateRequest &request)
{
    return qobject_cast<GenerateClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current <a>Account</a>
 */
GetAccountResponse * APIGatewayClient::getAccount(const GetAccountRequest &request)
{
    return qobject_cast<GetAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current <a>ApiKey</a>
 */
GetApiKeyResponse * APIGatewayClient::getApiKey(const GetApiKeyRequest &request)
{
    return qobject_cast<GetApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetApiKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current <a>ApiKeys</a>
 */
GetApiKeysResponse * APIGatewayClient::getApiKeys(const GetApiKeysRequest &request)
{
    return qobject_cast<GetApiKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 */
GetAuthorizerResponse * APIGatewayClient::getAuthorizer(const GetAuthorizerRequest &request)
{
    return qobject_cast<GetAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetAuthorizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an existing <a>Authorizers</a>
 *
 * resource> <div class="seeAlso"><a
 */
GetAuthorizersResponse * APIGatewayClient::getAuthorizers(const GetAuthorizersRequest &request)
{
    return qobject_cast<GetAuthorizersResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a <a>BasePathMapping</a>
 */
GetBasePathMappingResponse * APIGatewayClient::getBasePathMapping(const GetBasePathMappingRequest &request)
{
    return qobject_cast<GetBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetBasePathMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a collection of <a>BasePathMapping</a>
 */
GetBasePathMappingsResponse * APIGatewayClient::getBasePathMappings(const GetBasePathMappingsRequest &request)
{
    return qobject_cast<GetBasePathMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current <a>ClientCertificate</a>
 */
GetClientCertificateResponse * APIGatewayClient::getClientCertificate(const GetClientCertificateRequest &request)
{
    return qobject_cast<GetClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetClientCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a collection of <a>ClientCertificate</a>
 */
GetClientCertificatesResponse * APIGatewayClient::getClientCertificates(const GetClientCertificatesRequest &request)
{
    return qobject_cast<GetClientCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a <a>Deployment</a>
 */
GetDeploymentResponse * APIGatewayClient::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a <a>Deployments</a>
 */
GetDeploymentsResponse * APIGatewayClient::getDeployments(const GetDeploymentsRequest &request)
{
    return qobject_cast<GetDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDocumentationPartResponse * APIGatewayClient::getDocumentationPart(const GetDocumentationPartRequest &request)
{
    return qobject_cast<GetDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDocumentationPartsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDocumentationPartsResponse * APIGatewayClient::getDocumentationParts(const GetDocumentationPartsRequest &request)
{
    return qobject_cast<GetDocumentationPartsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDocumentationVersionResponse * APIGatewayClient::getDocumentationVersion(const GetDocumentationVersionRequest &request)
{
    return qobject_cast<GetDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDocumentationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDocumentationVersionsResponse * APIGatewayClient::getDocumentationVersions(const GetDocumentationVersionsRequest &request)
{
    return qobject_cast<GetDocumentationVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a domain name that is contained in a simpler, more intuitive URL that can be
 */
GetDomainNameResponse * APIGatewayClient::getDomainName(const GetDomainNameRequest &request)
{
    return qobject_cast<GetDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetDomainNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a collection of <a>DomainName</a>
 */
GetDomainNamesResponse * APIGatewayClient::getDomainNames(const GetDomainNamesRequest &request)
{
    return qobject_cast<GetDomainNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a deployed version of a <a>RestApi</a> in a specified
 */
GetExportResponse * APIGatewayClient::getExport(const GetExportRequest &request)
{
    return qobject_cast<GetExportResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a <a>GatewayResponse</a> of a specified response type on the given
 */
GetGatewayResponseResponse * APIGatewayClient::getGatewayResponse(const GetGatewayResponseRequest &request)
{
    return qobject_cast<GetGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetGatewayResponsesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the <a>GatewayResponses</a> collection on the given <a>RestApi</a>. If an API developer has not added any
 * definitions for gateway responses, the result will be the API Gateway-generated default <a>GatewayResponses</a>
 * collection for the supported response
 */
GetGatewayResponsesResponse * APIGatewayClient::getGatewayResponses(const GetGatewayResponsesRequest &request)
{
    return qobject_cast<GetGatewayResponsesResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the integration
 */
GetIntegrationResponse * APIGatewayClient::getIntegration(const GetIntegrationRequest &request)
{
    return qobject_cast<GetIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a get integration
 */
GetIntegrationResponseResponse * APIGatewayClient::getIntegrationResponse(const GetIntegrationResponseRequest &request)
{
    return qobject_cast<GetIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an existing <a>Method</a>
 */
GetMethodResponse * APIGatewayClient::getMethod(const GetMethodRequest &request)
{
    return qobject_cast<GetMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a <a>MethodResponse</a>
 */
GetMethodResponseResponse * APIGatewayClient::getMethodResponse(const GetMethodResponseRequest &request)
{
    return qobject_cast<GetMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing model defined for a <a>RestApi</a>
 */
GetModelResponse * APIGatewayClient::getModel(const GetModelRequest &request)
{
    return qobject_cast<GetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetModelTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a sample mapping template that can be used to transform a payload into the structure of a
 */
GetModelTemplateResponse * APIGatewayClient::getModelTemplate(const GetModelTemplateRequest &request)
{
    return qobject_cast<GetModelTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes existing <a>Models</a> defined for a <a>RestApi</a>
 */
GetModelsResponse * APIGatewayClient::getModels(const GetModelsRequest &request)
{
    return qobject_cast<GetModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a <a>RequestValidator</a> of a given
 */
GetRequestValidatorResponse * APIGatewayClient::getRequestValidator(const GetRequestValidatorRequest &request)
{
    return qobject_cast<GetRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetRequestValidatorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the <a>RequestValidators</a> collection of a given
 */
GetRequestValidatorsResponse * APIGatewayClient::getRequestValidators(const GetRequestValidatorsRequest &request)
{
    return qobject_cast<GetRequestValidatorsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about a
 */
GetResourceResponse * APIGatewayClient::getResource(const GetResourceRequest &request)
{
    return qobject_cast<GetResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about a collection of <a>Resource</a>
 */
GetResourcesResponse * APIGatewayClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the <a>RestApi</a> resource in the
 */
GetRestApiResponse * APIGatewayClient::getRestApi(const GetRestApiRequest &request)
{
    return qobject_cast<GetRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetRestApisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the <a>RestApis</a> resources for your
 */
GetRestApisResponse * APIGatewayClient::getRestApis(const GetRestApisRequest &request)
{
    return qobject_cast<GetRestApisResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetSdkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a client SDK for a <a>RestApi</a> and
 */
GetSdkResponse * APIGatewayClient::getSdk(const GetSdkRequest &request)
{
    return qobject_cast<GetSdkResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetSdkTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSdkTypeResponse * APIGatewayClient::getSdkType(const GetSdkTypeRequest &request)
{
    return qobject_cast<GetSdkTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetSdkTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSdkTypesResponse * APIGatewayClient::getSdkTypes(const GetSdkTypesRequest &request)
{
    return qobject_cast<GetSdkTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a <a>Stage</a>
 */
GetStageResponse * APIGatewayClient::getStage(const GetStageRequest &request)
{
    return qobject_cast<GetStageResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetStagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more <a>Stage</a>
 */
GetStagesResponse * APIGatewayClient::getStages(const GetStagesRequest &request)
{
    return qobject_cast<GetStagesResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the <a>Tags</a> collection for a given
 */
GetTagsResponse * APIGatewayClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the usage data of a usage plan in a specified time
 */
GetUsageResponse * APIGatewayClient::getUsage(const GetUsageRequest &request)
{
    return qobject_cast<GetUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a usage plan of a given plan
 */
GetUsagePlanResponse * APIGatewayClient::getUsagePlan(const GetUsagePlanRequest &request)
{
    return qobject_cast<GetUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetUsagePlanKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a usage plan key of a given key
 */
GetUsagePlanKeyResponse * APIGatewayClient::getUsagePlanKey(const GetUsagePlanKeyRequest &request)
{
    return qobject_cast<GetUsagePlanKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetUsagePlanKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all the usage plan keys representing the API keys added to a specified usage
 */
GetUsagePlanKeysResponse * APIGatewayClient::getUsagePlanKeys(const GetUsagePlanKeysRequest &request)
{
    return qobject_cast<GetUsagePlanKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetUsagePlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all the usage plans of the caller's
 */
GetUsagePlansResponse * APIGatewayClient::getUsagePlans(const GetUsagePlansRequest &request)
{
    return qobject_cast<GetUsagePlansResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a specified VPC link under the caller's account in a
 */
GetVpcLinkResponse * APIGatewayClient::getVpcLink(const GetVpcLinkRequest &request)
{
    return qobject_cast<GetVpcLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * GetVpcLinksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the <a>VpcLinks</a> collection under the caller's account in a selected
 */
GetVpcLinksResponse * APIGatewayClient::getVpcLinks(const GetVpcLinksRequest &request)
{
    return qobject_cast<GetVpcLinksResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * ImportApiKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Import API keys from an external source, such as a CSV-formatted
 */
ImportApiKeysResponse * APIGatewayClient::importApiKeys(const ImportApiKeysRequest &request)
{
    return qobject_cast<ImportApiKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * ImportDocumentationPartsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ImportDocumentationPartsResponse * APIGatewayClient::importDocumentationParts(const ImportDocumentationPartsRequest &request)
{
    return qobject_cast<ImportDocumentationPartsResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * ImportRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A feature of the API Gateway control service for creating a new API from an external API definition
 */
ImportRestApiResponse * APIGatewayClient::importRestApi(const ImportRestApiRequest &request)
{
    return qobject_cast<ImportRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * PutGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a customization of a <a>GatewayResponse</a> of a specified response type and status code on the given
 */
PutGatewayResponseResponse * APIGatewayClient::putGatewayResponse(const PutGatewayResponseRequest &request)
{
    return qobject_cast<PutGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * PutIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets up a method's
 */
PutIntegrationResponse * APIGatewayClient::putIntegration(const PutIntegrationRequest &request)
{
    return qobject_cast<PutIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * PutIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a put
 */
PutIntegrationResponseResponse * APIGatewayClient::putIntegrationResponse(const PutIntegrationResponseRequest &request)
{
    return qobject_cast<PutIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * PutMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add a method to an existing <a>Resource</a>
 */
PutMethodResponse * APIGatewayClient::putMethod(const PutMethodRequest &request)
{
    return qobject_cast<PutMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * PutMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a <a>MethodResponse</a> to an existing <a>Method</a>
 */
PutMethodResponseResponse * APIGatewayClient::putMethodResponse(const PutMethodResponseRequest &request)
{
    return qobject_cast<PutMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * PutRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A feature of the API Gateway control service for updating an existing API with an input of external API definitions. The
 * update can take the form of merging the supplied definition into the existing API or overwriting the existing
 */
PutRestApiResponse * APIGatewayClient::putRestApi(const PutRestApiRequest &request)
{
    return qobject_cast<PutRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates a tag on a given
 */
TagResourceResponse * APIGatewayClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * TestInvokeAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulate the execution of an <a>Authorizer</a> in your <a>RestApi</a> with headers, parameters, and an incoming request
 *
 * body> <div class="seeAlso"> <a
 * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-use-lambda-authorizer.html">Use Lambda
 * Function as Authorizer</a> <a
 * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-integrate-with-cognito.html">Use Cognito
 */
TestInvokeAuthorizerResponse * APIGatewayClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{
    return qobject_cast<TestInvokeAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * TestInvokeMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulate the execution of a <a>Method</a> in your <a>RestApi</a> with headers, parameters, and an incoming request
 */
TestInvokeMethodResponse * APIGatewayClient::testInvokeMethod(const TestInvokeMethodRequest &request)
{
    return qobject_cast<TestInvokeMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a given
 */
UntagResourceResponse * APIGatewayClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the current <a>Account</a>
 */
UpdateAccountResponse * APIGatewayClient::updateAccount(const UpdateAccountRequest &request)
{
    return qobject_cast<UpdateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about an <a>ApiKey</a>
 */
UpdateApiKeyResponse * APIGatewayClient::updateApiKey(const UpdateApiKeyRequest &request)
{
    return qobject_cast<UpdateApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 */
UpdateAuthorizerResponse * APIGatewayClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{
    return qobject_cast<UpdateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the <a>BasePathMapping</a>
 */
UpdateBasePathMappingResponse * APIGatewayClient::updateBasePathMapping(const UpdateBasePathMappingRequest &request)
{
    return qobject_cast<UpdateBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about an <a>ClientCertificate</a>
 */
UpdateClientCertificateResponse * APIGatewayClient::updateClientCertificate(const UpdateClientCertificateRequest &request)
{
    return qobject_cast<UpdateClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a <a>Deployment</a>
 */
UpdateDeploymentResponse * APIGatewayClient::updateDeployment(const UpdateDeploymentRequest &request)
{
    return qobject_cast<UpdateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateDocumentationPartResponse * APIGatewayClient::updateDocumentationPart(const UpdateDocumentationPartRequest &request)
{
    return qobject_cast<UpdateDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateDocumentationVersionResponse * APIGatewayClient::updateDocumentationVersion(const UpdateDocumentationVersionRequest &request)
{
    return qobject_cast<UpdateDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the <a>DomainName</a>
 */
UpdateDomainNameResponse * APIGatewayClient::updateDomainName(const UpdateDomainNameRequest &request)
{
    return qobject_cast<UpdateDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <a>GatewayResponse</a> of a specified response type on the given
 */
UpdateGatewayResponseResponse * APIGatewayClient::updateGatewayResponse(const UpdateGatewayResponseRequest &request)
{
    return qobject_cast<UpdateGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents an update
 */
UpdateIntegrationResponse * APIGatewayClient::updateIntegration(const UpdateIntegrationRequest &request)
{
    return qobject_cast<UpdateIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents an update integration
 */
UpdateIntegrationResponseResponse * APIGatewayClient::updateIntegrationResponse(const UpdateIntegrationResponseRequest &request)
{
    return qobject_cast<UpdateIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing <a>Method</a>
 */
UpdateMethodResponse * APIGatewayClient::updateMethod(const UpdateMethodRequest &request)
{
    return qobject_cast<UpdateMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing <a>MethodResponse</a>
 */
UpdateMethodResponseResponse * APIGatewayClient::updateMethodResponse(const UpdateMethodResponseRequest &request)
{
    return qobject_cast<UpdateMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a
 */
UpdateModelResponse * APIGatewayClient::updateModel(const UpdateModelRequest &request)
{
    return qobject_cast<UpdateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <a>RequestValidator</a> of a given
 */
UpdateRequestValidatorResponse * APIGatewayClient::updateRequestValidator(const UpdateRequestValidatorRequest &request)
{
    return qobject_cast<UpdateRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a <a>Resource</a>
 */
UpdateResourceResponse * APIGatewayClient::updateResource(const UpdateResourceRequest &request)
{
    return qobject_cast<UpdateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the specified
 */
UpdateRestApiResponse * APIGatewayClient::updateRestApi(const UpdateRestApiRequest &request)
{
    return qobject_cast<UpdateRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a <a>Stage</a>
 */
UpdateStageResponse * APIGatewayClient::updateStage(const UpdateStageRequest &request)
{
    return qobject_cast<UpdateStageResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants a temporary extension to the remaining quota of a usage plan associated with a specified API
 */
UpdateUsageResponse * APIGatewayClient::updateUsage(const UpdateUsageRequest &request)
{
    return qobject_cast<UpdateUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a usage plan of a given plan
 */
UpdateUsagePlanResponse * APIGatewayClient::updateUsagePlan(const UpdateUsagePlanRequest &request)
{
    return qobject_cast<UpdateUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the APIGatewayClient service, and returns a pointer to an
 * UpdateVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing <a>VpcLink</a> of a specified
 */
UpdateVpcLinkResponse * APIGatewayClient::updateVpcLink(const UpdateVpcLinkRequest &request)
{
    return qobject_cast<UpdateVpcLinkResponse *>(send(request));
}

/*!
 * \class QtAws::APIGateway::APIGatewayClientPrivate
 * \brief The APIGatewayClientPrivate class provides private implementation for APIGatewayClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a APIGatewayClientPrivate object with public implementation \a q.
 */
APIGatewayClientPrivate::APIGatewayClientPrivate(APIGatewayClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace APIGateway
} // namespace QtAws
