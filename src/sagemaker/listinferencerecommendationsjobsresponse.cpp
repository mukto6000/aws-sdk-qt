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

#include "listinferencerecommendationsjobsresponse.h"
#include "listinferencerecommendationsjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListInferenceRecommendationsJobsResponse
 * \brief The ListInferenceRecommendationsJobsResponse class provides an interace for SageMaker ListInferenceRecommendationsJobs responses.
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
 * \sa SageMakerClient::listInferenceRecommendationsJobs
 */

/*!
 * Constructs a ListInferenceRecommendationsJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInferenceRecommendationsJobsResponse::ListInferenceRecommendationsJobsResponse(
        const ListInferenceRecommendationsJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListInferenceRecommendationsJobsResponsePrivate(this), parent)
{
    setRequest(new ListInferenceRecommendationsJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInferenceRecommendationsJobsRequest * ListInferenceRecommendationsJobsResponse::request() const
{
    Q_D(const ListInferenceRecommendationsJobsResponse);
    return static_cast<const ListInferenceRecommendationsJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListInferenceRecommendationsJobs \a response.
 */
void ListInferenceRecommendationsJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInferenceRecommendationsJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListInferenceRecommendationsJobsResponsePrivate
 * \brief The ListInferenceRecommendationsJobsResponsePrivate class provides private implementation for ListInferenceRecommendationsJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListInferenceRecommendationsJobsResponsePrivate object with public implementation \a q.
 */
ListInferenceRecommendationsJobsResponsePrivate::ListInferenceRecommendationsJobsResponsePrivate(
    ListInferenceRecommendationsJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListInferenceRecommendationsJobs response element from \a xml.
 */
void ListInferenceRecommendationsJobsResponsePrivate::parseListInferenceRecommendationsJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInferenceRecommendationsJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
