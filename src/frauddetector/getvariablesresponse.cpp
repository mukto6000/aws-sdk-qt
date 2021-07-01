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

#include "getvariablesresponse.h"
#include "getvariablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetVariablesResponse
 * \brief The GetVariablesResponse class provides an interace for FraudDetector GetVariables responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getVariables
 */

/*!
 * Constructs a GetVariablesResponse object for \a reply to \a request, with parent \a parent.
 */
GetVariablesResponse::GetVariablesResponse(
        const GetVariablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetVariablesResponsePrivate(this), parent)
{
    setRequest(new GetVariablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVariablesRequest * GetVariablesResponse::request() const
{
    Q_D(const GetVariablesResponse);
    return static_cast<const GetVariablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetVariables \a response.
 */
void GetVariablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVariablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetVariablesResponsePrivate
 * \brief The GetVariablesResponsePrivate class provides private implementation for GetVariablesResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetVariablesResponsePrivate object with public implementation \a q.
 */
GetVariablesResponsePrivate::GetVariablesResponsePrivate(
    GetVariablesResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetVariables response element from \a xml.
 */
void GetVariablesResponsePrivate::parseGetVariablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVariablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
