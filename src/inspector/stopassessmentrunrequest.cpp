// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopassessmentrunrequest.h"
#include "stopassessmentrunrequest_p.h"
#include "stopassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::StopAssessmentRunRequest
 * \brief The StopAssessmentRunRequest class provides an interface for Inspector StopAssessmentRun requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::stopAssessmentRun
 */

/*!
 * Constructs a copy of \a other.
 */
StopAssessmentRunRequest::StopAssessmentRunRequest(const StopAssessmentRunRequest &other)
    : InspectorRequest(new StopAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopAssessmentRunRequest object.
 */
StopAssessmentRunRequest::StopAssessmentRunRequest()
    : InspectorRequest(new StopAssessmentRunRequestPrivate(InspectorRequest::StopAssessmentRunAction, this))
{

}

/*!
 * \reimp
 */
bool StopAssessmentRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopAssessmentRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new StopAssessmentRunResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::StopAssessmentRunRequestPrivate
 * \brief The StopAssessmentRunRequestPrivate class provides private implementation for StopAssessmentRunRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a StopAssessmentRunRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
StopAssessmentRunRequestPrivate::StopAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, StopAssessmentRunRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopAssessmentRunRequest
 * class' copy constructor.
 */
StopAssessmentRunRequestPrivate::StopAssessmentRunRequestPrivate(
    const StopAssessmentRunRequestPrivate &other, StopAssessmentRunRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
