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

#include "describegroupmembershipresponse.h"
#include "describegroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeGroupMembershipResponse
 * \brief The DescribeGroupMembershipResponse class provides an interace for QuickSight DescribeGroupMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeGroupMembership
 */

/*!
 * Constructs a DescribeGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupMembershipResponse::DescribeGroupMembershipResponse(
        const DescribeGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupMembershipRequest * DescribeGroupMembershipResponse::request() const
{
    Q_D(const DescribeGroupMembershipResponse);
    return static_cast<const DescribeGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeGroupMembership \a response.
 */
void DescribeGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeGroupMembershipResponsePrivate
 * \brief The DescribeGroupMembershipResponsePrivate class provides private implementation for DescribeGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeGroupMembershipResponsePrivate object with public implementation \a q.
 */
DescribeGroupMembershipResponsePrivate::DescribeGroupMembershipResponsePrivate(
    DescribeGroupMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeGroupMembership response element from \a xml.
 */
void DescribeGroupMembershipResponsePrivate::parseDescribeGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
