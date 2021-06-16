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

#include "updateflowtemplaterequest.h"
#include "updateflowtemplaterequest_p.h"
#include "updateflowtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UpdateFlowTemplateRequest
 * \brief The UpdateFlowTemplateRequest class provides an interface for IoTThingsGraph UpdateFlowTemplate requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 *
 * \sa IoTThingsGraphClient::updateFlowTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowTemplateRequest::UpdateFlowTemplateRequest(const UpdateFlowTemplateRequest &other)
    : IoTThingsGraphRequest(new UpdateFlowTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowTemplateRequest object.
 */
UpdateFlowTemplateRequest::UpdateFlowTemplateRequest()
    : IoTThingsGraphRequest(new UpdateFlowTemplateRequestPrivate(IoTThingsGraphRequest::UpdateFlowTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::UpdateFlowTemplateRequestPrivate
 * \brief The UpdateFlowTemplateRequestPrivate class provides private implementation for UpdateFlowTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UpdateFlowTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
UpdateFlowTemplateRequestPrivate::UpdateFlowTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, UpdateFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowTemplateRequest
 * class' copy constructor.
 */
UpdateFlowTemplateRequestPrivate::UpdateFlowTemplateRequestPrivate(
    const UpdateFlowTemplateRequestPrivate &other, UpdateFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
