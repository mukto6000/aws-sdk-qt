// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "apprunnerclient.h"
#include "apprunnerclient_p.h"

#include "core/awssignaturev4.h"
#include "associatecustomdomainrequest.h"
#include "associatecustomdomainresponse.h"
#include "createautoscalingconfigurationrequest.h"
#include "createautoscalingconfigurationresponse.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createobservabilityconfigurationrequest.h"
#include "createobservabilityconfigurationresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "createvpcconnectorrequest.h"
#include "createvpcconnectorresponse.h"
#include "deleteautoscalingconfigurationrequest.h"
#include "deleteautoscalingconfigurationresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deleteobservabilityconfigurationrequest.h"
#include "deleteobservabilityconfigurationresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "deletevpcconnectorrequest.h"
#include "deletevpcconnectorresponse.h"
#include "describeautoscalingconfigurationrequest.h"
#include "describeautoscalingconfigurationresponse.h"
#include "describecustomdomainsrequest.h"
#include "describecustomdomainsresponse.h"
#include "describeobservabilityconfigurationrequest.h"
#include "describeobservabilityconfigurationresponse.h"
#include "describeservicerequest.h"
#include "describeserviceresponse.h"
#include "describevpcconnectorrequest.h"
#include "describevpcconnectorresponse.h"
#include "disassociatecustomdomainrequest.h"
#include "disassociatecustomdomainresponse.h"
#include "listautoscalingconfigurationsrequest.h"
#include "listautoscalingconfigurationsresponse.h"
#include "listconnectionsrequest.h"
#include "listconnectionsresponse.h"
#include "listobservabilityconfigurationsrequest.h"
#include "listobservabilityconfigurationsresponse.h"
#include "listoperationsrequest.h"
#include "listoperationsresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listvpcconnectorsrequest.h"
#include "listvpcconnectorsresponse.h"
#include "pauseservicerequest.h"
#include "pauseserviceresponse.h"
#include "resumeservicerequest.h"
#include "resumeserviceresponse.h"
#include "startdeploymentrequest.h"
#include "startdeploymentresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateservicerequest.h"
#include "updateserviceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppRunner
 * \brief Contains classess for accessing AWS App Runner.
 *
 * \inmodule QtAwsAppRunner
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::AppRunnerClient
 * \brief The AppRunnerClient class provides access to the AWS App Runner service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppRunner
 *
 *  <fullname>App Runner</fullname>
 * 
 *  App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the Amazon Web Services Cloud in seconds. You don't need
 *  to learn new technologies, decide which compute service to use, or understand how to provision and configure Amazon Web
 *  Services
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
 * 
 *  Notes</a>>
 * 
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that you can use to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that App Runner supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner endpoints and quotas</a> in the <i>Amazon
 *  Web Services General
 */

/*!
 * \brief Constructs a AppRunnerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppRunnerClient::AppRunnerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppRunnerClientPrivate(this), parent)
{
    Q_D(AppRunnerClient);
    d->apiVersion = QStringLiteral("2020-05-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("apprunner");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS App Runner");
    d->serviceName = QStringLiteral("apprunner");
}

/*!
 * \overload AppRunnerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppRunnerClient::AppRunnerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppRunnerClientPrivate(this), parent)
{
    Q_D(AppRunnerClient);
    d->apiVersion = QStringLiteral("2020-05-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("apprunner");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS App Runner");
    d->serviceName = QStringLiteral("apprunner");
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * AssociateCustomDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate your own domain name with the App Runner subdomain URL of your App Runner
 *
 * service>
 *
 * After you call <code>AssociateCustomDomain</code> and receive a successful response, use the information in the
 * <a>CustomDomain</a> record that's returned to add CNAME records to your Domain Name System (DNS). For each mapped domain
 * name, add a mapping to the target App Runner subdomain and one or more certificate validation records. App Runner then
 * performs DNS validation to verify that you own or control the domain name that you associated. App Runner tracks domain
 * validity in a certificate stored in <a href="https://docs.aws.amazon.com/acm/latest/userguide">AWS Certificate Manager
 */
