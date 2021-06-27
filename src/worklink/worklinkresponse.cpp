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

#include "worklinkresponse.h"
#include "worklinkresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::WorkLinkResponse
 * \brief The WorkLinkResponse class provides an interface for WorkLink responses.
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a WorkLinkResponse object with parent \a parent.
 */
WorkLinkResponse::WorkLinkResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new WorkLinkResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a WorkLinkResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkLinkResponsePrivate.
 */
WorkLinkResponse::WorkLinkResponse(WorkLinkResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void WorkLinkResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkLinkResponse);
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
 * \class QtAws::WorkLink::WorkLinkResponsePrivate
 * \brief The WorkLinkResponsePrivate class provides private implementation for WorkLinkResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a WorkLinkResponsePrivate object with public implementation \a q.
 */
WorkLinkResponsePrivate::WorkLinkResponsePrivate(
    WorkLinkResponse * const q) : q_ptr(q)
{

}

} // namespace WorkLink
} // namespace QtAws
