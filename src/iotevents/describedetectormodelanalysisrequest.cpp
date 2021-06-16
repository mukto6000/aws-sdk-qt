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

#include "describedetectormodelanalysisrequest.h"
#include "describedetectormodelanalysisrequest_p.h"
#include "describedetectormodelanalysisresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelAnalysisRequest
 * \brief The DescribeDetectorModelAnalysisRequest class provides an interface for IoTEvents DescribeDetectorModelAnalysis requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeDetectorModelAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDetectorModelAnalysisRequest::DescribeDetectorModelAnalysisRequest(const DescribeDetectorModelAnalysisRequest &other)
    : IoTEventsRequest(new DescribeDetectorModelAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDetectorModelAnalysisRequest object.
 */
DescribeDetectorModelAnalysisRequest::DescribeDetectorModelAnalysisRequest()
    : IoTEventsRequest(new DescribeDetectorModelAnalysisRequestPrivate(IoTEventsRequest::DescribeDetectorModelAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDetectorModelAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDetectorModelAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDetectorModelAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDetectorModelAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelAnalysisRequestPrivate
 * \brief The DescribeDetectorModelAnalysisRequestPrivate class provides private implementation for DescribeDetectorModelAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeDetectorModelAnalysisRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeDetectorModelAnalysisRequestPrivate::DescribeDetectorModelAnalysisRequestPrivate(
    const IoTEventsRequest::Action action, DescribeDetectorModelAnalysisRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDetectorModelAnalysisRequest
 * class' copy constructor.
 */
DescribeDetectorModelAnalysisRequestPrivate::DescribeDetectorModelAnalysisRequestPrivate(
    const DescribeDetectorModelAnalysisRequestPrivate &other, DescribeDetectorModelAnalysisRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
