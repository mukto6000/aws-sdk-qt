// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemounttargetsecuritygroupsresponse.h"
#include "describemounttargetsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeMountTargetSecurityGroupsResponse
 * \brief The DescribeMountTargetSecurityGroupsResponse class provides an interace for Efs DescribeMountTargetSecurityGroups responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::describeMountTargetSecurityGroups
 */

/*!
 * Constructs a DescribeMountTargetSecurityGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMountTargetSecurityGroupsResponse::DescribeMountTargetSecurityGroupsResponse(
        const DescribeMountTargetSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeMountTargetSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeMountTargetSecurityGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMountTargetSecurityGroupsRequest * DescribeMountTargetSecurityGroupsResponse::request() const
{
    Q_D(const DescribeMountTargetSecurityGroupsResponse);
    return static_cast<const DescribeMountTargetSecurityGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeMountTargetSecurityGroups \a response.
 */
void DescribeMountTargetSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMountTargetSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeMountTargetSecurityGroupsResponsePrivate
 * \brief The DescribeMountTargetSecurityGroupsResponsePrivate class provides private implementation for DescribeMountTargetSecurityGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeMountTargetSecurityGroupsResponsePrivate object with public implementation \a q.
 */
DescribeMountTargetSecurityGroupsResponsePrivate::DescribeMountTargetSecurityGroupsResponsePrivate(
    DescribeMountTargetSecurityGroupsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeMountTargetSecurityGroups response element from \a xml.
 */
void DescribeMountTargetSecurityGroupsResponsePrivate::parseDescribeMountTargetSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMountTargetSecurityGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
