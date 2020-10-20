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

#include "getsegmentexportjobsrequest.h"
#include "getsegmentexportjobsrequest_p.h"
#include "getsegmentexportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsRequest
 * \brief The GetSegmentExportJobsRequest class provides an interface for Pinpoint GetSegmentExportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentExportJobsRequest::GetSegmentExportJobsRequest(const GetSegmentExportJobsRequest &other)
    : PinpointRequest(new GetSegmentExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentExportJobsRequest object.
 */
GetSegmentExportJobsRequest::GetSegmentExportJobsRequest()
    : PinpointRequest(new GetSegmentExportJobsRequestPrivate(PinpointRequest::GetSegmentExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsRequestPrivate
 * \brief The GetSegmentExportJobsRequestPrivate class provides private implementation for GetSegmentExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentExportJobsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentExportJobsRequestPrivate::GetSegmentExportJobsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentExportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentExportJobsRequest
 * class' copy constructor.
 */
GetSegmentExportJobsRequestPrivate::GetSegmentExportJobsRequestPrivate(
    const GetSegmentExportJobsRequestPrivate &other, GetSegmentExportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
