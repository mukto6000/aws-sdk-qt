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

#include "mwaaresponse.h"
#include "mwaaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::MwaaResponse
 * \brief The MwaaResponse class provides an interface for MWAA responses.
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a MwaaResponse object with parent \a parent.
 */
MwaaResponse::MwaaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MwaaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MwaaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MwaaResponsePrivate.
 */
MwaaResponse::MwaaResponse(MwaaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MwaaResponse::parseFailure(QIODevice &response)
{
    //Q_D(MwaaResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::MWAA::MwaaResponsePrivate
 * \brief The MwaaResponsePrivate class provides private implementation for MwaaResponse.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a MwaaResponsePrivate object with public implementation \a q.
 */
MwaaResponsePrivate::MwaaResponsePrivate(
    MwaaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MWAA
} // namespace QtAws
