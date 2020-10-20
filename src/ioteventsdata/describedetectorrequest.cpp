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

#include "describedetectorrequest.h"
#include "describedetectorrequest_p.h"
#include "describedetectorresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::DescribeDetectorRequest
 * \brief The DescribeDetectorRequest class provides an interface for IoTEventsData DescribeDetector requests.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
 *
 * \sa IoTEventsDataClient::describeDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDetectorRequest::DescribeDetectorRequest(const DescribeDetectorRequest &other)
    : IoTEventsDataRequest(new DescribeDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDetectorRequest object.
 */
DescribeDetectorRequest::DescribeDetectorRequest()
    : IoTEventsDataRequest(new DescribeDetectorRequestPrivate(IoTEventsDataRequest::DescribeDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::DescribeDetectorRequestPrivate
 * \brief The DescribeDetectorRequestPrivate class provides private implementation for DescribeDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a DescribeDetectorRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
DescribeDetectorRequestPrivate::DescribeDetectorRequestPrivate(
    const IoTEventsDataRequest::Action action, DescribeDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDetectorRequest
 * class' copy constructor.
 */
DescribeDetectorRequestPrivate::DescribeDetectorRequestPrivate(
    const DescribeDetectorRequestPrivate &other, DescribeDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
