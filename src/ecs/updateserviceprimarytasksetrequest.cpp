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

#include "updateserviceprimarytasksetrequest.h"
#include "updateserviceprimarytasksetrequest_p.h"
#include "updateserviceprimarytasksetresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::UpdateServicePrimaryTaskSetRequest
 * \brief The UpdateServicePrimaryTaskSetRequest class provides an interface for ECS UpdateServicePrimaryTaskSet requests.
 *
 * \inmodule QtAwsECS
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa EcsClient::updateServicePrimaryTaskSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServicePrimaryTaskSetRequest::UpdateServicePrimaryTaskSetRequest(const UpdateServicePrimaryTaskSetRequest &other)
    : EcsRequest(new UpdateServicePrimaryTaskSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServicePrimaryTaskSetRequest object.
 */
UpdateServicePrimaryTaskSetRequest::UpdateServicePrimaryTaskSetRequest()
    : EcsRequest(new UpdateServicePrimaryTaskSetRequestPrivate(EcsRequest::UpdateServicePrimaryTaskSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServicePrimaryTaskSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServicePrimaryTaskSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServicePrimaryTaskSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServicePrimaryTaskSetResponse(*this, reply);
}

/*!
 * \class QtAws::ECS::UpdateServicePrimaryTaskSetRequestPrivate
 * \brief The UpdateServicePrimaryTaskSetRequestPrivate class provides private implementation for UpdateServicePrimaryTaskSetRequest.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a UpdateServicePrimaryTaskSetRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
UpdateServicePrimaryTaskSetRequestPrivate::UpdateServicePrimaryTaskSetRequestPrivate(
    const EcsRequest::Action action, UpdateServicePrimaryTaskSetRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServicePrimaryTaskSetRequest
 * class' copy constructor.
 */
UpdateServicePrimaryTaskSetRequestPrivate::UpdateServicePrimaryTaskSetRequestPrivate(
    const UpdateServicePrimaryTaskSetRequestPrivate &other, UpdateServicePrimaryTaskSetRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
