// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createglobalreplicationgroupresponse.h"
#include "createglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateGlobalReplicationGroupResponse
 * \brief The CreateGlobalReplicationGroupResponse class provides an interace for ElastiCache CreateGlobalReplicationGroup responses.
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
 * \sa ElastiCacheClient::createGlobalReplicationGroup
 */

/*!
 * Constructs a CreateGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGlobalReplicationGroupResponse::CreateGlobalReplicationGroupResponse(
        const CreateGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new CreateGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGlobalReplicationGroupRequest * CreateGlobalReplicationGroupResponse::request() const
{
    Q_D(const CreateGlobalReplicationGroupResponse);
    return static_cast<const CreateGlobalReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateGlobalReplicationGroup \a response.
 */
void CreateGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateGlobalReplicationGroupResponsePrivate
 * \brief The CreateGlobalReplicationGroupResponsePrivate class provides private implementation for CreateGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
CreateGlobalReplicationGroupResponsePrivate::CreateGlobalReplicationGroupResponsePrivate(
    CreateGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateGlobalReplicationGroup response element from \a xml.
 */
void CreateGlobalReplicationGroupResponsePrivate::parseCreateGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
