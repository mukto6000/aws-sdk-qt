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

#include "deletesubnetgroupresponse.h"
#include "deletesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteSubnetGroupResponse
 * \brief The DeleteSubnetGroupResponse class provides an interace for MemoryDb DeleteSubnetGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteSubnetGroup
 */

/*!
 * Constructs a DeleteSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSubnetGroupResponse::DeleteSubnetGroupResponse(
        const DeleteSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DeleteSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSubnetGroupRequest * DeleteSubnetGroupResponse::request() const
{
    Q_D(const DeleteSubnetGroupResponse);
    return static_cast<const DeleteSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DeleteSubnetGroup \a response.
 */
void DeleteSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DeleteSubnetGroupResponsePrivate
 * \brief The DeleteSubnetGroupResponsePrivate class provides private implementation for DeleteSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteSubnetGroupResponsePrivate::DeleteSubnetGroupResponsePrivate(
    DeleteSubnetGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DeleteSubnetGroup response element from \a xml.
 */
void DeleteSubnetGroupResponsePrivate::parseDeleteSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
