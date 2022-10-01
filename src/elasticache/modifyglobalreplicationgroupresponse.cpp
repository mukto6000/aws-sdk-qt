// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyglobalreplicationgroupresponse.h"
#include "modifyglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyGlobalReplicationGroupResponse
 * \brief The ModifyGlobalReplicationGroupResponse class provides an interace for ElastiCache ModifyGlobalReplicationGroup responses.
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
 * \sa ElastiCacheClient::modifyGlobalReplicationGroup
 */

/*!
 * Constructs a ModifyGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyGlobalReplicationGroupResponse::ModifyGlobalReplicationGroupResponse(
        const ModifyGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyGlobalReplicationGroupRequest * ModifyGlobalReplicationGroupResponse::request() const
{
    Q_D(const ModifyGlobalReplicationGroupResponse);
    return static_cast<const ModifyGlobalReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyGlobalReplicationGroup \a response.
 */
void ModifyGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyGlobalReplicationGroupResponsePrivate
 * \brief The ModifyGlobalReplicationGroupResponsePrivate class provides private implementation for ModifyGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
ModifyGlobalReplicationGroupResponsePrivate::ModifyGlobalReplicationGroupResponsePrivate(
    ModifyGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyGlobalReplicationGroup response element from \a xml.
 */
void ModifyGlobalReplicationGroupResponsePrivate::parseModifyGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
