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

#include "migrationhubrefactorspacesresponse.h"
#include "migrationhubrefactorspacesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesResponse
 * \brief The MigrationHubRefactorSpacesResponse class provides an interface for MigrationHubRefactorSpaces responses.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a MigrationHubRefactorSpacesResponse object with parent \a parent.
 */
MigrationHubRefactorSpacesResponse::MigrationHubRefactorSpacesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MigrationHubRefactorSpacesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MigrationHubRefactorSpacesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubRefactorSpacesResponsePrivate.
 */
MigrationHubRefactorSpacesResponse::MigrationHubRefactorSpacesResponse(MigrationHubRefactorSpacesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MigrationHubRefactorSpacesResponse::parseFailure(QIODevice &response)
{
    //Q_D(MigrationHubRefactorSpacesResponse);
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
 * \class QtAws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesResponsePrivate
 * \brief The MigrationHubRefactorSpacesResponsePrivate class provides private implementation for MigrationHubRefactorSpacesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a MigrationHubRefactorSpacesResponsePrivate object with public implementation \a q.
 */
MigrationHubRefactorSpacesResponsePrivate::MigrationHubRefactorSpacesResponsePrivate(
    MigrationHubRefactorSpacesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
