// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourceresponse.h"
#include "describeresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::DescribeResourceResponse
 * \brief The DescribeResourceResponse class provides an interace for WorkMail DescribeResource responses.
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
 * \sa WorkMailClient::describeResource
 */

/*!
 * Constructs a DescribeResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourceResponse::DescribeResourceResponse(
        const DescribeResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DescribeResourceResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourceRequest * DescribeResourceResponse::request() const
{
    Q_D(const DescribeResourceResponse);
    return static_cast<const DescribeResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkMail DescribeResource \a response.
 */
void DescribeResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMail::DescribeResourceResponsePrivate
 * \brief The DescribeResourceResponsePrivate class provides private implementation for DescribeResourceResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a DescribeResourceResponsePrivate object with public implementation \a q.
 */
DescribeResourceResponsePrivate::DescribeResourceResponsePrivate(
    DescribeResourceResponse * const q) : WorkMailResponsePrivate(q)
{

}

/*!
 * Parses a WorkMail DescribeResource response element from \a xml.
 */
void DescribeResourceResponsePrivate::parseDescribeResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkMail
} // namespace QtAws
