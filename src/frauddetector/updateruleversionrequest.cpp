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

#include "updateruleversionrequest.h"
#include "updateruleversionrequest_p.h"
#include "updateruleversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateRuleVersionRequest
 * \brief The UpdateRuleVersionRequest class provides an interface for FraudDetector UpdateRuleVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateRuleVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRuleVersionRequest::UpdateRuleVersionRequest(const UpdateRuleVersionRequest &other)
    : FraudDetectorRequest(new UpdateRuleVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRuleVersionRequest object.
 */
UpdateRuleVersionRequest::UpdateRuleVersionRequest()
    : FraudDetectorRequest(new UpdateRuleVersionRequestPrivate(FraudDetectorRequest::UpdateRuleVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRuleVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRuleVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRuleVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRuleVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateRuleVersionRequestPrivate
 * \brief The UpdateRuleVersionRequestPrivate class provides private implementation for UpdateRuleVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateRuleVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateRuleVersionRequestPrivate::UpdateRuleVersionRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateRuleVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRuleVersionRequest
 * class' copy constructor.
 */
UpdateRuleVersionRequestPrivate::UpdateRuleVersionRequestPrivate(
    const UpdateRuleVersionRequestPrivate &other, UpdateRuleVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
