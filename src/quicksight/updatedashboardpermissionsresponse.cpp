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

#include "updatedashboardpermissionsresponse.h"
#include "updatedashboardpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardPermissionsResponse
 * \brief The UpdateDashboardPermissionsResponse class provides an interace for QuickSight UpdateDashboardPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboardPermissions
 */

/*!
 * Constructs a UpdateDashboardPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDashboardPermissionsResponse::UpdateDashboardPermissionsResponse(
        const UpdateDashboardPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDashboardPermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateDashboardPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDashboardPermissionsRequest * UpdateDashboardPermissionsResponse::request() const
{
    return static_cast<const UpdateDashboardPermissionsRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDashboardPermissions \a response.
 */
void UpdateDashboardPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDashboardPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardPermissionsResponsePrivate
 * \brief The UpdateDashboardPermissionsResponsePrivate class provides private implementation for UpdateDashboardPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardPermissionsResponsePrivate object with public implementation \a q.
 */
UpdateDashboardPermissionsResponsePrivate::UpdateDashboardPermissionsResponsePrivate(
    UpdateDashboardPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDashboardPermissions response element from \a xml.
 */
void UpdateDashboardPermissionsResponsePrivate::parseUpdateDashboardPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDashboardPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
