/*
    Copyright 2013-2018 Paul Colby

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

#include "describethingrequest.h"
#include "describethingrequest_p.h"
#include "describethingresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeThingRequest
 * \brief The DescribeThingRequest class provides an interface for IoT DescribeThing requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::describeThing
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeThingRequest::DescribeThingRequest(const DescribeThingRequest &other)
    : IoTRequest(new DescribeThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeThingRequest object.
 */
DescribeThingRequest::DescribeThingRequest()
    : IoTRequest(new DescribeThingRequestPrivate(IoTRequest::DescribeThingAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DescribeThingRequestPrivate
 * \brief The DescribeThingRequestPrivate class provides private implementation for DescribeThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeThingRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DescribeThingRequestPrivate::DescribeThingRequestPrivate(
    const IoTRequest::Action action, DescribeThingRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeThingRequest
 * class' copy constructor.
 */
DescribeThingRequestPrivate::DescribeThingRequestPrivate(
    const DescribeThingRequestPrivate &other, DescribeThingRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws