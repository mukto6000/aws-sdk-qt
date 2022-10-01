// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listallowednodetypemodificationsresponse.h"
#include "listallowednodetypemodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ListAllowedNodeTypeModificationsResponse
 * \brief The ListAllowedNodeTypeModificationsResponse class provides an interace for ElastiCache ListAllowedNodeTypeModifications responses.
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
 * \sa ElastiCacheClient::listAllowedNodeTypeModifications
 */

/*!
 * Constructs a ListAllowedNodeTypeModificationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAllowedNodeTypeModificationsResponse::ListAllowedNodeTypeModificationsResponse(
        const ListAllowedNodeTypeModificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ListAllowedNodeTypeModificationsResponsePrivate(this), parent)
{
    setRequest(new ListAllowedNodeTypeModificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAllowedNodeTypeModificationsRequest * ListAllowedNodeTypeModificationsResponse::request() const
{
    Q_D(const ListAllowedNodeTypeModificationsResponse);
    return static_cast<const ListAllowedNodeTypeModificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ListAllowedNodeTypeModifications \a response.
 */
void ListAllowedNodeTypeModificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAllowedNodeTypeModificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ListAllowedNodeTypeModificationsResponsePrivate
 * \brief The ListAllowedNodeTypeModificationsResponsePrivate class provides private implementation for ListAllowedNodeTypeModificationsResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ListAllowedNodeTypeModificationsResponsePrivate object with public implementation \a q.
 */
ListAllowedNodeTypeModificationsResponsePrivate::ListAllowedNodeTypeModificationsResponsePrivate(
    ListAllowedNodeTypeModificationsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ListAllowedNodeTypeModifications response element from \a xml.
 */
void ListAllowedNodeTypeModificationsResponsePrivate::parseListAllowedNodeTypeModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAllowedNodeTypeModificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
