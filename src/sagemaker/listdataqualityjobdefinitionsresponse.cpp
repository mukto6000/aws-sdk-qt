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

#include "listdataqualityjobdefinitionsresponse.h"
#include "listdataqualityjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDataQualityJobDefinitionsResponse
 * \brief The ListDataQualityJobDefinitionsResponse class provides an interace for SageMaker ListDataQualityJobDefinitions responses.
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
 * \sa SageMakerClient::listDataQualityJobDefinitions
 */

/*!
 * Constructs a ListDataQualityJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataQualityJobDefinitionsResponse::ListDataQualityJobDefinitionsResponse(
        const ListDataQualityJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListDataQualityJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListDataQualityJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataQualityJobDefinitionsRequest * ListDataQualityJobDefinitionsResponse::request() const
{
    Q_D(const ListDataQualityJobDefinitionsResponse);
    return static_cast<const ListDataQualityJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListDataQualityJobDefinitions \a response.
 */
void ListDataQualityJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataQualityJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListDataQualityJobDefinitionsResponsePrivate
 * \brief The ListDataQualityJobDefinitionsResponsePrivate class provides private implementation for ListDataQualityJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDataQualityJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListDataQualityJobDefinitionsResponsePrivate::ListDataQualityJobDefinitionsResponsePrivate(
    ListDataQualityJobDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListDataQualityJobDefinitions response element from \a xml.
 */
void ListDataQualityJobDefinitionsResponsePrivate::parseListDataQualityJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataQualityJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
