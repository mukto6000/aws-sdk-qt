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

#include "updatevariablerequest.h"
#include "updatevariablerequest_p.h"
#include "updatevariableresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateVariableRequest
 * \brief The UpdateVariableRequest class provides an interface for FraudDetector UpdateVariable requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 * 
 *  Guide</a>>
 * 
 *  We provide the Query API as well as AWS software development kits (SDK) for Amazon Fraud Detector in Java and Python
 *  programming
 * 
 *  languages>
 * 
 *  The Amazon Fraud Detector Query API provides HTTPS requests that use the HTTP verb GET or POST and a Query parameter
 *  <code>Action</code>. AWS SDK provides libraries, sample code, tutorials, and other resources for software developers who
 *  prefer to build applications using language-specific APIs instead of submitting a request over HTTP or HTTPS. These
 *  libraries provide basic functions that automatically take care of tasks such as cryptographically signing your requests,
 *  retrying requests, and handling error responses, so that it is easier for you to get started. For more information about
 *  the AWS SDKs, see <a href="https://docs.aws.amazon.com/https:/aws.amazon.com/tools/">Tools to build on AWS</a>.
 *
 * \sa FraudDetectorClient::updateVariable
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVariableRequest::UpdateVariableRequest(const UpdateVariableRequest &other)
    : FraudDetectorRequest(new UpdateVariableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVariableRequest object.
 */
UpdateVariableRequest::UpdateVariableRequest()
    : FraudDetectorRequest(new UpdateVariableRequestPrivate(FraudDetectorRequest::UpdateVariableAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVariableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVariableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVariableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVariableResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateVariableRequestPrivate
 * \brief The UpdateVariableRequestPrivate class provides private implementation for UpdateVariableRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateVariableRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateVariableRequestPrivate::UpdateVariableRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateVariableRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVariableRequest
 * class' copy constructor.
 */
UpdateVariableRequestPrivate::UpdateVariableRequestPrivate(
    const UpdateVariableRequestPrivate &other, UpdateVariableRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
