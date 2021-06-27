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

#include "listtransformjobsresponse.h"
#include "listtransformjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTransformJobsResponse
 * \brief The ListTransformJobsResponse class provides an interace for SageMaker ListTransformJobs responses.
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
 * \sa SageMakerClient::listTransformJobs
 */

/*!
 * Constructs a ListTransformJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTransformJobsResponse::ListTransformJobsResponse(
        const ListTransformJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTransformJobsResponsePrivate(this), parent)
{
    setRequest(new ListTransformJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTransformJobsRequest * ListTransformJobsResponse::request() const
{
    return static_cast<const ListTransformJobsRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTransformJobs \a response.
 */
void ListTransformJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTransformJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTransformJobsResponsePrivate
 * \brief The ListTransformJobsResponsePrivate class provides private implementation for ListTransformJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTransformJobsResponsePrivate object with public implementation \a q.
 */
ListTransformJobsResponsePrivate::ListTransformJobsResponsePrivate(
    ListTransformJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTransformJobs response element from \a xml.
 */
void ListTransformJobsResponsePrivate::parseListTransformJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTransformJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
