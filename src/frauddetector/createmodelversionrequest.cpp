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

#include "createmodelversionrequest.h"
#include "createmodelversionrequest_p.h"
#include "createmodelversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CreateModelVersionRequest
 * \brief The CreateModelVersionRequest class provides an interface for FraudDetector CreateModelVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::createModelVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelVersionRequest::CreateModelVersionRequest(const CreateModelVersionRequest &other)
    : FraudDetectorRequest(new CreateModelVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelVersionRequest object.
 */
CreateModelVersionRequest::CreateModelVersionRequest()
    : FraudDetectorRequest(new CreateModelVersionRequestPrivate(FraudDetectorRequest::CreateModelVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::CreateModelVersionRequestPrivate
 * \brief The CreateModelVersionRequestPrivate class provides private implementation for CreateModelVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CreateModelVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
CreateModelVersionRequestPrivate::CreateModelVersionRequestPrivate(
    const FraudDetectorRequest::Action action, CreateModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelVersionRequest
 * class' copy constructor.
 */
CreateModelVersionRequestPrivate::CreateModelVersionRequestPrivate(
    const CreateModelVersionRequestPrivate &other, CreateModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
