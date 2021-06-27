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

#include "createlabelingjobresponse.h"
#include "createlabelingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateLabelingJobResponse
 * \brief The CreateLabelingJobResponse class provides an interace for SageMaker CreateLabelingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::createLabelingJob
 */

/*!
 * Constructs a CreateLabelingJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLabelingJobResponse::CreateLabelingJobResponse(
        const CreateLabelingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateLabelingJobResponsePrivate(this), parent)
{
    setRequest(new CreateLabelingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLabelingJobRequest * CreateLabelingJobResponse::request() const
{
    return static_cast<const CreateLabelingJobRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateLabelingJob \a response.
 */
void CreateLabelingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLabelingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateLabelingJobResponsePrivate
 * \brief The CreateLabelingJobResponsePrivate class provides private implementation for CreateLabelingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateLabelingJobResponsePrivate object with public implementation \a q.
 */
CreateLabelingJobResponsePrivate::CreateLabelingJobResponsePrivate(
    CreateLabelingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateLabelingJob response element from \a xml.
 */
void CreateLabelingJobResponsePrivate::parseCreateLabelingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLabelingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
