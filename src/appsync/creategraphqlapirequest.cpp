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

#include "creategraphqlapirequest.h"
#include "creategraphqlapirequest_p.h"
#include "creategraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateGraphqlApiRequest
 * \brief The CreateGraphqlApiRequest class provides an interface for AppSync CreateGraphqlApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createGraphqlApi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGraphqlApiRequest::CreateGraphqlApiRequest(const CreateGraphqlApiRequest &other)
    : AppSyncRequest(new CreateGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGraphqlApiRequest object.
 */
CreateGraphqlApiRequest::CreateGraphqlApiRequest()
    : AppSyncRequest(new CreateGraphqlApiRequestPrivate(AppSyncRequest::CreateGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGraphqlApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateGraphqlApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateGraphqlApiRequestPrivate
 * \brief The CreateGraphqlApiRequestPrivate class provides private implementation for CreateGraphqlApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateGraphqlApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateGraphqlApiRequestPrivate::CreateGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, CreateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGraphqlApiRequest
 * class' copy constructor.
 */
CreateGraphqlApiRequestPrivate::CreateGraphqlApiRequestPrivate(
    const CreateGraphqlApiRequestPrivate &other, CreateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
