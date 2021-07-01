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

#include "listlabelingjobsforworkteamresponse.h"
#include "listlabelingjobsforworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListLabelingJobsForWorkteamResponse
 * \brief The ListLabelingJobsForWorkteamResponse class provides an interace for SageMaker ListLabelingJobsForWorkteam responses.
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
 * \sa SageMakerClient::listLabelingJobsForWorkteam
 */

/*!
 * Constructs a ListLabelingJobsForWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
ListLabelingJobsForWorkteamResponse::ListLabelingJobsForWorkteamResponse(
        const ListLabelingJobsForWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListLabelingJobsForWorkteamResponsePrivate(this), parent)
{
    setRequest(new ListLabelingJobsForWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLabelingJobsForWorkteamRequest * ListLabelingJobsForWorkteamResponse::request() const
{
    Q_D(const ListLabelingJobsForWorkteamResponse);
    return static_cast<const ListLabelingJobsForWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListLabelingJobsForWorkteam \a response.
 */
void ListLabelingJobsForWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLabelingJobsForWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListLabelingJobsForWorkteamResponsePrivate
 * \brief The ListLabelingJobsForWorkteamResponsePrivate class provides private implementation for ListLabelingJobsForWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListLabelingJobsForWorkteamResponsePrivate object with public implementation \a q.
 */
ListLabelingJobsForWorkteamResponsePrivate::ListLabelingJobsForWorkteamResponsePrivate(
    ListLabelingJobsForWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListLabelingJobsForWorkteam response element from \a xml.
 */
void ListLabelingJobsForWorkteamResponsePrivate::parseListLabelingJobsForWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLabelingJobsForWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
