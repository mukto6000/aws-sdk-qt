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

#include "putretentionpolicyresponse.h"
#include "putretentionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::PutRetentionPolicyResponse
 * \brief The PutRetentionPolicyResponse class provides an interace for WorkMail PutRetentionPolicy responses.
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
 * \sa WorkMailClient::putRetentionPolicy
 */

/*!
 * Constructs a PutRetentionPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutRetentionPolicyResponse::PutRetentionPolicyResponse(
        const PutRetentionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new PutRetentionPolicyResponsePrivate(this), parent)
{
    setRequest(new PutRetentionPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRetentionPolicyRequest * PutRetentionPolicyResponse::request() const
{
    return static_cast<const PutRetentionPolicyRequest *>(WorkMailResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkMail PutRetentionPolicy \a response.
 */
void PutRetentionPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRetentionPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMail::PutRetentionPolicyResponsePrivate
 * \brief The PutRetentionPolicyResponsePrivate class provides private implementation for PutRetentionPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a PutRetentionPolicyResponsePrivate object with public implementation \a q.
 */
PutRetentionPolicyResponsePrivate::PutRetentionPolicyResponsePrivate(
    PutRetentionPolicyResponse * const q) : WorkMailResponsePrivate(q)
{

}

/*!
 * Parses a WorkMail PutRetentionPolicy response element from \a xml.
 */
void PutRetentionPolicyResponsePrivate::parsePutRetentionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRetentionPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkMail
} // namespace QtAws
