// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteentitytyperequest.h"
#include "deleteentitytyperequest_p.h"
#include "deleteentitytyperesponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEntityTypeRequest
 * \brief The DeleteEntityTypeRequest class provides an interface for FraudDetector DeleteEntityType requests.
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
 * \sa FraudDetectorClient::deleteEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEntityTypeRequest::DeleteEntityTypeRequest(const DeleteEntityTypeRequest &other)
    : FraudDetectorRequest(new DeleteEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEntityTypeRequest object.
 */
DeleteEntityTypeRequest::DeleteEntityTypeRequest()
    : FraudDetectorRequest(new DeleteEntityTypeRequestPrivate(FraudDetectorRequest::DeleteEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteEntityTypeRequestPrivate
 * \brief The DeleteEntityTypeRequestPrivate class provides private implementation for DeleteEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEntityTypeRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteEntityTypeRequestPrivate::DeleteEntityTypeRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteEntityTypeRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEntityTypeRequest
 * class' copy constructor.
 */
DeleteEntityTypeRequestPrivate::DeleteEntityTypeRequestPrivate(
    const DeleteEntityTypeRequestPrivate &other, DeleteEntityTypeRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