AssociateCustomDomainResponse * AppRunnerClient::associateCustomDomain(const AssociateCustomDomainRequest &request)
{
    return qobject_cast<AssociateCustomDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * CreateAutoScalingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an App Runner automatic scaling configuration resource. App Runner requires this resource when you create or
 * update App Runner services and you require non-default auto scaling settings. You can share an auto scaling
 * configuration across multiple
 *
 * services>
 *
 * Create multiple revisions of a configuration by calling this action multiple times using the same
 * <code>AutoScalingConfigurationName</code>. The call returns incremental <code>AutoScalingConfigurationRevision</code>
 * values. When you create a service and configure an auto scaling configuration resource, the service uses the latest
 * active revision of the auto scaling configuration by default. You can optionally configure the service to use a specific
 *
 * revision>
 *
 * Configure a higher <code>MinSize</code> to increase the spread of your App Runner service over more Availability Zones
 * in the Amazon Web Services Region. The tradeoff is a higher minimal
 *
 * cost>
 *
 * Configure a lower <code>MaxSize</code> to control your cost. The tradeoff is lower responsiveness during peak
 */
CreateAutoScalingConfigurationResponse * AppRunnerClient::createAutoScalingConfiguration(const CreateAutoScalingConfigurationRequest &request)
{
    return qobject_cast<CreateAutoScalingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * CreateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an App Runner connection resource. App Runner requires a connection resource when you create App Runner services
 * that access private repositories from certain third-party providers. You can share a connection across multiple
 *
 * services>
 *
 * A connection resource is needed to access GitHub repositories. GitHub requires a user interface approval process through
 * the App Runner console before you can use the
 */
CreateConnectionResponse * AppRunnerClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * CreateObservabilityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an App Runner observability configuration resource. App Runner requires this resource when you create or update
 * App Runner services and you want to enable non-default observability features. You can share an observability
 * configuration across multiple
 *
 * services>
 *
 * Create multiple revisions of a configuration by calling this action multiple times using the same
 * <code>ObservabilityConfigurationName</code>. The call returns incremental
 * <code>ObservabilityConfigurationRevision</code> values. When you create a service and configure an observability
 * configuration resource, the service uses the latest active revision of the observability configuration by default. You
 * can optionally configure the service to use a specific
 *
 * revision>
 *
 * The observability configuration resource is designed to configure multiple features (currently one feature, tracing).
 * This action takes optional parameters that describe the configuration of these features (currently one parameter,
 * <code>TraceConfiguration</code>). If you don't specify a feature parameter, App Runner doesn't enable the
 */
CreateObservabilityConfigurationResponse * AppRunnerClient::createObservabilityConfiguration(const CreateObservabilityConfigurationRequest &request)
{
    return qobject_cast<CreateObservabilityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an App Runner service. After the service is created, the action also automatically starts a
 *
 * deployment>
 *
 * This is an asynchronous operation. On a successful call, you can use the returned <code>OperationId</code> and the <a
 * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ListOperations.html">ListOperations</a> call to track the
 * operation's
 */
CreateServiceResponse * AppRunnerClient::createService(const CreateServiceRequest &request)
{
    return qobject_cast<CreateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * CreateVpcConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an App Runner VPC connector resource. App Runner requires this resource when you want to associate your App
 * Runner service to a custom Amazon Virtual Private Cloud (Amazon
 */
CreateVpcConnectorResponse * AppRunnerClient::createVpcConnector(const CreateVpcConnectorRequest &request)
{
    return qobject_cast<CreateVpcConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DeleteAutoScalingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an App Runner automatic scaling configuration resource. You can delete a specific revision or the latest active
 * revision. You can't delete a configuration that's used by one or more App Runner
 */
DeleteAutoScalingConfigurationResponse * AppRunnerClient::deleteAutoScalingConfiguration(const DeleteAutoScalingConfigurationRequest &request)
{
    return qobject_cast<DeleteAutoScalingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an App Runner connection. You must first ensure that there are no running App Runner services that use this
 * connection. If there are any, the <code>DeleteConnection</code> action
 */
DeleteConnectionResponse * AppRunnerClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DeleteObservabilityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an App Runner observability configuration resource. You can delete a specific revision or the latest active
 * revision. You can't delete a configuration that's used by one or more App Runner
 */
DeleteObservabilityConfigurationResponse * AppRunnerClient::deleteObservabilityConfiguration(const DeleteObservabilityConfigurationRequest &request)
{
    return qobject_cast<DeleteObservabilityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an App Runner
 *
 * service>
 *
 * This is an asynchronous operation. On a successful call, you can use the returned <code>OperationId</code> and the
 * <a>ListOperations</a> call to track the operation's
 */
DeleteServiceResponse * AppRunnerClient::deleteService(const DeleteServiceRequest &request)
{
    return qobject_cast<DeleteServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DeleteVpcConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an App Runner VPC connector resource. You can't delete a connector that's used by one or more App Runner
 */
DeleteVpcConnectorResponse * AppRunnerClient::deleteVpcConnector(const DeleteVpcConnectorRequest &request)
{
    return qobject_cast<DeleteVpcConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DescribeAutoScalingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a full description of an App Runner automatic scaling configuration
 */
DescribeAutoScalingConfigurationResponse * AppRunnerClient::describeAutoScalingConfiguration(const DescribeAutoScalingConfigurationRequest &request)
{
    return qobject_cast<DescribeAutoScalingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DescribeCustomDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a description of custom domain names that are associated with an App Runner
 */
DescribeCustomDomainsResponse * AppRunnerClient::describeCustomDomains(const DescribeCustomDomainsRequest &request)
{
    return qobject_cast<DescribeCustomDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DescribeObservabilityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a full description of an App Runner observability configuration
 */
DescribeObservabilityConfigurationResponse * AppRunnerClient::describeObservabilityConfiguration(const DescribeObservabilityConfigurationRequest &request)
{
    return qobject_cast<DescribeObservabilityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DescribeServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a full description of an App Runner
 */
DescribeServiceResponse * AppRunnerClient::describeService(const DescribeServiceRequest &request)
{
    return qobject_cast<DescribeServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DescribeVpcConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a description of an App Runner VPC connector
 */
DescribeVpcConnectorResponse * AppRunnerClient::describeVpcConnector(const DescribeVpcConnectorRequest &request)
{
    return qobject_cast<DescribeVpcConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * DisassociateCustomDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociate a custom domain name from an App Runner
 *
 * service>
 *
 * Certificates tracking domain validity are associated with a custom domain and are stored in <a
 * href="https://docs.aws.amazon.com/acm/latest/userguide">AWS Certificate Manager (ACM)</a>. These certificates aren't
 * deleted as part of this action. App Runner delays certificate deletion for 30 days after a domain is disassociated from
 * your
 */
DisassociateCustomDomainResponse * AppRunnerClient::disassociateCustomDomain(const DisassociateCustomDomainRequest &request)
{
    return qobject_cast<DisassociateCustomDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListAutoScalingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of active App Runner automatic scaling configurations in your Amazon Web Services account. You can query
 * the revisions for a specific configuration name or the revisions for all active configurations in your account. You can
 * optionally query only the latest revision of each requested
 *
 * name>
 *
 * To retrieve a full description of a particular configuration revision, call and provide one of the ARNs returned by
 */
ListAutoScalingConfigurationsResponse * AppRunnerClient::listAutoScalingConfigurations(const ListAutoScalingConfigurationsRequest &request)
{
    return qobject_cast<ListAutoScalingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of App Runner connections that are associated with your Amazon Web Services
 */
ListConnectionsResponse * AppRunnerClient::listConnections(const ListConnectionsRequest &request)
{
    return qobject_cast<ListConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListObservabilityConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of active App Runner observability configurations in your Amazon Web Services account. You can query the
 * revisions for a specific configuration name or the revisions for all active configurations in your account. You can
 * optionally query only the latest revision of each requested
 *
 * name>
 *
 * To retrieve a full description of a particular configuration revision, call and provide one of the ARNs returned by
 */
ListObservabilityConfigurationsResponse * AppRunnerClient::listObservabilityConfigurations(const ListObservabilityConfigurationsRequest &request)
{
    return qobject_cast<ListObservabilityConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a list of operations that occurred on an App Runner
 *
 * service>
 *
 * The resulting list of <a>OperationSummary</a> objects is sorted in reverse chronological order. The first object on the
 * list represents the last started
 */
ListOperationsResponse * AppRunnerClient::listOperations(const ListOperationsRequest &request)
{
    return qobject_cast<ListOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of running App Runner services in your Amazon Web Services
 */
ListServicesResponse * AppRunnerClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List tags that are associated with for an App Runner resource. The response contains a list of tag key-value
 */
ListTagsForResourceResponse * AppRunnerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ListVpcConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of App Runner VPC connectors in your Amazon Web Services
 */
ListVpcConnectorsResponse * AppRunnerClient::listVpcConnectors(const ListVpcConnectorsRequest &request)
{
    return qobject_cast<ListVpcConnectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * PauseServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Pause an active App Runner service. App Runner reduces compute capacity for the service to zero and loses state (for
 * example, ephemeral storage is
 *
 * removed)>
 *
 * This is an asynchronous operation. On a successful call, you can use the returned <code>OperationId</code> and the
 * <a>ListOperations</a> call to track the operation's
 */
PauseServiceResponse * AppRunnerClient::pauseService(const PauseServiceRequest &request)
{
    return qobject_cast<PauseServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * ResumeServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resume an active App Runner service. App Runner provisions compute capacity for the
 *
 * service>
 *
 * This is an asynchronous operation. On a successful call, you can use the returned <code>OperationId</code> and the
 * <a>ListOperations</a> call to track the operation's
 */
ResumeServiceResponse * AppRunnerClient::resumeService(const ResumeServiceRequest &request)
{
    return qobject_cast<ResumeServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * StartDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiate a manual deployment of the latest commit in a source code repository or the latest image in a source image
 * repository to an App Runner
 *
 * service>
 *
 * For a source code repository, App Runner retrieves the commit and builds a Docker image. For a source image repository,
 * App Runner retrieves the latest Docker image. In both cases, App Runner then deploys the new image to your service and
 * starts a new container
 *
 * instance>
 *
 * This is an asynchronous operation. On a successful call, you can use the returned <code>OperationId</code> and the
 * <a>ListOperations</a> call to track the operation's
 */
StartDeploymentResponse * AppRunnerClient::startDeployment(const StartDeploymentRequest &request)
{
    return qobject_cast<StartDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add tags to, or update the tag values of, an App Runner resource. A tag is a key-value
 */
TagResourceResponse * AppRunnerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from an App Runner
 */
UntagResourceResponse * AppRunnerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRunnerClient service, and returns a pointer to an
 * UpdateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an App Runner service. You can update the source configuration and instance configuration of the service. You can
 * also update the ARN of the auto scaling configuration resource that's associated with the service. However, you can't
 * change the name or the encryption configuration of the service. These can be set only when you create the
 *
 * service>
 *
 * To update the tags applied to your service, use the separate actions <a>TagResource</a> and
 *
 * <a>UntagResource</a>>
 *
 * This is an asynchronous operation. On a successful call, you can use the returned <code>OperationId</code> and the
 * <a>ListOperations</a> call to track the operation's
 */
UpdateServiceResponse * AppRunnerClient::updateService(const UpdateServiceRequest &request)
{
    return qobject_cast<UpdateServiceResponse *>(send(request));
}

/*!
 * \class QtAws::AppRunner::AppRunnerClientPrivate
 * \brief The AppRunnerClientPrivate class provides private implementation for AppRunnerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a AppRunnerClientPrivate object with public implementation \a q.
 */
AppRunnerClientPrivate::AppRunnerClientPrivate(AppRunnerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppRunner
} // namespace QtAws
