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
namespace Dax {

/*!
 * \class QtAws::Dax::DeleteSubnetGroupResponse
 * \brief The DeleteSubnetGroupResponse class provides an interace for Dax DeleteSubnetGroup responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::deleteSubnetGroup
 */

/*!
 * Constructs a DeleteSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSubnetGroupResponse::DeleteSubnetGroupResponse(
        const DeleteSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DeleteSubnetGroupResponsePrivate(this), parent)
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
 * Parses a successful Dax DeleteSubnetGroup \a response.
 */
void DeleteSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DeleteSubnetGroupResponsePrivate
 * \brief The DeleteSubnetGroupResponsePrivate class provides private implementation for DeleteSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DeleteSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteSubnetGroupResponsePrivate::DeleteSubnetGroupResponsePrivate(
    DeleteSubnetGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DeleteSubnetGroup response element from \a xml.
 */
void DeleteSubnetGroupResponsePrivate::parseDeleteSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
