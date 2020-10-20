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

#include "appmeshclient.h"
#include "appmeshclient_p.h"

#include "core/awssignaturev4.h"
#include "createmeshrequest.h"
#include "createmeshresponse.h"
#include "createrouterequest.h"
#include "createrouteresponse.h"
#include "createvirtualnoderequest.h"
#include "createvirtualnoderesponse.h"
#include "createvirtualrouterrequest.h"
#include "createvirtualrouterresponse.h"
#include "createvirtualservicerequest.h"
#include "createvirtualserviceresponse.h"
#include "deletemeshrequest.h"
#include "deletemeshresponse.h"
#include "deleterouterequest.h"
#include "deleterouteresponse.h"
#include "deletevirtualnoderequest.h"
#include "deletevirtualnoderesponse.h"
#include "deletevirtualrouterrequest.h"
#include "deletevirtualrouterresponse.h"
#include "deletevirtualservicerequest.h"
#include "deletevirtualserviceresponse.h"
#include "describemeshrequest.h"
#include "describemeshresponse.h"
#include "describerouterequest.h"
#include "describerouteresponse.h"
#include "describevirtualnoderequest.h"
#include "describevirtualnoderesponse.h"
#include "describevirtualrouterrequest.h"
#include "describevirtualrouterresponse.h"
#include "describevirtualservicerequest.h"
#include "describevirtualserviceresponse.h"
#include "listmeshesrequest.h"
#include "listmeshesresponse.h"
#include "listroutesrequest.h"
#include "listroutesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listvirtualnodesrequest.h"
#include "listvirtualnodesresponse.h"
#include "listvirtualroutersrequest.h"
#include "listvirtualroutersresponse.h"
#include "listvirtualservicesrequest.h"
#include "listvirtualservicesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatemeshrequest.h"
#include "updatemeshresponse.h"
#include "updaterouterequest.h"
#include "updaterouteresponse.h"
#include "updatevirtualnoderequest.h"
#include "updatevirtualnoderesponse.h"
#include "updatevirtualrouterrequest.h"
#include "updatevirtualrouterresponse.h"
#include "updatevirtualservicerequest.h"
#include "updatevirtualserviceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppMesh
 * \brief Contains classess for accessing AWS App Mesh.
 *
 * \inmodule QtAwsAppMesh
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::AppMeshClient
 * \brief The AppMeshClient class provides access to the AWS App Mesh service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppMesh
 *
 *  AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to monitor and control microservices. App
 *  Mesh standardizes how your microservices communicate, giving you end-to-end visibility and helping to ensure high
 *  availability for your
 * 
 *  applications>
 * 
 *  App Mesh gives you consistent visibility and network traffic controls for every microservice in an application. You can
 *  use App Mesh with AWS Fargate, Amazon ECS, Amazon EKS, Kubernetes on AWS, and Amazon
 * 
 *  EC2> <note>
 * 
 *  App Mesh supports microservice applications that use service discovery naming for their components. For more information
 *  about service discovery on Amazon ECS, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service Discovery</a> in the
 *  <i>Amazon Elastic Container Service Developer Guide</i>. Kubernetes <code>kube-dns</code> and <code>coredns</code> are
 *  supported. For more information, see <a
 *  href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS for Services and Pods</a> in the
 *  Kubernetes
 */

/*!
 * \brief Constructs a AppMeshClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppMeshClient::AppMeshClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppMeshClientPrivate(this), parent)
{
    Q_D(AppMeshClient);
    d->apiVersion = QStringLiteral("2019-01-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appmesh");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS App Mesh");
    d->serviceName = QStringLiteral("appmesh");
}

/*!
 * \overload AppMeshClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppMeshClient::AppMeshClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppMeshClientPrivate(this), parent)
{
    Q_D(AppMeshClient);
    d->apiVersion = QStringLiteral("2019-01-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appmesh");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS App Mesh");
    d->serviceName = QStringLiteral("appmesh");
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * CreateMeshResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a service mesh. A service mesh is a logical boundary for network traffic between the services that reside within
 *
 * it>
 *
 * After you create your service mesh, you can create virtual services, virtual nodes, virtual routers, and routes to
 * distribute traffic between the applications in your
 */
