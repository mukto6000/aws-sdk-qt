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

#include "deletemodelexplainabilityjobdefinitionresponse.h"
#include "deletemodelexplainabilityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelExplainabilityJobDefinitionResponse
 * \brief The DeleteModelExplainabilityJobDefinitionResponse class provides an interace for SageMaker DeleteModelExplainabilityJobDefinition responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteModelExplainabilityJobDefinition
 */

/*!
 * Constructs a DeleteModelExplainabilityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelExplainabilityJobDefinitionResponse::DeleteModelExplainabilityJobDefinitionResponse(
        const DeleteModelExplainabilityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelExplainabilityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelExplainabilityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelExplainabilityJobDefinitionRequest * DeleteModelExplainabilityJobDefinitionResponse::request() const
{
    Q_D(const DeleteModelExplainabilityJobDefinitionResponse);
    return static_cast<const DeleteModelExplainabilityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelExplainabilityJobDefinition \a response.
 */
void DeleteModelExplainabilityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelExplainabilityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelExplainabilityJobDefinitionResponsePrivate
 * \brief The DeleteModelExplainabilityJobDefinitionResponsePrivate class provides private implementation for DeleteModelExplainabilityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelExplainabilityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteModelExplainabilityJobDefinitionResponsePrivate::DeleteModelExplainabilityJobDefinitionResponsePrivate(
    DeleteModelExplainabilityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelExplainabilityJobDefinition response element from \a xml.
 */
void DeleteModelExplainabilityJobDefinitionResponsePrivate::parseDeleteModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelExplainabilityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
