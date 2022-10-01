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

#include "deleteiampolicyassignmentresponse.h"
#include "deleteiampolicyassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteIAMPolicyAssignmentResponse
 * \brief The DeleteIAMPolicyAssignmentResponse class provides an interace for QuickSight DeleteIAMPolicyAssignment responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteIAMPolicyAssignment
 */

/*!
 * Constructs a DeleteIAMPolicyAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIAMPolicyAssignmentResponse::DeleteIAMPolicyAssignmentResponse(
        const DeleteIAMPolicyAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteIAMPolicyAssignmentResponsePrivate(this), parent)
{
    setRequest(new DeleteIAMPolicyAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIAMPolicyAssignmentRequest * DeleteIAMPolicyAssignmentResponse::request() const
{
    Q_D(const DeleteIAMPolicyAssignmentResponse);
    return static_cast<const DeleteIAMPolicyAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteIAMPolicyAssignment \a response.
 */
void DeleteIAMPolicyAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIAMPolicyAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteIAMPolicyAssignmentResponsePrivate
 * \brief The DeleteIAMPolicyAssignmentResponsePrivate class provides private implementation for DeleteIAMPolicyAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteIAMPolicyAssignmentResponsePrivate object with public implementation \a q.
 */
DeleteIAMPolicyAssignmentResponsePrivate::DeleteIAMPolicyAssignmentResponsePrivate(
    DeleteIAMPolicyAssignmentResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteIAMPolicyAssignment response element from \a xml.
 */
void DeleteIAMPolicyAssignmentResponsePrivate::parseDeleteIAMPolicyAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIAMPolicyAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
