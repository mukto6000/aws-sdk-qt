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

#include "describeconfigurationrequest.h"
#include "describeconfigurationrequest_p.h"
#include "describeconfigurationresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeConfigurationRequest
 * \brief The DescribeConfigurationRequest class provides an interface for MQ DescribeConfiguration requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::describeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest(const DescribeConfigurationRequest &other)
    : MqRequest(new DescribeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationRequest object.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest()
    : MqRequest(new DescribeConfigurationRequestPrivate(MqRequest::DescribeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::DescribeConfigurationRequestPrivate
 * \brief The DescribeConfigurationRequestPrivate class provides private implementation for DescribeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeConfigurationRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const MqRequest::Action action, DescribeConfigurationRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRequest
 * class' copy constructor.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const DescribeConfigurationRequestPrivate &other, DescribeConfigurationRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
