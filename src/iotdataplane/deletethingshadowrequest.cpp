// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethingshadowrequest.h"
#include "deletethingshadowrequest_p.h"
#include "deletethingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowRequest
 * \brief The DeleteThingShadowRequest class provides an interface for IoTDataPlane DeleteThingShadow requests.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::deleteThingShadow
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThingShadowRequest::DeleteThingShadowRequest(const DeleteThingShadowRequest &other)
    : IoTDataPlaneRequest(new DeleteThingShadowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThingShadowRequest object.
 */
DeleteThingShadowRequest::DeleteThingShadowRequest()
    : IoTDataPlaneRequest(new DeleteThingShadowRequestPrivate(IoTDataPlaneRequest::DeleteThingShadowAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThingShadowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThingShadowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThingShadowResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowRequestPrivate
 * \brief The DeleteThingShadowRequestPrivate class provides private implementation for DeleteThingShadowRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a DeleteThingShadowRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
DeleteThingShadowRequestPrivate::DeleteThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, DeleteThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThingShadowRequest
 * class' copy constructor.
 */
DeleteThingShadowRequestPrivate::DeleteThingShadowRequestPrivate(
    const DeleteThingShadowRequestPrivate &other, DeleteThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
