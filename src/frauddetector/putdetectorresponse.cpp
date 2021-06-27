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

#include "putdetectorresponse.h"
#include "putdetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutDetectorResponse
 * \brief The PutDetectorResponse class provides an interace for FraudDetector PutDetector responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putDetector
 */

/*!
 * Constructs a PutDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
PutDetectorResponse::PutDetectorResponse(
        const PutDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutDetectorResponsePrivate(this), parent)
{
    setRequest(new PutDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutDetectorRequest * PutDetectorResponse::request() const
{
    return static_cast<const PutDetectorRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutDetector \a response.
 */
void PutDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutDetectorResponsePrivate
 * \brief The PutDetectorResponsePrivate class provides private implementation for PutDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutDetectorResponsePrivate object with public implementation \a q.
 */
PutDetectorResponsePrivate::PutDetectorResponsePrivate(
    PutDetectorResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutDetector response element from \a xml.
 */
void PutDetectorResponsePrivate::parsePutDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
