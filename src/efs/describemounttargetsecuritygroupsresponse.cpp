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

#include "describemounttargetsecuritygroupsresponse.h"
#include "describemounttargetsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeMountTargetSecurityGroupsResponse
 * \brief The DescribeMountTargetSecurityGroupsResponse class provides an interace for EFS DescribeMountTargetSecurityGroups responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
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
    return static_cast<const DescribeMountTargetSecurityGroupsRequest *>(EfsResponse::request());
}

/*!
 * \reimp
 * Parses a successful EFS DescribeMountTargetSecurityGroups \a response.
 */
void DescribeMountTargetSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMountTargetSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DescribeMountTargetSecurityGroupsResponsePrivate
 * \brief The DescribeMountTargetSecurityGroupsResponsePrivate class provides private implementation for DescribeMountTargetSecurityGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeMountTargetSecurityGroupsResponsePrivate object with public implementation \a q.
 */
DescribeMountTargetSecurityGroupsResponsePrivate::DescribeMountTargetSecurityGroupsResponsePrivate(
    DescribeMountTargetSecurityGroupsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DescribeMountTargetSecurityGroups response element from \a xml.
 */
void DescribeMountTargetSecurityGroupsResponsePrivate::parseDescribeMountTargetSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMountTargetSecurityGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
