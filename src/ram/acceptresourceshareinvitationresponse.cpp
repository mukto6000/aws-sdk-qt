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

#include "acceptresourceshareinvitationresponse.h"
#include "acceptresourceshareinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::AcceptResourceShareInvitationResponse
 * \brief The AcceptResourceShareInvitationResponse class provides an interace for RAM AcceptResourceShareInvitation responses.
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
 * \sa RamClient::acceptResourceShareInvitation
 */

/*!
 * Constructs a AcceptResourceShareInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptResourceShareInvitationResponse::AcceptResourceShareInvitationResponse(
        const AcceptResourceShareInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new AcceptResourceShareInvitationResponsePrivate(this), parent)
{
    setRequest(new AcceptResourceShareInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptResourceShareInvitationRequest * AcceptResourceShareInvitationResponse::request() const
{
    Q_D(const AcceptResourceShareInvitationResponse);
    return static_cast<const AcceptResourceShareInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RAM AcceptResourceShareInvitation \a response.
 */
void AcceptResourceShareInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptResourceShareInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RAM::AcceptResourceShareInvitationResponsePrivate
 * \brief The AcceptResourceShareInvitationResponsePrivate class provides private implementation for AcceptResourceShareInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a AcceptResourceShareInvitationResponsePrivate object with public implementation \a q.
 */
AcceptResourceShareInvitationResponsePrivate::AcceptResourceShareInvitationResponsePrivate(
    AcceptResourceShareInvitationResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a RAM AcceptResourceShareInvitation response element from \a xml.
 */
void AcceptResourceShareInvitationResponsePrivate::parseAcceptResourceShareInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptResourceShareInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RAM
} // namespace QtAws
