// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "increasereplicacountresponse.h"
#include "increasereplicacountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::IncreaseReplicaCountResponse
 * \brief The IncreaseReplicaCountResponse class provides an interace for ElastiCache IncreaseReplicaCount responses.
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
 * \sa ElastiCacheClient::increaseReplicaCount
 */

/*!
 * Constructs a IncreaseReplicaCountResponse object for \a reply to \a request, with parent \a parent.
 */
IncreaseReplicaCountResponse::IncreaseReplicaCountResponse(
        const IncreaseReplicaCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new IncreaseReplicaCountResponsePrivate(this), parent)
{
    setRequest(new IncreaseReplicaCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IncreaseReplicaCountRequest * IncreaseReplicaCountResponse::request() const
{
    Q_D(const IncreaseReplicaCountResponse);
    return static_cast<const IncreaseReplicaCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache IncreaseReplicaCount \a response.
 */
void IncreaseReplicaCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(IncreaseReplicaCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::IncreaseReplicaCountResponsePrivate
 * \brief The IncreaseReplicaCountResponsePrivate class provides private implementation for IncreaseReplicaCountResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a IncreaseReplicaCountResponsePrivate object with public implementation \a q.
 */
IncreaseReplicaCountResponsePrivate::IncreaseReplicaCountResponsePrivate(
    IncreaseReplicaCountResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache IncreaseReplicaCount response element from \a xml.
 */
void IncreaseReplicaCountResponsePrivate::parseIncreaseReplicaCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IncreaseReplicaCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
