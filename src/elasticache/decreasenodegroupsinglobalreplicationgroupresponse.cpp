// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "decreasenodegroupsinglobalreplicationgroupresponse.h"
#include "decreasenodegroupsinglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DecreaseNodeGroupsInGlobalReplicationGroupResponse
 * \brief The DecreaseNodeGroupsInGlobalReplicationGroupResponse class provides an interace for ElastiCache DecreaseNodeGroupsInGlobalReplicationGroup responses.
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
 * \sa ElastiCacheClient::decreaseNodeGroupsInGlobalReplicationGroup
 */

/*!
 * Constructs a DecreaseNodeGroupsInGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DecreaseNodeGroupsInGlobalReplicationGroupResponse::DecreaseNodeGroupsInGlobalReplicationGroupResponse(
        const DecreaseNodeGroupsInGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new DecreaseNodeGroupsInGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DecreaseNodeGroupsInGlobalReplicationGroupRequest * DecreaseNodeGroupsInGlobalReplicationGroupResponse::request() const
{
    Q_D(const DecreaseNodeGroupsInGlobalReplicationGroupResponse);
    return static_cast<const DecreaseNodeGroupsInGlobalReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DecreaseNodeGroupsInGlobalReplicationGroup \a response.
 */
void DecreaseNodeGroupsInGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DecreaseNodeGroupsInGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate
 * \brief The DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate class provides private implementation for DecreaseNodeGroupsInGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate::DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate(
    DecreaseNodeGroupsInGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DecreaseNodeGroupsInGlobalReplicationGroup response element from \a xml.
 */
void DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate::parseDecreaseNodeGroupsInGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecreaseNodeGroupsInGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
