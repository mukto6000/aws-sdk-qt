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

#include "s3outpostsresponse.h"
#include "s3outpostsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::S3OutpostsResponse
 * \brief The S3OutpostsResponse class provides an interface for S3Outposts responses.
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a S3OutpostsResponse object with parent \a parent.
 */
S3OutpostsResponse::S3OutpostsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new S3OutpostsResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a S3OutpostsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3OutpostsResponsePrivate.
 */
S3OutpostsResponse::S3OutpostsResponse(S3OutpostsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void S3OutpostsResponse::parseFailure(QIODevice &response)
{
    //Q_D(S3OutpostsResponse);
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
 * \class QtAws::S3Outposts::S3OutpostsResponsePrivate
 * \brief The S3OutpostsResponsePrivate class provides private implementation for S3OutpostsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a S3OutpostsResponsePrivate object with public implementation \a q.
 */
S3OutpostsResponsePrivate::S3OutpostsResponsePrivate(
    S3OutpostsResponse * const q) : q_ptr(q)
{

}

} // namespace S3Outposts
} // namespace QtAws
