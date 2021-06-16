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

#include "startmodelresponse.h"
#include "startmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::StartModelResponse
 * \brief The StartModelResponse class provides an interace for LookoutforVision StartModel responses.
 *
 * \inmodule QtAwsLookoutforVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutforVisionClient::startModel
 */

/*!
 * Constructs a StartModelResponse object for \a reply to \a request, with parent \a parent.
 */
StartModelResponse::StartModelResponse(
        const StartModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutforVisionResponse(new StartModelResponsePrivate(this), parent)
{
    setRequest(new StartModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartModelRequest * StartModelResponse::request() const
{
    Q_D(const StartModelResponse);
    return static_cast<const StartModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutforVision StartModel \a response.
 */
void StartModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutforVision::StartModelResponsePrivate
 * \brief The StartModelResponsePrivate class provides private implementation for StartModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a StartModelResponsePrivate object with public implementation \a q.
 */
StartModelResponsePrivate::StartModelResponsePrivate(
    StartModelResponse * const q) : LookoutforVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutforVision StartModel response element from \a xml.
 */
void StartModelResponsePrivate::parseStartModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutforVision
} // namespace QtAws
