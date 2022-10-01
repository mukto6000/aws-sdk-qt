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

#include "describejobrunresponse.h"
#include "describejobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeJobRunResponse
 * \brief The DescribeJobRunResponse class provides an interace for DataBrew DescribeJobRun responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeJobRun
 */

/*!
 * Constructs a DescribeJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobRunResponse::DescribeJobRunResponse(
        const DescribeJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeJobRunResponsePrivate(this), parent)
{
    setRequest(new DescribeJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobRunRequest * DescribeJobRunResponse::request() const
{
    Q_D(const DescribeJobRunResponse);
    return static_cast<const DescribeJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DescribeJobRun \a response.
 */
void DescribeJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeJobRunResponsePrivate
 * \brief The DescribeJobRunResponsePrivate class provides private implementation for DescribeJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeJobRunResponsePrivate object with public implementation \a q.
 */
DescribeJobRunResponsePrivate::DescribeJobRunResponsePrivate(
    DescribeJobRunResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeJobRun response element from \a xml.
 */
void DescribeJobRunResponsePrivate::parseDescribeJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
