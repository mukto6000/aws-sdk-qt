// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgraphqlapirequest.h"
#include "getgraphqlapirequest_p.h"
#include "getgraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetGraphqlApiRequest
 * \brief The GetGraphqlApiRequest class provides an interface for AppSync GetGraphqlApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getGraphqlApi
 */

/*!
 * Constructs a copy of \a other.
 */
GetGraphqlApiRequest::GetGraphqlApiRequest(const GetGraphqlApiRequest &other)
    : AppSyncRequest(new GetGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGraphqlApiRequest object.
 */
GetGraphqlApiRequest::GetGraphqlApiRequest()
    : AppSyncRequest(new GetGraphqlApiRequestPrivate(AppSyncRequest::GetGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool GetGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGraphqlApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new GetGraphqlApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetGraphqlApiRequestPrivate
 * \brief The GetGraphqlApiRequestPrivate class provides private implementation for GetGraphqlApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetGraphqlApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetGraphqlApiRequestPrivate::GetGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, GetGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGraphqlApiRequest
 * class' copy constructor.
 */
GetGraphqlApiRequestPrivate::GetGraphqlApiRequestPrivate(
    const GetGraphqlApiRequestPrivate &other, GetGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
