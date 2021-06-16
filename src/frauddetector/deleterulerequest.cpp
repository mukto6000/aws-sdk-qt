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

#include "deleterulerequest.h"
#include "deleterulerequest_p.h"
#include "deleteruleresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteRuleRequest
 * \brief The DeleteRuleRequest class provides an interface for FraudDetector DeleteRule requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRuleRequest::DeleteRuleRequest(const DeleteRuleRequest &other)
    : FraudDetectorRequest(new DeleteRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRuleRequest object.
 */
DeleteRuleRequest::DeleteRuleRequest()
    : FraudDetectorRequest(new DeleteRuleRequestPrivate(FraudDetectorRequest::DeleteRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRuleResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteRuleRequestPrivate
 * \brief The DeleteRuleRequestPrivate class provides private implementation for DeleteRuleRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteRuleRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteRuleRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRuleRequest
 * class' copy constructor.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const DeleteRuleRequestPrivate &other, DeleteRuleRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
