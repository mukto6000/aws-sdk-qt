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

#include "describedbclusterparametergroupsresponse.h"
#include "describedbclusterparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsResponse
 * \brief The DescribeDBClusterParameterGroupsResponse class provides an interace for DocDb DescribeDBClusterParameterGroups responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterParameterGroups
 */

/*!
 * Constructs a DescribeDBClusterParameterGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterParameterGroupsResponse::DescribeDBClusterParameterGroupsResponse(
        const DescribeDBClusterParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClusterParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParameterGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterParameterGroupsRequest * DescribeDBClusterParameterGroupsResponse::request() const
{
    Q_D(const DescribeDBClusterParameterGroupsResponse);
    return static_cast<const DescribeDBClusterParameterGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusterParameterGroups \a response.
 */
void DescribeDBClusterParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterParameterGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsResponsePrivate
 * \brief The DescribeDBClusterParameterGroupsResponsePrivate class provides private implementation for DescribeDBClusterParameterGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterParameterGroupsResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterParameterGroupsResponsePrivate::DescribeDBClusterParameterGroupsResponsePrivate(
    DescribeDBClusterParameterGroupsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusterParameterGroups response element from \a xml.
 */
void DescribeDBClusterParameterGroupsResponsePrivate::parseDescribeDBClusterParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParameterGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
