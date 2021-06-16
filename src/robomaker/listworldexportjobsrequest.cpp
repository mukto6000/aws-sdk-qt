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

#include "listworldexportjobsrequest.h"
#include "listworldexportjobsrequest_p.h"
#include "listworldexportjobsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsRequest
 * \brief The ListWorldExportJobsRequest class provides an interface for RoboMaker ListWorldExportJobs requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorldExportJobsRequest::ListWorldExportJobsRequest(const ListWorldExportJobsRequest &other)
    : RoboMakerRequest(new ListWorldExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorldExportJobsRequest object.
 */
ListWorldExportJobsRequest::ListWorldExportJobsRequest()
    : RoboMakerRequest(new ListWorldExportJobsRequestPrivate(RoboMakerRequest::ListWorldExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorldExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorldExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorldExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorldExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsRequestPrivate
 * \brief The ListWorldExportJobsRequestPrivate class provides private implementation for ListWorldExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldExportJobsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListWorldExportJobsRequestPrivate::ListWorldExportJobsRequestPrivate(
    const RoboMakerRequest::Action action, ListWorldExportJobsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorldExportJobsRequest
 * class' copy constructor.
 */
ListWorldExportJobsRequestPrivate::ListWorldExportJobsRequestPrivate(
    const ListWorldExportJobsRequestPrivate &other, ListWorldExportJobsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
