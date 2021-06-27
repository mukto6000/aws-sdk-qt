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

#include "copydbclusterparametergroupresponse.h"
#include "copydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CopyDBClusterParameterGroupResponse
 * \brief The CopyDBClusterParameterGroupResponse class provides an interace for DocDB CopyDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::copyDBClusterParameterGroup
 */

/*!
 * Constructs a CopyDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CopyDBClusterParameterGroupResponse::CopyDBClusterParameterGroupResponse(
        const CopyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CopyDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CopyDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyDBClusterParameterGroupRequest * CopyDBClusterParameterGroupResponse::request() const
{
    return static_cast<const CopyDBClusterParameterGroupRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB CopyDBClusterParameterGroup \a response.
 */
void CopyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CopyDBClusterParameterGroupResponsePrivate
 * \brief The CopyDBClusterParameterGroupResponsePrivate class provides private implementation for CopyDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CopyDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
CopyDBClusterParameterGroupResponsePrivate::CopyDBClusterParameterGroupResponsePrivate(
    CopyDBClusterParameterGroupResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CopyDBClusterParameterGroup response element from \a xml.
 */
void CopyDBClusterParameterGroupResponsePrivate::parseCopyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
