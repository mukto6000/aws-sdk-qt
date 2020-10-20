/*
    Copyright 2013-2020 Paul Colby

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

#include "listavailablezonesrequest.h"
#include "listavailablezonesrequest_p.h"
#include "listavailablezonesresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListAvailableZonesRequest
 * \brief The ListAvailableZonesRequest class provides an interface for CloudHSM ListAvailableZones requests.
 *
 * \inmodule QtAwsCloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::listAvailableZones
 */

/*!
 * Constructs a copy of \a other.
 */
ListAvailableZonesRequest::ListAvailableZonesRequest(const ListAvailableZonesRequest &other)
    : CloudHSMRequest(new ListAvailableZonesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAvailableZonesRequest object.
 */
ListAvailableZonesRequest::ListAvailableZonesRequest()
    : CloudHSMRequest(new ListAvailableZonesRequestPrivate(CloudHSMRequest::ListAvailableZonesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAvailableZonesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAvailableZonesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAvailableZonesRequest::response(QNetworkReply * const reply) const
{
    return new ListAvailableZonesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSM::ListAvailableZonesRequestPrivate
 * \brief The ListAvailableZonesRequestPrivate class provides private implementation for ListAvailableZonesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a ListAvailableZonesRequestPrivate object for CloudHSM \a action,
 * with public implementation \a q.
 */
ListAvailableZonesRequestPrivate::ListAvailableZonesRequestPrivate(
    const CloudHSMRequest::Action action, ListAvailableZonesRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAvailableZonesRequest
 * class' copy constructor.
 */
ListAvailableZonesRequestPrivate::ListAvailableZonesRequestPrivate(
    const ListAvailableZonesRequestPrivate &other, ListAvailableZonesRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
