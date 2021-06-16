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

#include "getapprequest.h"
#include "getapprequest_p.h"
#include "getappresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetAppRequest
 * \brief The GetAppRequest class provides an interface for Amplify GetApp requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getApp
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppRequest::GetAppRequest(const GetAppRequest &other)
    : AmplifyRequest(new GetAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppRequest object.
 */
GetAppRequest::GetAppRequest()
    : AmplifyRequest(new GetAppRequestPrivate(AmplifyRequest::GetAppAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppRequest::response(QNetworkReply * const reply) const
{
    return new GetAppResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetAppRequestPrivate
 * \brief The GetAppRequestPrivate class provides private implementation for GetAppRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetAppRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const AmplifyRequest::Action action, GetAppRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppRequest
 * class' copy constructor.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const GetAppRequestPrivate &other, GetAppRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
