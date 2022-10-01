// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationgroupresponse.h"
#include "createreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateReplicationGroupResponse
 * \brief The CreateReplicationGroupResponse class provides an interace for ElastiCache CreateReplicationGroup responses.
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
 * \sa ElastiCacheClient::createReplicationGroup
 */

/*!
 * Constructs a CreateReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationGroupResponse::CreateReplicationGroupResponse(
        const CreateReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationGroupRequest * CreateReplicationGroupResponse::request() const
{
    Q_D(const CreateReplicationGroupResponse);
    return static_cast<const CreateReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateReplicationGroup \a response.
 */
void CreateReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateReplicationGroupResponsePrivate
 * \brief The CreateReplicationGroupResponsePrivate class provides private implementation for CreateReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateReplicationGroupResponsePrivate object with public implementation \a q.
 */
CreateReplicationGroupResponsePrivate::CreateReplicationGroupResponsePrivate(
    CreateReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateReplicationGroup response element from \a xml.
 */
void CreateReplicationGroupResponsePrivate::parseCreateReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
