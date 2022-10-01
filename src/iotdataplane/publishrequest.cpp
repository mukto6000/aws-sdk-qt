// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishrequest.h"
#include "publishrequest_p.h"
#include "publishresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::PublishRequest
 * \brief The PublishRequest class provides an interface for IoTDataPlane Publish requests.
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
 * \sa IoTDataPlaneClient::publish
 */

/*!
 * Constructs a copy of \a other.
 */
PublishRequest::PublishRequest(const PublishRequest &other)
    : IoTDataPlaneRequest(new PublishRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishRequest object.
 */
PublishRequest::PublishRequest()
    : IoTDataPlaneRequest(new PublishRequestPrivate(IoTDataPlaneRequest::PublishAction, this))
{

}

/*!
 * \reimp
 */
bool PublishRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishRequest::response(QNetworkReply * const reply) const
{
    return new PublishResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::PublishRequestPrivate
 * \brief The PublishRequestPrivate class provides private implementation for PublishRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a PublishRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
PublishRequestPrivate::PublishRequestPrivate(
    const IoTDataPlaneRequest::Action action, PublishRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishRequest
 * class' copy constructor.
 */
PublishRequestPrivate::PublishRequestPrivate(
    const PublishRequestPrivate &other, PublishRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
