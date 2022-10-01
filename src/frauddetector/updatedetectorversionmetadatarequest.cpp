// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedetectorversionmetadatarequest.h"
#include "updatedetectorversionmetadatarequest_p.h"
#include "updatedetectorversionmetadataresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataRequest
 * \brief The UpdateDetectorVersionMetadataRequest class provides an interface for FraudDetector UpdateDetectorVersionMetadata requests.
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
 * \sa FraudDetectorClient::updateDetectorVersionMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDetectorVersionMetadataRequest::UpdateDetectorVersionMetadataRequest(const UpdateDetectorVersionMetadataRequest &other)
    : FraudDetectorRequest(new UpdateDetectorVersionMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDetectorVersionMetadataRequest object.
 */
UpdateDetectorVersionMetadataRequest::UpdateDetectorVersionMetadataRequest()
    : FraudDetectorRequest(new UpdateDetectorVersionMetadataRequestPrivate(FraudDetectorRequest::UpdateDetectorVersionMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDetectorVersionMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDetectorVersionMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDetectorVersionMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDetectorVersionMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataRequestPrivate
 * \brief The UpdateDetectorVersionMetadataRequestPrivate class provides private implementation for UpdateDetectorVersionMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionMetadataRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateDetectorVersionMetadataRequestPrivate::UpdateDetectorVersionMetadataRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateDetectorVersionMetadataRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDetectorVersionMetadataRequest
 * class' copy constructor.
 */
UpdateDetectorVersionMetadataRequestPrivate::UpdateDetectorVersionMetadataRequestPrivate(
    const UpdateDetectorVersionMetadataRequestPrivate &other, UpdateDetectorVersionMetadataRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
