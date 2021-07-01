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

#include "deletevariableresponse.h"
#include "deletevariableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteVariableResponse
 * \brief The DeleteVariableResponse class provides an interace for FraudDetector DeleteVariable responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteVariable
 */

/*!
 * Constructs a DeleteVariableResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVariableResponse::DeleteVariableResponse(
        const DeleteVariableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteVariableResponsePrivate(this), parent)
{
    setRequest(new DeleteVariableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVariableRequest * DeleteVariableResponse::request() const
{
    Q_D(const DeleteVariableResponse);
    return static_cast<const DeleteVariableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteVariable \a response.
 */
void DeleteVariableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVariableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteVariableResponsePrivate
 * \brief The DeleteVariableResponsePrivate class provides private implementation for DeleteVariableResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteVariableResponsePrivate object with public implementation \a q.
 */
DeleteVariableResponsePrivate::DeleteVariableResponsePrivate(
    DeleteVariableResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteVariable response element from \a xml.
 */
void DeleteVariableResponsePrivate::parseDeleteVariableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVariableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
