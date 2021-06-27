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

#include "describeentitiesdetectionjobresponse.h"
#include "describeentitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEntitiesDetectionJobResponse
 * \brief The DescribeEntitiesDetectionJobResponse class provides an interace for Comprehend DescribeEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEntitiesDetectionJob
 */

/*!
 * Constructs a DescribeEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEntitiesDetectionJobResponse::DescribeEntitiesDetectionJobResponse(
        const DescribeEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEntitiesDetectionJobRequest * DescribeEntitiesDetectionJobResponse::request() const
{
    return static_cast<const DescribeEntitiesDetectionJobRequest *>(ComprehendResponse::request());
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeEntitiesDetectionJob \a response.
 */
void DescribeEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeEntitiesDetectionJobResponsePrivate
 * \brief The DescribeEntitiesDetectionJobResponsePrivate class provides private implementation for DescribeEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeEntitiesDetectionJobResponsePrivate::DescribeEntitiesDetectionJobResponsePrivate(
    DescribeEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeEntitiesDetectionJob response element from \a xml.
 */
void DescribeEntitiesDetectionJobResponsePrivate::parseDescribeEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
