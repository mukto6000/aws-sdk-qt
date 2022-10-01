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

#include "deletemodelversionresponse.h"
#include "deletemodelversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteModelVersionResponse
 * \brief The DeleteModelVersionResponse class provides an interace for FraudDetector DeleteModelVersion responses.
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
 * \sa FraudDetectorClient::deleteModelVersion
 */

/*!
 * Constructs a DeleteModelVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelVersionResponse::DeleteModelVersionResponse(
        const DeleteModelVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteModelVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelVersionRequest * DeleteModelVersionResponse::request() const
{
    Q_D(const DeleteModelVersionResponse);
    return static_cast<const DeleteModelVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteModelVersion \a response.
 */
void DeleteModelVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteModelVersionResponsePrivate
 * \brief The DeleteModelVersionResponsePrivate class provides private implementation for DeleteModelVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteModelVersionResponsePrivate object with public implementation \a q.
 */
DeleteModelVersionResponsePrivate::DeleteModelVersionResponsePrivate(
    DeleteModelVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteModelVersion response element from \a xml.
 */
void DeleteModelVersionResponsePrivate::parseDeleteModelVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
