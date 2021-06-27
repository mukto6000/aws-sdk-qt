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

#include "describeusergroupsresponse.h"
#include "describeusergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeUserGroupsResponse
 * \brief The DescribeUserGroupsResponse class provides an interace for ElastiCache DescribeUserGroups responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::describeUserGroups
 */

/*!
 * Constructs a DescribeUserGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserGroupsResponse::DescribeUserGroupsResponse(
        const DescribeUserGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeUserGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeUserGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserGroupsRequest * DescribeUserGroupsResponse::request() const
{
    return static_cast<const DescribeUserGroupsRequest *>(ElastiCacheResponse::request());
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeUserGroups \a response.
 */
void DescribeUserGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeUserGroupsResponsePrivate
 * \brief The DescribeUserGroupsResponsePrivate class provides private implementation for DescribeUserGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeUserGroupsResponsePrivate object with public implementation \a q.
 */
DescribeUserGroupsResponsePrivate::DescribeUserGroupsResponsePrivate(
    DescribeUserGroupsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeUserGroups response element from \a xml.
 */
void DescribeUserGroupsResponsePrivate::parseDescribeUserGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
