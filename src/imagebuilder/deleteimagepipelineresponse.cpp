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

#include "deleteimagepipelineresponse.h"
#include "deleteimagepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImagePipelineResponse
 * \brief The DeleteImagePipelineResponse class provides an interace for ImageBuilder DeleteImagePipeline responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImagePipeline
 */

/*!
 * Constructs a DeleteImagePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImagePipelineResponse::DeleteImagePipelineResponse(
        const DeleteImagePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteImagePipelineResponsePrivate(this), parent)
{
    setRequest(new DeleteImagePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImagePipelineRequest * DeleteImagePipelineResponse::request() const
{
    Q_D(const DeleteImagePipelineResponse);
    return static_cast<const DeleteImagePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteImagePipeline \a response.
 */
void DeleteImagePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImagePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteImagePipelineResponsePrivate
 * \brief The DeleteImagePipelineResponsePrivate class provides private implementation for DeleteImagePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImagePipelineResponsePrivate object with public implementation \a q.
 */
DeleteImagePipelineResponsePrivate::DeleteImagePipelineResponsePrivate(
    DeleteImagePipelineResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteImagePipeline response element from \a xml.
 */
void DeleteImagePipelineResponsePrivate::parseDeleteImagePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImagePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
