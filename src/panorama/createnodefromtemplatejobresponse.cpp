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

#include "createnodefromtemplatejobresponse.h"
#include "createnodefromtemplatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateNodeFromTemplateJobResponse
 * \brief The CreateNodeFromTemplateJobResponse class provides an interace for Panorama CreateNodeFromTemplateJob responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::createNodeFromTemplateJob
 */

/*!
 * Constructs a CreateNodeFromTemplateJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNodeFromTemplateJobResponse::CreateNodeFromTemplateJobResponse(
        const CreateNodeFromTemplateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreateNodeFromTemplateJobResponsePrivate(this), parent)
{
    setRequest(new CreateNodeFromTemplateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNodeFromTemplateJobRequest * CreateNodeFromTemplateJobResponse::request() const
{
    Q_D(const CreateNodeFromTemplateJobResponse);
    return static_cast<const CreateNodeFromTemplateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreateNodeFromTemplateJob \a response.
 */
void CreateNodeFromTemplateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNodeFromTemplateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreateNodeFromTemplateJobResponsePrivate
 * \brief The CreateNodeFromTemplateJobResponsePrivate class provides private implementation for CreateNodeFromTemplateJobResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateNodeFromTemplateJobResponsePrivate object with public implementation \a q.
 */
CreateNodeFromTemplateJobResponsePrivate::CreateNodeFromTemplateJobResponsePrivate(
    CreateNodeFromTemplateJobResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreateNodeFromTemplateJob response element from \a xml.
 */
void CreateNodeFromTemplateJobResponsePrivate::parseCreateNodeFromTemplateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNodeFromTemplateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
