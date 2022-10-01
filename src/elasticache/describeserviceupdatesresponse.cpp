// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserviceupdatesresponse.h"
#include "describeserviceupdatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeServiceUpdatesResponse
 * \brief The DescribeServiceUpdatesResponse class provides an interace for ElastiCache DescribeServiceUpdates responses.
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
 * \sa ElastiCacheClient::describeServiceUpdates
 */

/*!
 * Constructs a DescribeServiceUpdatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeServiceUpdatesResponse::DescribeServiceUpdatesResponse(
        const DescribeServiceUpdatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeServiceUpdatesResponsePrivate(this), parent)
{
    setRequest(new DescribeServiceUpdatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeServiceUpdatesRequest * DescribeServiceUpdatesResponse::request() const
{
    Q_D(const DescribeServiceUpdatesResponse);
    return static_cast<const DescribeServiceUpdatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeServiceUpdates \a response.
 */
void DescribeServiceUpdatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeServiceUpdatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeServiceUpdatesResponsePrivate
 * \brief The DescribeServiceUpdatesResponsePrivate class provides private implementation for DescribeServiceUpdatesResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeServiceUpdatesResponsePrivate object with public implementation \a q.
 */
DescribeServiceUpdatesResponsePrivate::DescribeServiceUpdatesResponsePrivate(
    DescribeServiceUpdatesResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeServiceUpdates response element from \a xml.
 */
void DescribeServiceUpdatesResponsePrivate::parseDescribeServiceUpdatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServiceUpdatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
