// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationgroupresponse.h"
#include "modifyreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupResponse
 * \brief The ModifyReplicationGroupResponse class provides an interace for ElastiCache ModifyReplicationGroup responses.
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
 * \sa ElastiCacheClient::modifyReplicationGroup
 */

/*!
 * Constructs a ModifyReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReplicationGroupResponse::ModifyReplicationGroupResponse(
        const ModifyReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReplicationGroupRequest * ModifyReplicationGroupResponse::request() const
{
    Q_D(const ModifyReplicationGroupResponse);
    return static_cast<const ModifyReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyReplicationGroup \a response.
 */
void ModifyReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupResponsePrivate
 * \brief The ModifyReplicationGroupResponsePrivate class provides private implementation for ModifyReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyReplicationGroupResponsePrivate object with public implementation \a q.
 */
ModifyReplicationGroupResponsePrivate::ModifyReplicationGroupResponsePrivate(
    ModifyReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyReplicationGroup response element from \a xml.
 */
void ModifyReplicationGroupResponsePrivate::parseModifyReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
