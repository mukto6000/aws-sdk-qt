// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationgroupshardconfigurationresponse.h"
#include "modifyreplicationgroupshardconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationResponse
 * \brief The ModifyReplicationGroupShardConfigurationResponse class provides an interace for ElastiCache ModifyReplicationGroupShardConfiguration responses.
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
 * \sa ElastiCacheClient::modifyReplicationGroupShardConfiguration
 */

/*!
 * Constructs a ModifyReplicationGroupShardConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReplicationGroupShardConfigurationResponse::ModifyReplicationGroupShardConfigurationResponse(
        const ModifyReplicationGroupShardConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyReplicationGroupShardConfigurationResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationGroupShardConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReplicationGroupShardConfigurationRequest * ModifyReplicationGroupShardConfigurationResponse::request() const
{
    Q_D(const ModifyReplicationGroupShardConfigurationResponse);
    return static_cast<const ModifyReplicationGroupShardConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyReplicationGroupShardConfiguration \a response.
 */
void ModifyReplicationGroupShardConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReplicationGroupShardConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationResponsePrivate
 * \brief The ModifyReplicationGroupShardConfigurationResponsePrivate class provides private implementation for ModifyReplicationGroupShardConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyReplicationGroupShardConfigurationResponsePrivate object with public implementation \a q.
 */
ModifyReplicationGroupShardConfigurationResponsePrivate::ModifyReplicationGroupShardConfigurationResponsePrivate(
    ModifyReplicationGroupShardConfigurationResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyReplicationGroupShardConfiguration response element from \a xml.
 */
void ModifyReplicationGroupShardConfigurationResponsePrivate::parseModifyReplicationGroupShardConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationGroupShardConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
