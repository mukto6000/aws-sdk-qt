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

#include "ssoadminresponse.h"
#include "ssoadminresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::SSOAdminResponse
 * \brief The SSOAdminResponse class provides an interface for SSOAdmin responses.
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a SSOAdminResponse object with parent \a parent.
 */
SSOAdminResponse::SSOAdminResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new SSOAdminResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a SSOAdminResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSOAdminResponsePrivate.
 */
SSOAdminResponse::SSOAdminResponse(SSOAdminResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void SSOAdminResponse::parseFailure(QIODevice &response)
{
    //Q_D(SSOAdminResponse);
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
 * \class QtAws::SSOAdmin::SSOAdminResponsePrivate
 * \brief The SSOAdminResponsePrivate class provides private implementation for SSOAdminResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a SSOAdminResponsePrivate object with public implementation \a q.
 */
SSOAdminResponsePrivate::SSOAdminResponsePrivate(
    SSOAdminResponse * const q) : q_ptr(q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
