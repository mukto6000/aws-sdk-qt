// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusergroupresponse.h"
#include "deleteusergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteUserGroupResponse
 * \brief The DeleteUserGroupResponse class provides an interace for ElastiCache DeleteUserGroup responses.
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
 * \sa ElastiCacheClient::deleteUserGroup
 */

/*!
 * Constructs a DeleteUserGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserGroupResponse::DeleteUserGroupResponse(
        const DeleteUserGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteUserGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteUserGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserGroupRequest * DeleteUserGroupResponse::request() const
{
    Q_D(const DeleteUserGroupResponse);
    return static_cast<const DeleteUserGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DeleteUserGroup \a response.
 */
void DeleteUserGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DeleteUserGroupResponsePrivate
 * \brief The DeleteUserGroupResponsePrivate class provides private implementation for DeleteUserGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteUserGroupResponsePrivate object with public implementation \a q.
 */
DeleteUserGroupResponsePrivate::DeleteUserGroupResponsePrivate(
    DeleteUserGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DeleteUserGroup response element from \a xml.
 */
void DeleteUserGroupResponsePrivate::parseDeleteUserGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
