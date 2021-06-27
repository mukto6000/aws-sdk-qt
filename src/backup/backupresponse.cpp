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

#include "backupresponse.h"
#include "backupresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::BackupResponse
 * \brief The BackupResponse class provides an interface for Backup responses.
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a BackupResponse object with parent \a parent.
 */
BackupResponse::BackupResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new BackupResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a BackupResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupResponsePrivate.
 */
BackupResponse::BackupResponse(BackupResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void BackupResponse::parseFailure(QIODevice &response)
{
    //Q_D(BackupResponse);
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
 * \class QtAws::Backup::BackupResponsePrivate
 * \brief The BackupResponsePrivate class provides private implementation for BackupResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a BackupResponsePrivate object with public implementation \a q.
 */
BackupResponsePrivate::BackupResponsePrivate(
    BackupResponse * const q) : q_ptr(q)
{

}

} // namespace Backup
} // namespace QtAws
