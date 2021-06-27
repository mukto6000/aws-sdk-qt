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

#include "deleteeventtyperesponse.h"
#include "deleteeventtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEventTypeResponse
 * \brief The DeleteEventTypeResponse class provides an interace for FraudDetector DeleteEventType responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteEventType
 */

/*!
 * Constructs a DeleteEventTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventTypeResponse::DeleteEventTypeResponse(
        const DeleteEventTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteEventTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteEventTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventTypeRequest * DeleteEventTypeResponse::request() const
{
    return static_cast<const DeleteEventTypeRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteEventType \a response.
 */
void DeleteEventTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteEventTypeResponsePrivate
 * \brief The DeleteEventTypeResponsePrivate class provides private implementation for DeleteEventTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEventTypeResponsePrivate object with public implementation \a q.
 */
DeleteEventTypeResponsePrivate::DeleteEventTypeResponsePrivate(
    DeleteEventTypeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteEventType response element from \a xml.
 */
void DeleteEventTypeResponsePrivate::parseDeleteEventTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
