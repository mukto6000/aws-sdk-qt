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

#include "describeparametergroupsresponse.h"
#include "describeparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeParameterGroupsResponse
 * \brief The DescribeParameterGroupsResponse class provides an interace for Dax DescribeParameterGroups responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeParameterGroups
 */

/*!
 * Constructs a DescribeParameterGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeParameterGroupsResponse::DescribeParameterGroupsResponse(
        const DescribeParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DescribeParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeParameterGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeParameterGroupsRequest * DescribeParameterGroupsResponse::request() const
{
    Q_D(const DescribeParameterGroupsResponse);
    return static_cast<const DescribeParameterGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DescribeParameterGroups \a response.
 */
void DescribeParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeParameterGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DescribeParameterGroupsResponsePrivate
 * \brief The DescribeParameterGroupsResponsePrivate class provides private implementation for DescribeParameterGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeParameterGroupsResponsePrivate object with public implementation \a q.
 */
DescribeParameterGroupsResponsePrivate::DescribeParameterGroupsResponsePrivate(
    DescribeParameterGroupsResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DescribeParameterGroups response element from \a xml.
 */
void DescribeParameterGroupsResponsePrivate::parseDescribeParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParameterGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
