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

#include "deletegroupmembershipresponse.h"
#include "deletegroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipResponse
 * \brief The DeleteGroupMembershipResponse class provides an interace for QuickSight DeleteGroupMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteGroupMembership
 */

/*!
 * Constructs a DeleteGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGroupMembershipResponse::DeleteGroupMembershipResponse(
        const DeleteGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGroupMembershipRequest * DeleteGroupMembershipResponse::request() const
{
    Q_D(const DeleteGroupMembershipResponse);
    return static_cast<const DeleteGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteGroupMembership \a response.
 */
void DeleteGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipResponsePrivate
 * \brief The DeleteGroupMembershipResponsePrivate class provides private implementation for DeleteGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteGroupMembershipResponsePrivate object with public implementation \a q.
 */
DeleteGroupMembershipResponsePrivate::DeleteGroupMembershipResponsePrivate(
    DeleteGroupMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteGroupMembership response element from \a xml.
 */
void DeleteGroupMembershipResponsePrivate::parseDeleteGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
