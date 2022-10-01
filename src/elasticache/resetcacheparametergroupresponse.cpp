// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetcacheparametergroupresponse.h"
#include "resetcacheparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ResetCacheParameterGroupResponse
 * \brief The ResetCacheParameterGroupResponse class provides an interace for ElastiCache ResetCacheParameterGroup responses.
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
 * \sa ElastiCacheClient::resetCacheParameterGroup
 */

/*!
 * Constructs a ResetCacheParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ResetCacheParameterGroupResponse::ResetCacheParameterGroupResponse(
        const ResetCacheParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ResetCacheParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetCacheParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetCacheParameterGroupRequest * ResetCacheParameterGroupResponse::request() const
{
    Q_D(const ResetCacheParameterGroupResponse);
    return static_cast<const ResetCacheParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ResetCacheParameterGroup \a response.
 */
void ResetCacheParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetCacheParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ResetCacheParameterGroupResponsePrivate
 * \brief The ResetCacheParameterGroupResponsePrivate class provides private implementation for ResetCacheParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ResetCacheParameterGroupResponsePrivate object with public implementation \a q.
 */
ResetCacheParameterGroupResponsePrivate::ResetCacheParameterGroupResponsePrivate(
    ResetCacheParameterGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ResetCacheParameterGroup response element from \a xml.
 */
void ResetCacheParameterGroupResponsePrivate::parseResetCacheParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetCacheParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
