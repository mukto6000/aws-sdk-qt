// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listteammembersrequest.h"
#include "listteammembersrequest_p.h"
#include "listteammembersresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::ListTeamMembersRequest
 * \brief The ListTeamMembersRequest class provides an interface for CodeStar ListTeamMembers requests.
 *
 * \inmodule QtAwsCodeStar
 *
 *  <fullname>AWS CodeStar</fullname>
 * 
 *  This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 *  the AWS CodeStar API along with usage
 * 
 *  examples>
 * 
 *  You can use the AWS CodeStar API to work
 * 
 *  with>
 * 
 *  Projects and their resources, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>DeleteProject</code>, which deletes a
 * 
 *  project> </li> <li>
 * 
 *  <code>DescribeProject</code>, which lists the attributes of a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListProjects</code>, which lists all projects associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <code>ListResources</code>, which lists the resources associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTagsForProject</code>, which lists the tags associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>TagProject</code>, which adds tags to a
 * 
 *  project> </li> <li>
 * 
 *  <code>UntagProject</code>, which removes tags from a
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>, which updates the attributes of a
 * 
 *  project> </li> </ul>
 * 
 *  Teams and team members, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 * 
 *  attributes> </li> <li>
 * 
 *  <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 * 
 *  project> </li> </ul>
 * 
 *  Users, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DeleteUserProfile</code>, which deletes all user profile information across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DescribeUserProfile</code>, which describes the profile of a
 * 
 *  user> </li> <li>
 * 
 *  <code>ListUserProfiles</code>, which lists all user
 * 
 *  profiles> </li> <li>
 * 
 *  <code>UpdateUserProfile</code>, which updates the profile for a
 *
 * \sa CodeStarClient::listTeamMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTeamMembersRequest::ListTeamMembersRequest(const ListTeamMembersRequest &other)
    : CodeStarRequest(new ListTeamMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTeamMembersRequest object.
 */
ListTeamMembersRequest::ListTeamMembersRequest()
    : CodeStarRequest(new ListTeamMembersRequestPrivate(CodeStarRequest::ListTeamMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTeamMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTeamMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTeamMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListTeamMembersResponse(*this, reply);
}

/*!
 * \class QtAws::CodeStar::ListTeamMembersRequestPrivate
 * \brief The ListTeamMembersRequestPrivate class provides private implementation for ListTeamMembersRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a ListTeamMembersRequestPrivate object for CodeStar \a action,
 * with public implementation \a q.
 */
ListTeamMembersRequestPrivate::ListTeamMembersRequestPrivate(
    const CodeStarRequest::Action action, ListTeamMembersRequest * const q)
    : CodeStarRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTeamMembersRequest
 * class' copy constructor.
 */
ListTeamMembersRequestPrivate::ListTeamMembersRequestPrivate(
    const ListTeamMembersRequestPrivate &other, ListTeamMembersRequest * const q)
    : CodeStarRequestPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
