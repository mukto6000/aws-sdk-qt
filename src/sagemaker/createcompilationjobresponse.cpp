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

#include "createcompilationjobresponse.h"
#include "createcompilationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateCompilationJobResponse
 * \brief The CreateCompilationJobResponse class provides an interace for SageMaker CreateCompilationJob responses.
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
 * \sa SageMakerClient::createCompilationJob
 */

/*!
 * Constructs a CreateCompilationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCompilationJobResponse::CreateCompilationJobResponse(
        const CreateCompilationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateCompilationJobResponsePrivate(this), parent)
{
    setRequest(new CreateCompilationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCompilationJobRequest * CreateCompilationJobResponse::request() const
{
    return static_cast<const CreateCompilationJobRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateCompilationJob \a response.
 */
void CreateCompilationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCompilationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateCompilationJobResponsePrivate
 * \brief The CreateCompilationJobResponsePrivate class provides private implementation for CreateCompilationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateCompilationJobResponsePrivate object with public implementation \a q.
 */
CreateCompilationJobResponsePrivate::CreateCompilationJobResponsePrivate(
    CreateCompilationJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateCompilationJob response element from \a xml.
 */
void CreateCompilationJobResponsePrivate::parseCreateCompilationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCompilationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
