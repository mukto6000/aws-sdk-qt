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

#include "updaterulemetadatarequest.h"
#include "updaterulemetadatarequest_p.h"
#include "updaterulemetadataresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateRuleMetadataRequest
 * \brief The UpdateRuleMetadataRequest class provides an interface for FraudDetector UpdateRuleMetadata requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateRuleMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRuleMetadataRequest::UpdateRuleMetadataRequest(const UpdateRuleMetadataRequest &other)
    : FraudDetectorRequest(new UpdateRuleMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRuleMetadataRequest object.
 */
UpdateRuleMetadataRequest::UpdateRuleMetadataRequest()
    : FraudDetectorRequest(new UpdateRuleMetadataRequestPrivate(FraudDetectorRequest::UpdateRuleMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRuleMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRuleMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRuleMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRuleMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateRuleMetadataRequestPrivate
 * \brief The UpdateRuleMetadataRequestPrivate class provides private implementation for UpdateRuleMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateRuleMetadataRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateRuleMetadataRequestPrivate::UpdateRuleMetadataRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateRuleMetadataRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRuleMetadataRequest
 * class' copy constructor.
 */
UpdateRuleMetadataRequestPrivate::UpdateRuleMetadataRequestPrivate(
    const UpdateRuleMetadataRequestPrivate &other, UpdateRuleMetadataRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
