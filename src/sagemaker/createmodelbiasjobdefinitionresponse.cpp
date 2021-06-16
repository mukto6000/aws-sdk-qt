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

#include "createmodelbiasjobdefinitionresponse.h"
#include "createmodelbiasjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelBiasJobDefinitionResponse
 * \brief The CreateModelBiasJobDefinitionResponse class provides an interace for SageMaker CreateModelBiasJobDefinition responses.
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
 * \sa SageMakerClient::createModelBiasJobDefinition
 */

/*!
 * Constructs a CreateModelBiasJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelBiasJobDefinitionResponse::CreateModelBiasJobDefinitionResponse(
        const CreateModelBiasJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelBiasJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateModelBiasJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelBiasJobDefinitionRequest * CreateModelBiasJobDefinitionResponse::request() const
{
    Q_D(const CreateModelBiasJobDefinitionResponse);
    return static_cast<const CreateModelBiasJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelBiasJobDefinition \a response.
 */
void CreateModelBiasJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelBiasJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelBiasJobDefinitionResponsePrivate
 * \brief The CreateModelBiasJobDefinitionResponsePrivate class provides private implementation for CreateModelBiasJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelBiasJobDefinitionResponsePrivate object with public implementation \a q.
 */
CreateModelBiasJobDefinitionResponsePrivate::CreateModelBiasJobDefinitionResponsePrivate(
    CreateModelBiasJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelBiasJobDefinition response element from \a xml.
 */
void CreateModelBiasJobDefinitionResponsePrivate::parseCreateModelBiasJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelBiasJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
