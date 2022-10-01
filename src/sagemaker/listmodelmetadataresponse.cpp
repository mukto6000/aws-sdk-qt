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

#include "listmodelmetadataresponse.h"
#include "listmodelmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelMetadataResponse
 * \brief The ListModelMetadataResponse class provides an interace for SageMaker ListModelMetadata responses.
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
 * \sa SageMakerClient::listModelMetadata
 */

/*!
 * Constructs a ListModelMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelMetadataResponse::ListModelMetadataResponse(
        const ListModelMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelMetadataResponsePrivate(this), parent)
{
    setRequest(new ListModelMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelMetadataRequest * ListModelMetadataResponse::request() const
{
    Q_D(const ListModelMetadataResponse);
    return static_cast<const ListModelMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelMetadata \a response.
 */
void ListModelMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelMetadataResponsePrivate
 * \brief The ListModelMetadataResponsePrivate class provides private implementation for ListModelMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelMetadataResponsePrivate object with public implementation \a q.
 */
ListModelMetadataResponsePrivate::ListModelMetadataResponsePrivate(
    ListModelMetadataResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelMetadata response element from \a xml.
 */
void ListModelMetadataResponsePrivate::parseListModelMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
