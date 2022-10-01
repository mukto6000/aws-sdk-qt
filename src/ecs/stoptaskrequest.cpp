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

#include "stoptaskrequest.h"
#include "stoptaskrequest_p.h"
#include "stoptaskresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::StopTaskRequest
 * \brief The StopTaskRequest class provides an interface for Ecs StopTask requests.
 *
 * \inmodule QtAwsEcs
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service. It makes it easy
 *  to run, stop, and manage Docker containers. You can host your cluster on a serverless infrastructure that's managed by
 *  Amazon ECS by launching your services or tasks on Fargate. For more control, you can host your tasks on a cluster of
 *  Amazon Elastic Compute Cloud (Amazon EC2) or External (on-premises) instances that you
 * 
 *  manage>
 * 
 *  Amazon ECS makes it easy to launch and stop container-based applications with simple API calls. This makes it easy to
 *  get the state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. With Amazon ECS, you don't need to operate your own cluster
 *  management and configuration management systems. You also don't need to worry about scaling your management
 *
 * \sa EcsClient::stopTask
 */

/*!
 * Constructs a copy of \a other.
 */
StopTaskRequest::StopTaskRequest(const StopTaskRequest &other)
    : EcsRequest(new StopTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTaskRequest object.
 */
StopTaskRequest::StopTaskRequest()
    : EcsRequest(new StopTaskRequestPrivate(EcsRequest::StopTaskAction, this))
{

}

/*!
 * \reimp
 */
bool StopTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTaskRequest::response(QNetworkReply * const reply) const
{
    return new StopTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Ecs::StopTaskRequestPrivate
 * \brief The StopTaskRequestPrivate class provides private implementation for StopTaskRequest.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a StopTaskRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
StopTaskRequestPrivate::StopTaskRequestPrivate(
    const EcsRequest::Action action, StopTaskRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTaskRequest
 * class' copy constructor.
 */
StopTaskRequestPrivate::StopTaskRequestPrivate(
    const StopTaskRequestPrivate &other, StopTaskRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace Ecs
} // namespace QtAws
