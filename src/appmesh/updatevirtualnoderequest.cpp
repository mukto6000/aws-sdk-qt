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

#include "updatevirtualnoderequest.h"
#include "updatevirtualnoderequest_p.h"
#include "updatevirtualnoderesponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::UpdateVirtualNodeRequest
 * \brief The UpdateVirtualNodeRequest class provides an interface for AppMesh UpdateVirtualNode requests.
 *
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
 *
 * \sa AppMeshClient::updateVirtualNode
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVirtualNodeRequest::UpdateVirtualNodeRequest(const UpdateVirtualNodeRequest &other)
    : AppMeshRequest(new UpdateVirtualNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVirtualNodeRequest object.
 */
UpdateVirtualNodeRequest::UpdateVirtualNodeRequest()
    : AppMeshRequest(new UpdateVirtualNodeRequestPrivate(AppMeshRequest::UpdateVirtualNodeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVirtualNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVirtualNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVirtualNodeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVirtualNodeResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::UpdateVirtualNodeRequestPrivate
 * \brief The UpdateVirtualNodeRequestPrivate class provides private implementation for UpdateVirtualNodeRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a UpdateVirtualNodeRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
UpdateVirtualNodeRequestPrivate::UpdateVirtualNodeRequestPrivate(
    const AppMeshRequest::Action action, UpdateVirtualNodeRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVirtualNodeRequest
 * class' copy constructor.
 */
UpdateVirtualNodeRequestPrivate::UpdateVirtualNodeRequestPrivate(
    const UpdateVirtualNodeRequestPrivate &other, UpdateVirtualNodeRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
