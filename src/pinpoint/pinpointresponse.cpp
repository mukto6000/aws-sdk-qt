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

#include "pinpointresponse.h"
#include "pinpointresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PinpointResponse
 * \brief The PinpointResponse class provides an interface for Pinpoint responses.
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PinpointResponse object with parent \a parent.
 */
PinpointResponse::PinpointResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new PinpointResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a PinpointResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointResponsePrivate.
 */
PinpointResponse::PinpointResponse(PinpointResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void PinpointResponse::parseFailure(QIODevice &response)
{
    //Q_D(PinpointResponse);
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
 * \class QtAws::Pinpoint::PinpointResponsePrivate
 * \brief The PinpointResponsePrivate class provides private implementation for PinpointResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PinpointResponsePrivate object with public implementation \a q.
 */
PinpointResponsePrivate::PinpointResponsePrivate(
    PinpointResponse * const q) : q_ptr(q)
{

}

} // namespace Pinpoint
} // namespace QtAws
