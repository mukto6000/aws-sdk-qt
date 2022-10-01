// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcomponenttyperequest.h"
#include "getcomponenttyperequest_p.h"
#include "getcomponenttyperesponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetComponentTypeRequest
 * \brief The GetComponentTypeRequest class provides an interface for IoTTwinMaker GetComponentType requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getComponentType
 */

/*!
 * Constructs a copy of \a other.
 */
GetComponentTypeRequest::GetComponentTypeRequest(const GetComponentTypeRequest &other)
    : IoTTwinMakerRequest(new GetComponentTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComponentTypeRequest object.
 */
GetComponentTypeRequest::GetComponentTypeRequest()
    : IoTTwinMakerRequest(new GetComponentTypeRequestPrivate(IoTTwinMakerRequest::GetComponentTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetComponentTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComponentTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComponentTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetComponentTypeResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::GetComponentTypeRequestPrivate
 * \brief The GetComponentTypeRequestPrivate class provides private implementation for GetComponentTypeRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetComponentTypeRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
GetComponentTypeRequestPrivate::GetComponentTypeRequestPrivate(
    const IoTTwinMakerRequest::Action action, GetComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComponentTypeRequest
 * class' copy constructor.
 */
GetComponentTypeRequestPrivate::GetComponentTypeRequestPrivate(
    const GetComponentTypeRequestPrivate &other, GetComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
