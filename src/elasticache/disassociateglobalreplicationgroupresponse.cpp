/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociateglobalreplicationgroupresponse.h"
#include "disassociateglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DisassociateGlobalReplicationGroupResponse
 * \brief The DisassociateGlobalReplicationGroupResponse class provides an interace for ElastiCache DisassociateGlobalReplicationGroup responses.
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
 * \sa ElastiCacheClient::disassociateGlobalReplicationGroup
 */

/*!
 * Constructs a DisassociateGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateGlobalReplicationGroupResponse::DisassociateGlobalReplicationGroupResponse(
        const DisassociateGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DisassociateGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateGlobalReplicationGroupRequest * DisassociateGlobalReplicationGroupResponse::request() const
{
    return static_cast<const DisassociateGlobalReplicationGroupRequest *>(ElastiCacheResponse::request());
}

/*!
 * \reimp
 * Parses a successful ElastiCache DisassociateGlobalReplicationGroup \a response.
 */
void DisassociateGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DisassociateGlobalReplicationGroupResponsePrivate
 * \brief The DisassociateGlobalReplicationGroupResponsePrivate class provides private implementation for DisassociateGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DisassociateGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
DisassociateGlobalReplicationGroupResponsePrivate::DisassociateGlobalReplicationGroupResponsePrivate(
    DisassociateGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DisassociateGlobalReplicationGroup response element from \a xml.
 */
void DisassociateGlobalReplicationGroupResponsePrivate::parseDisassociateGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
