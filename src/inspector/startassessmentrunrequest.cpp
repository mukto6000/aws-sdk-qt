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

#include "startassessmentrunrequest.h"
#include "startassessmentrunrequest_p.h"
#include "startassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::StartAssessmentRunRequest
 * \brief The StartAssessmentRunRequest class provides an interface for Inspector StartAssessmentRun requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::startAssessmentRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartAssessmentRunRequest::StartAssessmentRunRequest(const StartAssessmentRunRequest &other)
    : InspectorRequest(new StartAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAssessmentRunRequest object.
 */
StartAssessmentRunRequest::StartAssessmentRunRequest()
    : InspectorRequest(new StartAssessmentRunRequestPrivate(InspectorRequest::StartAssessmentRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartAssessmentRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAssessmentRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new StartAssessmentRunResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::StartAssessmentRunRequestPrivate
 * \brief The StartAssessmentRunRequestPrivate class provides private implementation for StartAssessmentRunRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a StartAssessmentRunRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
StartAssessmentRunRequestPrivate::StartAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, StartAssessmentRunRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAssessmentRunRequest
 * class' copy constructor.
 */
StartAssessmentRunRequestPrivate::StartAssessmentRunRequestPrivate(
    const StartAssessmentRunRequestPrivate &other, StartAssessmentRunRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
