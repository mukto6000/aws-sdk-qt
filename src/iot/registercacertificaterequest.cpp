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

#include "registercacertificaterequest.h"
#include "registercacertificaterequest_p.h"
#include "registercacertificateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::RegisterCACertificateRequest
 * \brief The RegisterCACertificateRequest class provides an interface for IoT RegisterCACertificate requests.
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
 * \sa IoTClient::registerCACertificate
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterCACertificateRequest::RegisterCACertificateRequest(const RegisterCACertificateRequest &other)
    : IoTRequest(new RegisterCACertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterCACertificateRequest object.
 */
RegisterCACertificateRequest::RegisterCACertificateRequest()
    : IoTRequest(new RegisterCACertificateRequestPrivate(IoTRequest::RegisterCACertificateAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterCACertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterCACertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterCACertificateRequest::response(QNetworkReply * const reply) const
{
    return new RegisterCACertificateResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::RegisterCACertificateRequestPrivate
 * \brief The RegisterCACertificateRequestPrivate class provides private implementation for RegisterCACertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a RegisterCACertificateRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
RegisterCACertificateRequestPrivate::RegisterCACertificateRequestPrivate(
    const IoTRequest::Action action, RegisterCACertificateRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterCACertificateRequest
 * class' copy constructor.
 */
RegisterCACertificateRequestPrivate::RegisterCACertificateRequestPrivate(
    const RegisterCACertificateRequestPrivate &other, RegisterCACertificateRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws