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

#include "updateconfigurationrequest.h"
#include "updateconfigurationrequest_p.h"
#include "updateconfigurationresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::UpdateConfigurationRequest
 * \brief The UpdateConfigurationRequest class provides an interface for Mq UpdateConfiguration requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::updateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest(const UpdateConfigurationRequest &other)
    : MqRequest(new UpdateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationRequest object.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest()
    : MqRequest(new UpdateConfigurationRequestPrivate(MqRequest::UpdateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::UpdateConfigurationRequestPrivate
 * \brief The UpdateConfigurationRequestPrivate class provides private implementation for UpdateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a UpdateConfigurationRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const MqRequest::Action action, UpdateConfigurationRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationRequest
 * class' copy constructor.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const UpdateConfigurationRequestPrivate &other, UpdateConfigurationRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
