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

#include "pinpointsmsvoicev2response.h"
#include "pinpointsmsvoicev2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::PinpointSmsVoiceV2Response
 * \brief The PinpointSmsVoiceV2Response class provides an interface for PinpointSmsVoiceV2 responses.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a PinpointSmsVoiceV2Response object with parent \a parent.
 */
PinpointSmsVoiceV2Response::PinpointSmsVoiceV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PinpointSmsVoiceV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PinpointSmsVoiceV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointSmsVoiceV2ResponsePrivate.
 */
PinpointSmsVoiceV2Response::PinpointSmsVoiceV2Response(PinpointSmsVoiceV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PinpointSmsVoiceV2Response::parseFailure(QIODevice &response)
{
    //Q_D(PinpointSmsVoiceV2Response);
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
 * \class QtAws::PinpointSmsVoiceV2::PinpointSmsVoiceV2ResponsePrivate
 * \brief The PinpointSmsVoiceV2ResponsePrivate class provides private implementation for PinpointSmsVoiceV2Response.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a PinpointSmsVoiceV2ResponsePrivate object with public implementation \a q.
 */
PinpointSmsVoiceV2ResponsePrivate::PinpointSmsVoiceV2ResponsePrivate(
    PinpointSmsVoiceV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
