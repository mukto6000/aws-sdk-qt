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

#include "describeuserrequest.h"
#include "describeuserrequest_p.h"
#include "describeuserresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeUserRequest
 * \brief The DescribeUserRequest class provides an interface for MQ DescribeUser requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::describeUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserRequest::DescribeUserRequest(const DescribeUserRequest &other)
    : MqRequest(new DescribeUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserRequest object.
 */
DescribeUserRequest::DescribeUserRequest()
    : MqRequest(new DescribeUserRequestPrivate(MqRequest::DescribeUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::DescribeUserRequestPrivate
 * \brief The DescribeUserRequestPrivate class provides private implementation for DescribeUserRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeUserRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const MqRequest::Action action, DescribeUserRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserRequest
 * class' copy constructor.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const DescribeUserRequestPrivate &other, DescribeUserRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
