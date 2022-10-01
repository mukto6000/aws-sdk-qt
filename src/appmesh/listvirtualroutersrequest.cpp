// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualroutersrequest.h"
#include "listvirtualroutersrequest_p.h"
#include "listvirtualroutersresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::ListVirtualRoutersRequest
 * \brief The ListVirtualRoutersRequest class provides an interface for AppMesh ListVirtualRouters requests.
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
 * \sa AppMeshClient::listVirtualRouters
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualRoutersRequest::ListVirtualRoutersRequest(const ListVirtualRoutersRequest &other)
    : AppMeshRequest(new ListVirtualRoutersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualRoutersRequest object.
 */
ListVirtualRoutersRequest::ListVirtualRoutersRequest()
    : AppMeshRequest(new ListVirtualRoutersRequestPrivate(AppMeshRequest::ListVirtualRoutersAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualRoutersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualRoutersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualRoutersRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualRoutersResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::ListVirtualRoutersRequestPrivate
 * \brief The ListVirtualRoutersRequestPrivate class provides private implementation for ListVirtualRoutersRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a ListVirtualRoutersRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
ListVirtualRoutersRequestPrivate::ListVirtualRoutersRequestPrivate(
    const AppMeshRequest::Action action, ListVirtualRoutersRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualRoutersRequest
 * class' copy constructor.
 */
ListVirtualRoutersRequestPrivate::ListVirtualRoutersRequestPrivate(
    const ListVirtualRoutersRequestPrivate &other, ListVirtualRoutersRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
