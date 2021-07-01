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

#include "tagresponse.h"
#include "tagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/*!
 * \class QtAws::ResourceGroups::TagResponse
 * \brief The TagResponse class provides an interace for ResourceGroups Tag responses.
 *
 * \inmodule QtAwsResourceGroups
 *
 *  <fullname>AWS Resource Groups</fullname>
 * 
 *  AWS Resource Groups lets you organize AWS resources such as Amazon EC2 instances, Amazon Relational Database Service
 *  databases, and Amazon S3 buckets into groups using criteria that you define as tags. A resource group is a collection of
 *  resources that match the resource types specified in a query, and share one or more tags or portions of tags. You can
 *  create a group of resources based on their roles in your cloud infrastructure, lifecycle stages, regions, application
 *  layers, or virtually any criteria. Resource Groups enable you to automate management tasks, such as those in AWS Systems
 *  Manager Automation documents, on tag-related resources in AWS Systems Manager. Groups of tagged resources also let you
 *  quickly view a custom console in AWS Systems Manager that shows AWS Config compliance and other monitoring data about
 *  member
 * 
 *  resources>
 * 
 *  To create a resource group, build a resource query, and specify tags that identify the criteria that members of the
 *  group have in common. Tags are key-value
 * 
 *  pairs>
 * 
 *  For more information about Resource Groups, see the <a
 *  href="https://docs.aws.amazon.com/ARG/latest/userguide/welcome.html">AWS Resource Groups User
 * 
 *  Guide</a>>
 * 
 *  AWS Resource Groups uses a REST-compliant API that you can use to perform the following types of
 * 
 *  operations> <ul> <li>
 * 
 *  Create, Read, Update, and Delete (CRUD) operations on resource groups and resource query
 * 
 *  entitie> </li> <li>
 * 
 *  Applying, editing, and removing tags from resource
 * 
 *  group> </li> <li>
 * 
 *  Resolving resource group member ARNs so they can be returned as search
 * 
 *  result> </li> <li>
 * 
 *  Getting data about resources that are members of a
 * 
 *  grou> </li> <li>
 * 
 *  Searching AWS resources based on a resource
 *
 * \sa ResourceGroupsClient::tag
 */

/*!
 * Constructs a TagResponse object for \a reply to \a request, with parent \a parent.
 */
TagResponse::TagResponse(
        const TagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new TagResponsePrivate(this), parent)
{
    setRequest(new TagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagRequest * TagResponse::request() const
{
    Q_D(const TagResponse);
    return static_cast<const TagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroups Tag \a response.
 */
void TagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroups::TagResponsePrivate
 * \brief The TagResponsePrivate class provides private implementation for TagResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a TagResponsePrivate object with public implementation \a q.
 */
TagResponsePrivate::TagResponsePrivate(
    TagResponse * const q) : ResourceGroupsResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroups Tag response element from \a xml.
 */
void TagResponsePrivate::parseTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroups
} // namespace QtAws
