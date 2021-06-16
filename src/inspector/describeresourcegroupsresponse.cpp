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

#include "describeresourcegroupsresponse.h"
#include "describeresourcegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsResponse
 * \brief The DescribeResourceGroupsResponse class provides an interace for Inspector DescribeResourceGroups responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeResourceGroups
 */

/*!
 * Constructs a DescribeResourceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourceGroupsResponse::DescribeResourceGroupsResponse(
        const DescribeResourceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeResourceGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourceGroupsRequest * DescribeResourceGroupsResponse::request() const
{
    Q_D(const DescribeResourceGroupsResponse);
    return static_cast<const DescribeResourceGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeResourceGroups \a response.
 */
void DescribeResourceGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsResponsePrivate
 * \brief The DescribeResourceGroupsResponsePrivate class provides private implementation for DescribeResourceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeResourceGroupsResponsePrivate object with public implementation \a q.
 */
DescribeResourceGroupsResponsePrivate::DescribeResourceGroupsResponsePrivate(
    DescribeResourceGroupsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeResourceGroups response element from \a xml.
 */
void DescribeResourceGroupsResponsePrivate::parseDescribeResourceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
