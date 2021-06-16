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

#include "getoutcomesrequest.h"
#include "getoutcomesrequest_p.h"
#include "getoutcomesresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetOutcomesRequest
 * \brief The GetOutcomesRequest class provides an interface for FraudDetector GetOutcomes requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getOutcomes
 */

/*!
 * Constructs a copy of \a other.
 */
GetOutcomesRequest::GetOutcomesRequest(const GetOutcomesRequest &other)
    : FraudDetectorRequest(new GetOutcomesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOutcomesRequest object.
 */
GetOutcomesRequest::GetOutcomesRequest()
    : FraudDetectorRequest(new GetOutcomesRequestPrivate(FraudDetectorRequest::GetOutcomesAction, this))
{

}

/*!
 * \reimp
 */
bool GetOutcomesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOutcomesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOutcomesRequest::response(QNetworkReply * const reply) const
{
    return new GetOutcomesResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetOutcomesRequestPrivate
 * \brief The GetOutcomesRequestPrivate class provides private implementation for GetOutcomesRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetOutcomesRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetOutcomesRequestPrivate::GetOutcomesRequestPrivate(
    const FraudDetectorRequest::Action action, GetOutcomesRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOutcomesRequest
 * class' copy constructor.
 */
GetOutcomesRequestPrivate::GetOutcomesRequestPrivate(
    const GetOutcomesRequestPrivate &other, GetOutcomesRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
