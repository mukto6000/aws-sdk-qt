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

#include "servicediscoveryclient.h"
#include "servicediscoveryclient_p.h"

#include "core/awssignaturev4.h"
#include "createhttpnamespacerequest.h"
#include "createhttpnamespaceresponse.h"
#include "createprivatednsnamespacerequest.h"
#include "createprivatednsnamespaceresponse.h"
#include "createpublicdnsnamespacerequest.h"
#include "createpublicdnsnamespaceresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "deletenamespacerequest.h"
#include "deletenamespaceresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "deregisterinstancerequest.h"
#include "deregisterinstanceresponse.h"
#include "discoverinstancesrequest.h"
#include "discoverinstancesresponse.h"
#include "getinstancerequest.h"
#include "getinstanceresponse.h"
#include "getinstanceshealthstatusrequest.h"
#include "getinstanceshealthstatusresponse.h"
#include "getnamespacerequest.h"
#include "getnamespaceresponse.h"
#include "getoperationrequest.h"
#include "getoperationresponse.h"
#include "getservicerequest.h"
#include "getserviceresponse.h"
#include "listinstancesrequest.h"
#include "listinstancesresponse.h"
#include "listnamespacesrequest.h"
#include "listnamespacesresponse.h"
#include "listoperationsrequest.h"
#include "listoperationsresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "registerinstancerequest.h"
#include "registerinstanceresponse.h"
#include "updateinstancecustomhealthstatusrequest.h"
#include "updateinstancecustomhealthstatusresponse.h"
#include "updateservicerequest.h"
#include "updateserviceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ServiceDiscovery
 * \brief Contains classess for accessing AWS Cloud Map (ServiceDiscovery).
 *
 * \inmodule QtAwsServiceDiscovery
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryClient
 * \brief The ServiceDiscoveryClient class provides access to the AWS Cloud Map (ServiceDiscovery) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceDiscovery
 *
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
 */

/*!
 * \brief Constructs a ServiceDiscoveryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ServiceDiscoveryClient::ServiceDiscoveryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ServiceDiscoveryClientPrivate(this), parent)
{
    Q_D(ServiceDiscoveryClient);
    d->apiVersion = QStringLiteral("2017-03-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("servicediscovery");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Cloud Map");
    d->serviceName = QStringLiteral("servicediscovery");
}

/*!
 * \overload ServiceDiscoveryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ServiceDiscoveryClient::ServiceDiscoveryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ServiceDiscoveryClientPrivate(this), parent)
{
    Q_D(ServiceDiscoveryClient);
    d->apiVersion = QStringLiteral("2017-03-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("servicediscovery");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Cloud Map");
    d->serviceName = QStringLiteral("servicediscovery");
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreateHttpNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an HTTP namespace. Service instances that you register using an HTTP namespace can be discovered using a
 * <code>DiscoverInstances</code> request but can't be discovered using DNS.
 *
 * </p
 *
 * For the current limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">AWS Cloud Map Limits</a> in the <i>AWS Cloud
 * Map Developer
 */
