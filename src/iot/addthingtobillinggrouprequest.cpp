// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addthingtobillinggrouprequest.h"
#include "addthingtobillinggrouprequest_p.h"
#include "addthingtobillinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::AddThingToBillingGroupRequest
 * \brief The AddThingToBillingGroupRequest class provides an interface for IoT AddThingToBillingGroup requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::addThingToBillingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
AddThingToBillingGroupRequest::AddThingToBillingGroupRequest(const AddThingToBillingGroupRequest &other)
    : IoTRequest(new AddThingToBillingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddThingToBillingGroupRequest object.
 */
AddThingToBillingGroupRequest::AddThingToBillingGroupRequest()
    : IoTRequest(new AddThingToBillingGroupRequestPrivate(IoTRequest::AddThingToBillingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool AddThingToBillingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddThingToBillingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddThingToBillingGroupRequest::response(QNetworkReply * const reply) const
{
    return new AddThingToBillingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::AddThingToBillingGroupRequestPrivate
 * \brief The AddThingToBillingGroupRequestPrivate class provides private implementation for AddThingToBillingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a AddThingToBillingGroupRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
AddThingToBillingGroupRequestPrivate::AddThingToBillingGroupRequestPrivate(
    const IoTRequest::Action action, AddThingToBillingGroupRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddThingToBillingGroupRequest
 * class' copy constructor.
 */
AddThingToBillingGroupRequestPrivate::AddThingToBillingGroupRequestPrivate(
    const AddThingToBillingGroupRequestPrivate &other, AddThingToBillingGroupRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
