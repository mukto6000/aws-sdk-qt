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

#include "listenvironmentvpcsrequest.h"
#include "listenvironmentvpcsrequest_p.h"
#include "listenvironmentvpcsresponse.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListEnvironmentVpcsRequest
 * \brief The ListEnvironmentVpcsRequest class provides an interface for MigrationHubRefactorSpaces ListEnvironmentVpcs requests.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::listEnvironmentVpcs
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentVpcsRequest::ListEnvironmentVpcsRequest(const ListEnvironmentVpcsRequest &other)
    : MigrationHubRefactorSpacesRequest(new ListEnvironmentVpcsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentVpcsRequest object.
 */
ListEnvironmentVpcsRequest::ListEnvironmentVpcsRequest()
    : MigrationHubRefactorSpacesRequest(new ListEnvironmentVpcsRequestPrivate(MigrationHubRefactorSpacesRequest::ListEnvironmentVpcsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentVpcsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentVpcsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentVpcsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentVpcsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListEnvironmentVpcsRequestPrivate
 * \brief The ListEnvironmentVpcsRequestPrivate class provides private implementation for ListEnvironmentVpcsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a ListEnvironmentVpcsRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
ListEnvironmentVpcsRequestPrivate::ListEnvironmentVpcsRequestPrivate(
    const MigrationHubRefactorSpacesRequest::Action action, ListEnvironmentVpcsRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentVpcsRequest
 * class' copy constructor.
 */
ListEnvironmentVpcsRequestPrivate::ListEnvironmentVpcsRequestPrivate(
    const ListEnvironmentVpcsRequestPrivate &other, ListEnvironmentVpcsRequest * const q)
    : MigrationHubRefactorSpacesRequestPrivate(other, q)
{

}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
