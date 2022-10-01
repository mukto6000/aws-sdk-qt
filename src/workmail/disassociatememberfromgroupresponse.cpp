// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatememberfromgroupresponse.h"
#include "disassociatememberfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::DisassociateMemberFromGroupResponse
 * \brief The DisassociateMemberFromGroupResponse class provides an interace for WorkMail DisassociateMemberFromGroup responses.
 *
 * \inmodule QtAwsWorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or other native
 *  iOS and Android email applications. You can integrate WorkMail with your existing corporate directory and control both
 *  the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All WorkMail API operations are Amazon-authenticated and certificate-signed. They not only require the use of the AWS
 *  SDK, but also allow for the exclusive use of AWS Identity and Access Management users and roles to help facilitate
 *  access, trust, and permission policies. By creating a role and allowing an IAM user to access the WorkMail site, the IAM
 *  user gains full administrative visibility into the entire WorkMail organization (or as set in the IAM policy). This
 *  includes, but is not limited to, the ability to create, update, and delete users, groups, and resources. This allows
 *  developers to perform the scenarios listed above, as well as give users the ability to grant access on a selective basis
 *  using the IAM
 *
 * \sa WorkMailClient::disassociateMemberFromGroup
 */

/*!
 * Constructs a DisassociateMemberFromGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMemberFromGroupResponse::DisassociateMemberFromGroupResponse(
        const DisassociateMemberFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DisassociateMemberFromGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateMemberFromGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMemberFromGroupRequest * DisassociateMemberFromGroupResponse::request() const
{
    Q_D(const DisassociateMemberFromGroupResponse);
    return static_cast<const DisassociateMemberFromGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkMail DisassociateMemberFromGroup \a response.
 */
void DisassociateMemberFromGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMemberFromGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMail::DisassociateMemberFromGroupResponsePrivate
 * \brief The DisassociateMemberFromGroupResponsePrivate class provides private implementation for DisassociateMemberFromGroupResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a DisassociateMemberFromGroupResponsePrivate object with public implementation \a q.
 */
DisassociateMemberFromGroupResponsePrivate::DisassociateMemberFromGroupResponsePrivate(
    DisassociateMemberFromGroupResponse * const q) : WorkMailResponsePrivate(q)
{

}

/*!
 * Parses a WorkMail DisassociateMemberFromGroup response element from \a xml.
 */
void DisassociateMemberFromGroupResponsePrivate::parseDisassociateMemberFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMemberFromGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkMail
} // namespace QtAws
