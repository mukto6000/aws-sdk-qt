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

#include "terminatejobflowsrequest.h"
#include "terminatejobflowsrequest_p.h"
#include "terminatejobflowsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::TerminateJobFlowsRequest
 * \brief The TerminateJobFlowsRequest class provides an interface for Emr TerminateJobFlows requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::terminateJobFlows
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateJobFlowsRequest::TerminateJobFlowsRequest(const TerminateJobFlowsRequest &other)
    : EmrRequest(new TerminateJobFlowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateJobFlowsRequest object.
 */
TerminateJobFlowsRequest::TerminateJobFlowsRequest()
    : EmrRequest(new TerminateJobFlowsRequestPrivate(EmrRequest::TerminateJobFlowsAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateJobFlowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateJobFlowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateJobFlowsRequest::response(QNetworkReply * const reply) const
{
    return new TerminateJobFlowsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::TerminateJobFlowsRequestPrivate
 * \brief The TerminateJobFlowsRequestPrivate class provides private implementation for TerminateJobFlowsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a TerminateJobFlowsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
TerminateJobFlowsRequestPrivate::TerminateJobFlowsRequestPrivate(
    const EmrRequest::Action action, TerminateJobFlowsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateJobFlowsRequest
 * class' copy constructor.
 */
TerminateJobFlowsRequestPrivate::TerminateJobFlowsRequestPrivate(
    const TerminateJobFlowsRequestPrivate &other, TerminateJobFlowsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
