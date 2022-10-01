// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedetectorversionmetadataresponse.h"
#include "updatedetectorversionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataResponse
 * \brief The UpdateDetectorVersionMetadataResponse class provides an interace for FraudDetector UpdateDetectorVersionMetadata responses.
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
 * Constructs a UpdateDetectorVersionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDetectorVersionMetadataResponse::UpdateDetectorVersionMetadataResponse(
        const UpdateDetectorVersionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateDetectorVersionMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorVersionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDetectorVersionMetadataRequest * UpdateDetectorVersionMetadataResponse::request() const
{
    Q_D(const UpdateDetectorVersionMetadataResponse);
    return static_cast<const UpdateDetectorVersionMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateDetectorVersionMetadata \a response.
 */
void UpdateDetectorVersionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDetectorVersionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataResponsePrivate
 * \brief The UpdateDetectorVersionMetadataResponsePrivate class provides private implementation for UpdateDetectorVersionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionMetadataResponsePrivate object with public implementation \a q.
 */
UpdateDetectorVersionMetadataResponsePrivate::UpdateDetectorVersionMetadataResponsePrivate(
    UpdateDetectorVersionMetadataResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateDetectorVersionMetadata response element from \a xml.
 */
void UpdateDetectorVersionMetadataResponsePrivate::parseUpdateDetectorVersionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorVersionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
