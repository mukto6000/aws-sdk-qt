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

#include "deleteimageresponse.h"
#include "deleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImageResponse
 * \brief The DeleteImageResponse class provides an interace for ImageBuilder DeleteImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImage
 */

/*!
 * Constructs a DeleteImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImageResponse::DeleteImageResponse(
        const DeleteImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteImageResponsePrivate(this), parent)
{
    setRequest(new DeleteImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImageRequest * DeleteImageResponse::request() const
{
    Q_D(const DeleteImageResponse);
    return static_cast<const DeleteImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteImage \a response.
 */
void DeleteImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteImageResponsePrivate
 * \brief The DeleteImageResponsePrivate class provides private implementation for DeleteImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImageResponsePrivate object with public implementation \a q.
 */
DeleteImageResponsePrivate::DeleteImageResponsePrivate(
    DeleteImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteImage response element from \a xml.
 */
void DeleteImageResponsePrivate::parseDeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
