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

#include "rejectresourceshareinvitationresponse.h"
#include "rejectresourceshareinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::RejectResourceShareInvitationResponse
 * \brief The RejectResourceShareInvitationResponse class provides an interace for RAM RejectResourceShareInvitation responses.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resources
 *  associated with the resource share. The following principals are supported: AWS accounts, organizational units (OU) from
 *  AWS Organizations, and organizations from AWS
 * 
 *  Organizations>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/ram/latest/userguide/">AWS Resource Access Manager
 *  User
 *
 * \sa RamClient::rejectResourceShareInvitation
 */

/*!
 * Constructs a RejectResourceShareInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
RejectResourceShareInvitationResponse::RejectResourceShareInvitationResponse(
        const RejectResourceShareInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new RejectResourceShareInvitationResponsePrivate(this), parent)
{
    setRequest(new RejectResourceShareInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectResourceShareInvitationRequest * RejectResourceShareInvitationResponse::request() const
{
    return static_cast<const RejectResourceShareInvitationRequest *>(RamResponse::request());
}

/*!
 * \reimp
 * Parses a successful RAM RejectResourceShareInvitation \a response.
 */
void RejectResourceShareInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectResourceShareInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RAM::RejectResourceShareInvitationResponsePrivate
 * \brief The RejectResourceShareInvitationResponsePrivate class provides private implementation for RejectResourceShareInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a RejectResourceShareInvitationResponsePrivate object with public implementation \a q.
 */
RejectResourceShareInvitationResponsePrivate::RejectResourceShareInvitationResponsePrivate(
    RejectResourceShareInvitationResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a RAM RejectResourceShareInvitation response element from \a xml.
 */
void RejectResourceShareInvitationResponsePrivate::parseRejectResourceShareInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectResourceShareInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RAM
} // namespace QtAws
