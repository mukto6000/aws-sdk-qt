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

#include "modifydbsubnetgroupresponse.h"
#include "modifydbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBSubnetGroupResponse
 * \brief The ModifyDBSubnetGroupResponse class provides an interace for DocDb ModifyDBSubnetGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBSubnetGroup
 */

/*!
 * Constructs a ModifyDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBSubnetGroupResponse::ModifyDBSubnetGroupResponse(
        const ModifyDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBSubnetGroupRequest * ModifyDBSubnetGroupResponse::request() const
{
    Q_D(const ModifyDBSubnetGroupResponse);
    return static_cast<const ModifyDBSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ModifyDBSubnetGroup \a response.
 */
void ModifyDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBSubnetGroupResponsePrivate
 * \brief The ModifyDBSubnetGroupResponsePrivate class provides private implementation for ModifyDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
ModifyDBSubnetGroupResponsePrivate::ModifyDBSubnetGroupResponsePrivate(
    ModifyDBSubnetGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBSubnetGroup response element from \a xml.
 */
void ModifyDBSubnetGroupResponsePrivate::parseModifyDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