CreateHttpNamespaceResponse * ServiceDiscoveryClient::createHttpNamespace(const CreateHttpNamespaceRequest &request)
{
    return qobject_cast<CreateHttpNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreatePrivateDnsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a private namespace based on DNS, which will be visible only inside a specified Amazon VPC. The namespace
 * defines your service naming scheme. For example, if you name your namespace <code>example.com</code> and name your
 * service <code>backend</code>, the resulting DNS name for the service will be <code>backend.example.com</code>. For the
 * current limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">AWS Cloud Map Limits</a> in the <i>AWS Cloud
 * Map Developer
 */
CreatePrivateDnsNamespaceResponse * ServiceDiscoveryClient::createPrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest &request)
{
    return qobject_cast<CreatePrivateDnsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreatePublicDnsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a public namespace based on DNS, which will be visible on the internet. The namespace defines your service
 * naming scheme. For example, if you name your namespace <code>example.com</code> and name your service
 * <code>backend</code>, the resulting DNS name for the service will be <code>backend.example.com</code>. For the current
 * limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">AWS Cloud Map Limits</a> in the <i>AWS Cloud
 * Map Developer
 */
CreatePublicDnsNamespaceResponse * ServiceDiscoveryClient::createPublicDnsNamespace(const CreatePublicDnsNamespaceRequest &request)
{
    return qobject_cast<CreatePublicDnsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a service, which defines the configuration for the following
 *
 * entities> <ul> <li>
 *
 * For public and private DNS namespaces, one of the following combinations of DNS records in Amazon Route
 *
 * 53> <ul> <li>
 *
 * > </li> <li>
 *
 * AAA> </li> <li>
 *
 * A and
 *
 * AAA> </li> <li>
 *
 * SR> </li> <li>
 *
 * CNAM> </li> </ul> </li> <li>
 *
 * Optionally, a health
 *
 * chec> </li> </ul>
 *
 * After you create the service, you can submit a <a>RegisterInstance</a> request, and AWS Cloud Map uses the values in the
 * configuration to create the specified
 *
 * entities>
 *
 * For the current limit on the number of instances that you can register using the same namespace and using the same
 * service, see <a href="http://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">AWS Cloud Map Limits</a> in
 * the <i>AWS Cloud Map Developer
 */
CreateServiceResponse * ServiceDiscoveryClient::createService(const CreateServiceRequest &request)
{
    return qobject_cast<CreateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DeleteNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a namespace from the current account. If the namespace still contains one or more services, the request
 */
DeleteNamespaceResponse * ServiceDiscoveryClient::deleteNamespace(const DeleteNamespaceRequest &request)
{
    return qobject_cast<DeleteNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified service. If the service still contains one or more registered instances, the request
 */
DeleteServiceResponse * ServiceDiscoveryClient::deleteService(const DeleteServiceRequest &request)
{
    return qobject_cast<DeleteServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DeregisterInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon Route 53 DNS records and health check, if any, that AWS Cloud Map created for the specified
 */
DeregisterInstanceResponse * ServiceDiscoveryClient::deregisterInstance(const DeregisterInstanceRequest &request)
{
    return qobject_cast<DeregisterInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DiscoverInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Discovers registered instances for a specified namespace and
 */
DiscoverInstancesResponse * ServiceDiscoveryClient::discoverInstances(const DiscoverInstancesRequest &request)
{
    return qobject_cast<DiscoverInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified
 */
GetInstanceResponse * ServiceDiscoveryClient::getInstance(const GetInstanceRequest &request)
{
    return qobject_cast<GetInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetInstancesHealthStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the current health status (<code>Healthy</code>, <code>Unhealthy</code>, or <code>Unknown</code>) of one or more
 * instances that are associated with a specified
 *
 * service> <note>
 *
 * There is a brief delay between when you register an instance and when the health status for the instance is available.
 */
GetInstancesHealthStatusResponse * ServiceDiscoveryClient::getInstancesHealthStatus(const GetInstancesHealthStatusRequest &request)
{
    return qobject_cast<GetInstancesHealthStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetNamespaceResponse * ServiceDiscoveryClient::getNamespace(const GetNamespaceRequest &request)
{
    return qobject_cast<GetNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about any operation that returns an operation ID in the response, such as a <code>CreateService</code>
 *
 * request> <note>
 *
 * To get a list of operations that match specified criteria, see
 */
GetOperationResponse * ServiceDiscoveryClient::getOperation(const GetOperationRequest &request)
{
    return qobject_cast<GetOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the settings for a specified
 */
GetServiceResponse * ServiceDiscoveryClient::getService(const GetServiceRequest &request)
{
    return qobject_cast<GetServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information about the instances that you registered by using a specified
 */
ListInstancesResponse * ServiceDiscoveryClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListNamespacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information about the namespaces that were created by the current AWS
 */
ListNamespacesResponse * ServiceDiscoveryClient::listNamespaces(const ListNamespacesRequest &request)
{
    return qobject_cast<ListNamespacesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists operations that match the criteria that you
 */
ListOperationsResponse * ServiceDiscoveryClient::listOperations(const ListOperationsRequest &request)
{
    return qobject_cast<ListOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information for all the services that are associated with one or more specified
 */
ListServicesResponse * ServiceDiscoveryClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * RegisterInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates one or more records and, optionally, creates a health check based on the settings in a specified
 * service. When you submit a <code>RegisterInstance</code> request, the following
 *
 * occurs> <ul> <li>
 *
 * For each DNS record that you define in the service that is specified by <code>ServiceId</code>, a record is created or
 * updated in the hosted zone that is associated with the corresponding
 *
 * namespace> </li> <li>
 *
 * If the service includes <code>HealthCheckConfig</code>, a health check is created based on the settings in the health
 * check
 *
 * configuration> </li> <li>
 *
 * The health check, if any, is associated with each of the new or updated
 *
 * records> </li> </ul> <b>
 *
 * One <code>RegisterInstance</code> request must complete before you can submit another request and specify the same
 * service ID and instance
 *
 * ID> </b>
 *
 * For more information, see
 *
 * <a>CreateService</a>>
 *
 * When AWS Cloud Map receives a DNS query for the specified DNS name, it returns the applicable
 *
 * value> <ul> <li>
 *
 * <b>If the health check is healthy</b>: returns all the
 *
 * record> </li> <li>
 *
 * <b>If the health check is unhealthy</b>: returns the applicable value for the last healthy
 *
 * instanc> </li> <li>
 *
 * <b>If you didn't specify a health check configuration</b>: returns all the
 *
 * record> </li> </ul>
 *
 * For the current limit on the number of instances that you can register using the same namespace and using the same
 * service, see <a href="http://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">AWS Cloud Map Limits</a> in
 * the <i>AWS Cloud Map Developer
 */
RegisterInstanceResponse * ServiceDiscoveryClient::registerInstance(const RegisterInstanceRequest &request)
{
    return qobject_cast<RegisterInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * UpdateInstanceCustomHealthStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits a request to change the health status of a custom health check to healthy or
 *
 * unhealthy>
 *
 * You can use <code>UpdateInstanceCustomHealthStatus</code> to change the status only for custom health checks, which you
 * define using <code>HealthCheckCustomConfig</code> when you create a service. You can't use it to change the status for
 * Route 53 health checks, which you define using
 *
 * <code>HealthCheckConfig</code>>
 *
 * For more information, see
 */
UpdateInstanceCustomHealthStatusResponse * ServiceDiscoveryClient::updateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest &request)
{
    return qobject_cast<UpdateInstanceCustomHealthStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * UpdateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits a request to perform the following
 *
 * operations> <ul> <li>
 *
 * Add or delete <code>DnsRecords</code>
 *
 * configuration> </li> <li>
 *
 * Update the TTL setting for existing <code>DnsRecords</code>
 *
 * configuration> </li> <li>
 *
 * Add, update, or delete <code>HealthCheckConfig</code> for a specified
 *
 * servic> </li> </ul>
 *
 * For public and private DNS namespaces, you must specify all <code>DnsRecords</code> configurations (and, optionally,
 * <code>HealthCheckConfig</code>) that you want to appear in the updated service. Any current configurations that don't
 * appear in an <code>UpdateService</code> request are
 *
 * deleted>
 *
 * When you update the TTL setting for a service, AWS Cloud Map also updates the corresponding settings in all the records
 * and health checks that were created by using the specified
 */
UpdateServiceResponse * ServiceDiscoveryClient::updateService(const UpdateServiceRequest &request)
{
    return qobject_cast<UpdateServiceResponse *>(send(request));
}

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryClientPrivate
 * \brief The ServiceDiscoveryClientPrivate class provides private implementation for ServiceDiscoveryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ServiceDiscoveryClientPrivate object with public implementation \a q.
 */
ServiceDiscoveryClientPrivate::ServiceDiscoveryClientPrivate(ServiceDiscoveryClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ServiceDiscovery
} // namespace QtAws
