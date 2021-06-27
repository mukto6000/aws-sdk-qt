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

#include "describedashboardpermissionsresponse.h"
#include "describedashboardpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDashboardPermissionsResponse
 * \brief The DescribeDashboardPermissionsResponse class provides an interace for QuickSight DescribeDashboardPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDashboardPermissions
 */

/*!
 * Constructs a DescribeDashboardPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDashboardPermissionsResponse::DescribeDashboardPermissionsResponse(
        const DescribeDashboardPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDashboardPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDashboardPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDashboardPermissionsRequest * DescribeDashboardPermissionsResponse::request() const
{
    return static_cast<const DescribeDashboardPermissionsRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDashboardPermissions \a response.
 */
void DescribeDashboardPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDashboardPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDashboardPermissionsResponsePrivate
 * \brief The DescribeDashboardPermissionsResponsePrivate class provides private implementation for DescribeDashboardPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDashboardPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeDashboardPermissionsResponsePrivate::DescribeDashboardPermissionsResponsePrivate(
    DescribeDashboardPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDashboardPermissions response element from \a xml.
 */
void DescribeDashboardPermissionsResponsePrivate::parseDescribeDashboardPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDashboardPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
