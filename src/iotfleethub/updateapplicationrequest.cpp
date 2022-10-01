// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationrequest.h"
#include "updateapplicationrequest_p.h"
#include "updateapplicationresponse.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::UpdateApplicationRequest
 * \brief The UpdateApplicationRequest class provides an interface for IoTFleetHub UpdateApplication requests.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::updateApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationRequest::UpdateApplicationRequest(const UpdateApplicationRequest &other)
    : IoTFleetHubRequest(new UpdateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationRequest object.
 */
UpdateApplicationRequest::UpdateApplicationRequest()
    : IoTFleetHubRequest(new UpdateApplicationRequestPrivate(IoTFleetHubRequest::UpdateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTFleetHub::UpdateApplicationRequestPrivate
 * \brief The UpdateApplicationRequestPrivate class provides private implementation for UpdateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a UpdateApplicationRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const IoTFleetHubRequest::Action action, UpdateApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationRequest
 * class' copy constructor.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const UpdateApplicationRequestPrivate &other, UpdateApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(other, q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
