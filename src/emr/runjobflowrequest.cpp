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

#include "runjobflowrequest.h"
#include "runjobflowrequest_p.h"
#include "runjobflowresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RunJobFlowRequest
 * \brief The RunJobFlowRequest class provides an interface for Emr RunJobFlow requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::runJobFlow
 */

/*!
 * Constructs a copy of \a other.
 */
RunJobFlowRequest::RunJobFlowRequest(const RunJobFlowRequest &other)
    : EmrRequest(new RunJobFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RunJobFlowRequest object.
 */
RunJobFlowRequest::RunJobFlowRequest()
    : EmrRequest(new RunJobFlowRequestPrivate(EmrRequest::RunJobFlowAction, this))
{

}

/*!
 * \reimp
 */
bool RunJobFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RunJobFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RunJobFlowRequest::response(QNetworkReply * const reply) const
{
    return new RunJobFlowResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::RunJobFlowRequestPrivate
 * \brief The RunJobFlowRequestPrivate class provides private implementation for RunJobFlowRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RunJobFlowRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
RunJobFlowRequestPrivate::RunJobFlowRequestPrivate(
    const EmrRequest::Action action, RunJobFlowRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RunJobFlowRequest
 * class' copy constructor.
 */
RunJobFlowRequestPrivate::RunJobFlowRequestPrivate(
    const RunJobFlowRequestPrivate &other, RunJobFlowRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
