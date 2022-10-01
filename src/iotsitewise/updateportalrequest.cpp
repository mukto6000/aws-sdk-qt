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

#include "updateportalrequest.h"
#include "updateportalrequest_p.h"
#include "updateportalresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdatePortalRequest
 * \brief The UpdatePortalRequest class provides an interface for IoTSiteWise UpdatePortal requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::updatePortal
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePortalRequest::UpdatePortalRequest(const UpdatePortalRequest &other)
    : IoTSiteWiseRequest(new UpdatePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePortalRequest object.
 */
UpdatePortalRequest::UpdatePortalRequest()
    : IoTSiteWiseRequest(new UpdatePortalRequestPrivate(IoTSiteWiseRequest::UpdatePortalAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePortalRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePortalResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdatePortalRequestPrivate
 * \brief The UpdatePortalRequestPrivate class provides private implementation for UpdatePortalRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdatePortalRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdatePortalRequestPrivate::UpdatePortalRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdatePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePortalRequest
 * class' copy constructor.
 */
UpdatePortalRequestPrivate::UpdatePortalRequestPrivate(
    const UpdatePortalRequestPrivate &other, UpdatePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
