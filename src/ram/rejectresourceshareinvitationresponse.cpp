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
namespace Ram {

/*!
 * \class QtAws::Ram::RejectResourceShareInvitationResponse
 * \brief The RejectResourceShareInvitationResponse class provides an interace for Ram RejectResourceShareInvitation responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
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
    Q_D(const RejectResourceShareInvitationResponse);
    return static_cast<const RejectResourceShareInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram RejectResourceShareInvitation \a response.
 */
void RejectResourceShareInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectResourceShareInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::RejectResourceShareInvitationResponsePrivate
 * \brief The RejectResourceShareInvitationResponsePrivate class provides private implementation for RejectResourceShareInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a RejectResourceShareInvitationResponsePrivate object with public implementation \a q.
 */
RejectResourceShareInvitationResponsePrivate::RejectResourceShareInvitationResponsePrivate(
    RejectResourceShareInvitationResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram RejectResourceShareInvitation response element from \a xml.
 */
void RejectResourceShareInvitationResponsePrivate::parseRejectResourceShareInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectResourceShareInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
