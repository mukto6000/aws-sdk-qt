// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupsresponse.h"
#include "describegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::DescribeGroupsResponse
 * \brief The DescribeGroupsResponse class provides an interace for WorkDocs DescribeGroups responses.
 *
 * \inmodule QtAwsWorkDocs
 *
 *  The WorkDocs API is designed for the following use
 * 
 *  cases> <ul> <li>
 * 
 *  File Migration: File migration applications are supported for users who want to migrate their files from an on-premises
 *  or off-premises file system or service. Users can insert files into a user directory structure, as well as allow for
 *  basic metadata changes, such as modifications to the permissions of
 * 
 *  files> </li> <li>
 * 
 *  Security: Support security applications are supported for users who have additional security needs, such as antivirus or
 *  data loss prevention. The API actions, along with AWS CloudTrail, allow these applications to detect when changes occur
 *  in Amazon WorkDocs. Then, the application can take the necessary actions and replace the target file. If the target file
 *  violates the policy, the application can also choose to email the
 * 
 *  user> </li> <li>
 * 
 *  eDiscovery/Analytics: General administrative applications are supported, such as eDiscovery and analytics. These
 *  applications can choose to mimic or record the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to
 *  replicate data for eDiscovery, backup, or analytical
 * 
 *  applications> </li> </ul>
 * 
 *  All Amazon WorkDocs API actions are Amazon authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkDocs site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
 *  limited to, the ability to modify file permissions and upload any file to any user. This allows developers to perform
 *  the three use cases above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkDocsClient::describeGroups
 */

/*!
 * Constructs a DescribeGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupsResponse::DescribeGroupsResponse(
        const DescribeGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupsRequest * DescribeGroupsResponse::request() const
{
    Q_D(const DescribeGroupsResponse);
    return static_cast<const DescribeGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkDocs DescribeGroups \a response.
 */
void DescribeGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkDocs::DescribeGroupsResponsePrivate
 * \brief The DescribeGroupsResponsePrivate class provides private implementation for DescribeGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a DescribeGroupsResponsePrivate object with public implementation \a q.
 */
DescribeGroupsResponsePrivate::DescribeGroupsResponsePrivate(
    DescribeGroupsResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/*!
 * Parses a WorkDocs DescribeGroups response element from \a xml.
 */
void DescribeGroupsResponsePrivate::parseDescribeGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkDocs
} // namespace QtAws
