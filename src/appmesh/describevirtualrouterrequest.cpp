// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevirtualrouterrequest.h"
#include "describevirtualrouterrequest_p.h"
#include "describevirtualrouterresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::DescribeVirtualRouterRequest
 * \brief The DescribeVirtualRouterRequest class provides an interface for AppMesh DescribeVirtualRouter requests.
 *
 * \inmodule QtAwsAppMesh
 *
 *  App Mesh is a service mesh based on the Envoy proxy that makes it easy to monitor and control microservices. App Mesh
 *  standardizes how your microservices communicate, giving you end-to-end visibility and helping to ensure high
 *  availability for your
 * 
 *  applications>
 * 
 *  App Mesh gives you consistent visibility and network traffic controls for every microservice in an application. You can
 *  use App Mesh with Amazon Web Services Fargate, Amazon ECS, Amazon EKS, Kubernetes on Amazon Web Services, and Amazon
 * 
 *  EC2> <note>
 * 
 *  App Mesh supports microservice applications that use service discovery naming for their components. For more information
 *  about service discovery on Amazon ECS, see <a
 *  href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service Discovery</a> in the
 *  <i>Amazon Elastic Container Service Developer Guide</i>. Kubernetes <code>kube-dns</code> and <code>coredns</code> are
 *  supported. For more information, see <a
 *  href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS for Services and Pods</a> in the
 *  Kubernetes
 *
 * \sa AppMeshClient::describeVirtualRouter
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVirtualRouterRequest::DescribeVirtualRouterRequest(const DescribeVirtualRouterRequest &other)
    : AppMeshRequest(new DescribeVirtualRouterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVirtualRouterRequest object.
 */
DescribeVirtualRouterRequest::DescribeVirtualRouterRequest()
    : AppMeshRequest(new DescribeVirtualRouterRequestPrivate(AppMeshRequest::DescribeVirtualRouterAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVirtualRouterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVirtualRouterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVirtualRouterRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVirtualRouterResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::DescribeVirtualRouterRequestPrivate
 * \brief The DescribeVirtualRouterRequestPrivate class provides private implementation for DescribeVirtualRouterRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a DescribeVirtualRouterRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
DescribeVirtualRouterRequestPrivate::DescribeVirtualRouterRequestPrivate(
    const AppMeshRequest::Action action, DescribeVirtualRouterRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVirtualRouterRequest
 * class' copy constructor.
 */
DescribeVirtualRouterRequestPrivate::DescribeVirtualRouterRequestPrivate(
    const DescribeVirtualRouterRequestPrivate &other, DescribeVirtualRouterRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
