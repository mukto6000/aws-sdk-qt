// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenvironmentmembershiprequest.h"
#include "updateenvironmentmembershiprequest_p.h"
#include "updateenvironmentmembershipresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::UpdateEnvironmentMembershipRequest
 * \brief The UpdateEnvironmentMembershipRequest class provides an interface for Cloud9 UpdateEnvironmentMembership requests.
 *
 * \inmodule QtAwsCloud9
 *
 *  <fullname>Cloud9</fullname>
 * 
 *  Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 * 
 *  cloud>
 * 
 *  For more information about Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
 * 
 *  Guide</a>>
 * 
 *  Cloud9 supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment, launches an Amazon EC2 instance, and then
 *  connects from the instance to the
 * 
 *  environment> </li> <li>
 * 
 *  <code>CreateEnvironmentMembership</code>: Adds an environment member to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2 instance is connected to the environment, also
 *  terminates the
 * 
 *  instance> </li> <li>
 * 
 *  <code>DeleteEnvironmentMembership</code>: Deletes an environment member from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironmentMemberships</code>: Gets information about environment members for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironments</code>: Gets information about
 * 
 *  environments> </li> <li>
 * 
 *  <code>DescribeEnvironmentStatus</code>: Gets status information for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>ListEnvironments</code>: Gets a list of environment
 * 
 *  identifiers> </li> <li>
 * 
 *  <code>ListTagsForResource</code>: Gets the tags for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>TagResource</code>: Adds tags to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UntagResource</code>: Removes tags from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironment</code>: Changes the settings of an existing
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironmentMembership</code>: Changes the settings of an existing environment member for an
 *
 * \sa Cloud9Client::updateEnvironmentMembership
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEnvironmentMembershipRequest::UpdateEnvironmentMembershipRequest(const UpdateEnvironmentMembershipRequest &other)
    : Cloud9Request(new UpdateEnvironmentMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEnvironmentMembershipRequest object.
 */
UpdateEnvironmentMembershipRequest::UpdateEnvironmentMembershipRequest()
    : Cloud9Request(new UpdateEnvironmentMembershipRequestPrivate(Cloud9Request::UpdateEnvironmentMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEnvironmentMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEnvironmentMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEnvironmentMembershipRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEnvironmentMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::Cloud9::UpdateEnvironmentMembershipRequestPrivate
 * \brief The UpdateEnvironmentMembershipRequestPrivate class provides private implementation for UpdateEnvironmentMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a UpdateEnvironmentMembershipRequestPrivate object for Cloud9 \a action,
 * with public implementation \a q.
 */
UpdateEnvironmentMembershipRequestPrivate::UpdateEnvironmentMembershipRequestPrivate(
    const Cloud9Request::Action action, UpdateEnvironmentMembershipRequest * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEnvironmentMembershipRequest
 * class' copy constructor.
 */
UpdateEnvironmentMembershipRequestPrivate::UpdateEnvironmentMembershipRequestPrivate(
    const UpdateEnvironmentMembershipRequestPrivate &other, UpdateEnvironmentMembershipRequest * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
