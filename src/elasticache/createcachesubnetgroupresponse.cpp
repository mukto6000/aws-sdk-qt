// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcachesubnetgroupresponse.h"
#include "createcachesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheSubnetGroupResponse
 * \brief The CreateCacheSubnetGroupResponse class provides an interace for ElastiCache CreateCacheSubnetGroup responses.
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
 * \sa ElastiCacheClient::createCacheSubnetGroup
 */

/*!
 * Constructs a CreateCacheSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCacheSubnetGroupResponse::CreateCacheSubnetGroupResponse(
        const CreateCacheSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateCacheSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCacheSubnetGroupRequest * CreateCacheSubnetGroupResponse::request() const
{
    Q_D(const CreateCacheSubnetGroupResponse);
    return static_cast<const CreateCacheSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateCacheSubnetGroup \a response.
 */
void CreateCacheSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCacheSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateCacheSubnetGroupResponsePrivate
 * \brief The CreateCacheSubnetGroupResponsePrivate class provides private implementation for CreateCacheSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateCacheSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateCacheSubnetGroupResponsePrivate::CreateCacheSubnetGroupResponsePrivate(
    CreateCacheSubnetGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateCacheSubnetGroup response element from \a xml.
 */
void CreateCacheSubnetGroupResponsePrivate::parseCreateCacheSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
