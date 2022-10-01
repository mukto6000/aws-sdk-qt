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

#include "getextensionrequest.h"
#include "getextensionrequest_p.h"
#include "getextensionresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionRequest
 * \brief The GetExtensionRequest class provides an interface for GameSparks GetExtension requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtension
 */

/*!
 * Constructs a copy of \a other.
 */
GetExtensionRequest::GetExtensionRequest(const GetExtensionRequest &other)
    : GameSparksRequest(new GetExtensionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExtensionRequest object.
 */
GetExtensionRequest::GetExtensionRequest()
    : GameSparksRequest(new GetExtensionRequestPrivate(GameSparksRequest::GetExtensionAction, this))
{

}

/*!
 * \reimp
 */
bool GetExtensionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExtensionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExtensionRequest::response(QNetworkReply * const reply) const
{
    return new GetExtensionResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetExtensionRequestPrivate
 * \brief The GetExtensionRequestPrivate class provides private implementation for GetExtensionRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetExtensionRequestPrivate::GetExtensionRequestPrivate(
    const GameSparksRequest::Action action, GetExtensionRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExtensionRequest
 * class' copy constructor.
 */
GetExtensionRequestPrivate::GetExtensionRequestPrivate(
    const GetExtensionRequestPrivate &other, GetExtensionRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
