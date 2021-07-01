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

#include "getmodelversionresponse.h"
#include "getmodelversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetModelVersionResponse
 * \brief The GetModelVersionResponse class provides an interace for FraudDetector GetModelVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getModelVersion
 */

/*!
 * Constructs a GetModelVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelVersionResponse::GetModelVersionResponse(
        const GetModelVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetModelVersionResponsePrivate(this), parent)
{
    setRequest(new GetModelVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelVersionRequest * GetModelVersionResponse::request() const
{
    Q_D(const GetModelVersionResponse);
    return static_cast<const GetModelVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetModelVersion \a response.
 */
void GetModelVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetModelVersionResponsePrivate
 * \brief The GetModelVersionResponsePrivate class provides private implementation for GetModelVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetModelVersionResponsePrivate object with public implementation \a q.
 */
GetModelVersionResponsePrivate::GetModelVersionResponsePrivate(
    GetModelVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetModelVersion response element from \a xml.
 */
void GetModelVersionResponsePrivate::parseGetModelVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
