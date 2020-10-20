/*
    Copyright 2013-2020 Paul Colby

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

#include "getjobsresponse.h"
#include "getjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobsResponse
 * \brief The GetJobsResponse class provides an interace for Glue GetJobs responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getJobs
 */

/*!
 * Constructs a GetJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobsResponse::GetJobsResponse(
        const GetJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobsResponsePrivate(this), parent)
{
    setRequest(new GetJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobsRequest * GetJobsResponse::request() const
{
    Q_D(const GetJobsResponse);
    return static_cast<const GetJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobs \a response.
 */
void GetJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobsResponsePrivate
 * \brief The GetJobsResponsePrivate class provides private implementation for GetJobsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobsResponsePrivate object with public implementation \a q.
 */
GetJobsResponsePrivate::GetJobsResponsePrivate(
    GetJobsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobs response element from \a xml.
 */
void GetJobsResponsePrivate::parseGetJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
