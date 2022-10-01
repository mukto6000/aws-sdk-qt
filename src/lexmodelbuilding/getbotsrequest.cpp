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

#include "getbotsrequest.h"
#include "getbotsrequest_p.h"
#include "getbotsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotsRequest
 * \brief The GetBotsRequest class provides an interface for LexModelBuilding GetBots requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBots
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotsRequest::GetBotsRequest(const GetBotsRequest &other)
    : LexModelBuildingRequest(new GetBotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotsRequest object.
 */
GetBotsRequest::GetBotsRequest()
    : LexModelBuildingRequest(new GetBotsRequestPrivate(LexModelBuildingRequest::GetBotsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotsRequestPrivate
 * \brief The GetBotsRequestPrivate class provides private implementation for GetBotsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotsRequest
 * class' copy constructor.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const GetBotsRequestPrivate &other, GetBotsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
