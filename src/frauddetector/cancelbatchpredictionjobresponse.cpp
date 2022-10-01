// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelbatchpredictionjobresponse.h"
#include "cancelbatchpredictionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CancelBatchPredictionJobResponse
 * \brief The CancelBatchPredictionJobResponse class provides an interace for FraudDetector CancelBatchPredictionJob responses.
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
 * \sa FraudDetectorClient::cancelBatchPredictionJob
 */

/*!
 * Constructs a CancelBatchPredictionJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelBatchPredictionJobResponse::CancelBatchPredictionJobResponse(
        const CancelBatchPredictionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new CancelBatchPredictionJobResponsePrivate(this), parent)
{
    setRequest(new CancelBatchPredictionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelBatchPredictionJobRequest * CancelBatchPredictionJobResponse::request() const
{
    Q_D(const CancelBatchPredictionJobResponse);
    return static_cast<const CancelBatchPredictionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector CancelBatchPredictionJob \a response.
 */
void CancelBatchPredictionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelBatchPredictionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::CancelBatchPredictionJobResponsePrivate
 * \brief The CancelBatchPredictionJobResponsePrivate class provides private implementation for CancelBatchPredictionJobResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CancelBatchPredictionJobResponsePrivate object with public implementation \a q.
 */
CancelBatchPredictionJobResponsePrivate::CancelBatchPredictionJobResponsePrivate(
    CancelBatchPredictionJobResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector CancelBatchPredictionJob response element from \a xml.
 */
void CancelBatchPredictionJobResponsePrivate::parseCancelBatchPredictionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelBatchPredictionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