CreateMeshResponse * AppMeshClient::createMesh(const CreateMeshRequest &request)
{
    return qobject_cast<CreateMeshResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * CreateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a route that is associated with a virtual
 *
 * router>
 *
 * You can use the <code>prefix</code> parameter in your route specification for path-based routing of requests. For
 * example, if your virtual service name is <code>my-service.local</code> and you want the route to match requests to
 * <code>my-service.local/metrics</code>, your prefix should be
 *
 * <code>/metrics</code>>
 *
 * If your route matches a request, you can distribute traffic to one or more target virtual nodes with relative
 */
CreateRouteResponse * AppMeshClient::createRoute(const CreateRouteRequest &request)
{
    return qobject_cast<CreateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * CreateVirtualNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a virtual node within a service
 *
 * mesh>
 *
 * A virtual node acts as a logical pointer to a particular task group, such as an Amazon ECS service or a Kubernetes
 * deployment. When you create a virtual node, you can specify the service discovery information for your task
 *
 * group>
 *
 * Any inbound traffic that your virtual node expects should be specified as a <code>listener</code>. Any outbound traffic
 * that your virtual node expects to reach should be specified as a
 *
 * <code>backend</code>>
 *
 * The response metadata for your new virtual node contains the <code>arn</code> that is associated with the virtual node.
 * Set this value (either the full ARN or the truncated resource name: for example,
 * <code>mesh/default/virtualNode/simpleapp</code>) as the <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for
 * your task group's Envoy proxy container in your task definition or pod spec. This is then mapped to the
 * <code>node.id</code> and <code>node.cluster</code> Envoy
 *
 * parameters> <note>
 *
 * If you require your Envoy stats or tracing to use a different name, you can override the <code>node.cluster</code> value
 * that is set by <code>APPMESH_VIRTUAL_NODE_NAME</code> with the <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment
 */
CreateVirtualNodeResponse * AppMeshClient::createVirtualNode(const CreateVirtualNodeRequest &request)
{
    return qobject_cast<CreateVirtualNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * CreateVirtualRouterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a virtual router within a service
 *
 * mesh>
 *
 * Any inbound traffic that your virtual router expects should be specified as a <code>listener</code>.
 *
 * </p
 *
 * Virtual routers handle traffic for one or more virtual services within your mesh. After you create your virtual router,
 * create and associate routes for your virtual router that direct incoming requests to different virtual
 */
CreateVirtualRouterResponse * AppMeshClient::createVirtualRouter(const CreateVirtualRouterRequest &request)
{
    return qobject_cast<CreateVirtualRouterResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * CreateVirtualServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a virtual service within a service
 *
 * mesh>
 *
 * A virtual service is an abstraction of a real service that is provided by a virtual node directly or indirectly by means
 * of a virtual router. Dependent services call your virtual service by its <code>virtualServiceName</code>, and those
 * requests are routed to the virtual node or virtual router that is specified as the provider for the virtual
 */
CreateVirtualServiceResponse * AppMeshClient::createVirtualService(const CreateVirtualServiceRequest &request)
{
    return qobject_cast<CreateVirtualServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DeleteMeshResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing service
 *
 * mesh>
 *
 * You must delete all resources (virtual services, routes, virtual routers, and virtual nodes) in the service mesh before
 * you can delete the mesh
 */
DeleteMeshResponse * AppMeshClient::deleteMesh(const DeleteMeshRequest &request)
{
    return qobject_cast<DeleteMeshResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DeleteRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing
 */
DeleteRouteResponse * AppMeshClient::deleteRoute(const DeleteRouteRequest &request)
{
    return qobject_cast<DeleteRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DeleteVirtualNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing virtual
 *
 * node>
 *
 * You must delete any virtual services that list a virtual node as a service provider before you can delete the virtual
 * node
 */
DeleteVirtualNodeResponse * AppMeshClient::deleteVirtualNode(const DeleteVirtualNodeRequest &request)
{
    return qobject_cast<DeleteVirtualNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DeleteVirtualRouterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing virtual
 *
 * router>
 *
 * You must delete any routes associated with the virtual router before you can delete the router
 */
DeleteVirtualRouterResponse * AppMeshClient::deleteVirtualRouter(const DeleteVirtualRouterRequest &request)
{
    return qobject_cast<DeleteVirtualRouterResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DeleteVirtualServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing virtual
 */
DeleteVirtualServiceResponse * AppMeshClient::deleteVirtualService(const DeleteVirtualServiceRequest &request)
{
    return qobject_cast<DeleteVirtualServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DescribeMeshResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing service
 */
DescribeMeshResponse * AppMeshClient::describeMesh(const DescribeMeshRequest &request)
{
    return qobject_cast<DescribeMeshResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DescribeRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing
 */
DescribeRouteResponse * AppMeshClient::describeRoute(const DescribeRouteRequest &request)
{
    return qobject_cast<DescribeRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DescribeVirtualNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing virtual
 */
DescribeVirtualNodeResponse * AppMeshClient::describeVirtualNode(const DescribeVirtualNodeRequest &request)
{
    return qobject_cast<DescribeVirtualNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DescribeVirtualRouterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing virtual
 */
DescribeVirtualRouterResponse * AppMeshClient::describeVirtualRouter(const DescribeVirtualRouterRequest &request)
{
    return qobject_cast<DescribeVirtualRouterResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * DescribeVirtualServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing virtual
 */
DescribeVirtualServiceResponse * AppMeshClient::describeVirtualService(const DescribeVirtualServiceRequest &request)
{
    return qobject_cast<DescribeVirtualServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * ListMeshesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing service
 */
ListMeshesResponse * AppMeshClient::listMeshes(const ListMeshesRequest &request)
{
    return qobject_cast<ListMeshesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * ListRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing routes in a service
 */
ListRoutesResponse * AppMeshClient::listRoutes(const ListRoutesRequest &request)
{
    return qobject_cast<ListRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tags for an App Mesh
 */
ListTagsForResourceResponse * AppMeshClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * ListVirtualNodesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing virtual
 */
ListVirtualNodesResponse * AppMeshClient::listVirtualNodes(const ListVirtualNodesRequest &request)
{
    return qobject_cast<ListVirtualNodesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * ListVirtualRoutersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing virtual routers in a service
 */
ListVirtualRoutersResponse * AppMeshClient::listVirtualRouters(const ListVirtualRoutersRequest &request)
{
    return qobject_cast<ListVirtualRoutersResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * ListVirtualServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing virtual services in a service
 */
ListVirtualServicesResponse * AppMeshClient::listVirtualServices(const ListVirtualServicesRequest &request)
{
    return qobject_cast<ListVirtualServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified <code>resourceArn</code>. If existing tags on a resource
 * aren't specified in the request parameters, they aren't changed. When a resource is deleted, the tags associated with
 * that resource are also
 */
TagResourceResponse * AppMeshClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a
 */
UntagResourceResponse * AppMeshClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * UpdateMeshResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing service
 */
UpdateMeshResponse * AppMeshClient::updateMesh(const UpdateMeshRequest &request)
{
    return qobject_cast<UpdateMeshResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * UpdateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing route for a specified service mesh and virtual
 */
UpdateRouteResponse * AppMeshClient::updateRoute(const UpdateRouteRequest &request)
{
    return qobject_cast<UpdateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * UpdateVirtualNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing virtual node in a specified service
 */
UpdateVirtualNodeResponse * AppMeshClient::updateVirtualNode(const UpdateVirtualNodeRequest &request)
{
    return qobject_cast<UpdateVirtualNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * UpdateVirtualRouterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing virtual router in a specified service
 */
UpdateVirtualRouterResponse * AppMeshClient::updateVirtualRouter(const UpdateVirtualRouterRequest &request)
{
    return qobject_cast<UpdateVirtualRouterResponse *>(send(request));
}

/*!
 * Sends \a request to the AppMeshClient service, and returns a pointer to an
 * UpdateVirtualServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing virtual service in a specified service
 */
UpdateVirtualServiceResponse * AppMeshClient::updateVirtualService(const UpdateVirtualServiceRequest &request)
{
    return qobject_cast<UpdateVirtualServiceResponse *>(send(request));
}

/*!
 * \class QtAws::AppMesh::AppMeshClientPrivate
 * \brief The AppMeshClientPrivate class provides private implementation for AppMeshClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a AppMeshClientPrivate object with public implementation \a q.
 */
AppMeshClientPrivate::AppMeshClientPrivate(AppMeshClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppMesh
} // namespace QtAws
