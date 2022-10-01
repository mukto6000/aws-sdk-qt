// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupqueryrequest.h"
#include "getgroupqueryrequest_p.h"
#include "getgroupqueryresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/*!
 * \class QtAws::ResourceGroups::GetGroupQueryRequest
 * \brief The GetGroupQueryRequest class provides an interface for ResourceGroups GetGroupQuery requests.
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
 * \sa ResourceGroupsClient::getGroupQuery
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupQueryRequest::GetGroupQueryRequest(const GetGroupQueryRequest &other)
    : ResourceGroupsRequest(new GetGroupQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupQueryRequest object.
 */
GetGroupQueryRequest::GetGroupQueryRequest()
    : ResourceGroupsRequest(new GetGroupQueryRequestPrivate(ResourceGroupsRequest::GetGroupQueryAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupQueryRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupQueryResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroups::GetGroupQueryRequestPrivate
 * \brief The GetGroupQueryRequestPrivate class provides private implementation for GetGroupQueryRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a GetGroupQueryRequestPrivate object for ResourceGroups \a action,
 * with public implementation \a q.
 */
GetGroupQueryRequestPrivate::GetGroupQueryRequestPrivate(
    const ResourceGroupsRequest::Action action, GetGroupQueryRequest * const q)
    : ResourceGroupsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupQueryRequest
 * class' copy constructor.
 */
GetGroupQueryRequestPrivate::GetGroupQueryRequestPrivate(
    const GetGroupQueryRequestPrivate &other, GetGroupQueryRequest * const q)
    : ResourceGroupsRequestPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
