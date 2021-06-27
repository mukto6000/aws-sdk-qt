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

#include "connectparticipantresponse.h"
#include "connectparticipantresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::ConnectParticipantResponse
 * \brief The ConnectParticipantResponse class provides an interface for ConnectParticipant responses.
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a ConnectParticipantResponse object with parent \a parent.
 */
ConnectParticipantResponse::ConnectParticipantResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new ConnectParticipantResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a ConnectParticipantResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectParticipantResponsePrivate.
 */
ConnectParticipantResponse::ConnectParticipantResponse(ConnectParticipantResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void ConnectParticipantResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConnectParticipantResponse);
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
 * \class QtAws::ConnectParticipant::ConnectParticipantResponsePrivate
 * \brief The ConnectParticipantResponsePrivate class provides private implementation for ConnectParticipantResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a ConnectParticipantResponsePrivate object with public implementation \a q.
 */
ConnectParticipantResponsePrivate::ConnectParticipantResponsePrivate(
    ConnectParticipantResponse * const q) : q_ptr(q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
