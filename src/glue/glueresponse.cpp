/*
    Copyright 2013-2020 Paul Colby

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

#include "glueresponse.h"
#include "glueresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GlueResponse
 * \brief The GlueResponse class provides an interface for Glue responses.
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueResponse object with parent \a parent.
 */
GlueResponse::GlueResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlueResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GlueResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlueResponsePrivate.
 */
GlueResponse::GlueResponse(GlueResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GlueResponse::parseFailure(QIODevice &response)
{
    //Q_D(GlueResponse);
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
 * \class QtAws::Glue::GlueResponsePrivate
 * \brief The GlueResponsePrivate class provides private implementation for GlueResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueResponsePrivate object with public implementation \a q.
 */
GlueResponsePrivate::GlueResponsePrivate(
    GlueResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Glue
} // namespace QtAws
