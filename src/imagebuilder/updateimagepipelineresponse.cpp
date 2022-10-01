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

#include "updateimagepipelineresponse.h"
#include "updateimagepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateImagePipelineResponse
 * \brief The UpdateImagePipelineResponse class provides an interace for ImageBuilder UpdateImagePipeline responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateImagePipeline
 */

/*!
 * Constructs a UpdateImagePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateImagePipelineResponse::UpdateImagePipelineResponse(
        const UpdateImagePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new UpdateImagePipelineResponsePrivate(this), parent)
{
    setRequest(new UpdateImagePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateImagePipelineRequest * UpdateImagePipelineResponse::request() const
{
    Q_D(const UpdateImagePipelineResponse);
    return static_cast<const UpdateImagePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder UpdateImagePipeline \a response.
 */
void UpdateImagePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateImagePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::UpdateImagePipelineResponsePrivate
 * \brief The UpdateImagePipelineResponsePrivate class provides private implementation for UpdateImagePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateImagePipelineResponsePrivate object with public implementation \a q.
 */
UpdateImagePipelineResponsePrivate::UpdateImagePipelineResponsePrivate(
    UpdateImagePipelineResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder UpdateImagePipeline response element from \a xml.
 */
void UpdateImagePipelineResponsePrivate::parseUpdateImagePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateImagePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
