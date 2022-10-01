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

#include "wafv2response.h"
#include "wafv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wafv2 {

/*!
 * \class QtAws::Wafv2::Wafv2Response
 * \brief The Wafv2Response class provides an interface for Wafv2 responses.
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a Wafv2Response object with parent \a parent.
 */
Wafv2Response::Wafv2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Wafv2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Wafv2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Wafv2ResponsePrivate.
 */
Wafv2Response::Wafv2Response(Wafv2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Wafv2Response::parseFailure(QIODevice &response)
{
    //Q_D(Wafv2Response);
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
 * \class QtAws::Wafv2::Wafv2ResponsePrivate
 * \brief The Wafv2ResponsePrivate class provides private implementation for Wafv2Response.
 * \internal
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a Wafv2ResponsePrivate object with public implementation \a q.
 */
Wafv2ResponsePrivate::Wafv2ResponsePrivate(
    Wafv2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Wafv2
} // namespace QtAws
