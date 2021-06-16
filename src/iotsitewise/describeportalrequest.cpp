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

#include "describeportalrequest.h"
#include "describeportalrequest_p.h"
#include "describeportalresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribePortalRequest
 * \brief The DescribePortalRequest class provides an interface for IoTSiteWise DescribePortal requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::describePortal
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePortalRequest::DescribePortalRequest(const DescribePortalRequest &other)
    : IoTSiteWiseRequest(new DescribePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePortalRequest object.
 */
DescribePortalRequest::DescribePortalRequest()
    : IoTSiteWiseRequest(new DescribePortalRequestPrivate(IoTSiteWiseRequest::DescribePortalAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePortalRequest::response(QNetworkReply * const reply) const
{
    return new DescribePortalResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribePortalRequestPrivate
 * \brief The DescribePortalRequestPrivate class provides private implementation for DescribePortalRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribePortalRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribePortalRequestPrivate::DescribePortalRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePortalRequest
 * class' copy constructor.
 */
DescribePortalRequestPrivate::DescribePortalRequestPrivate(
    const DescribePortalRequestPrivate &other, DescribePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
