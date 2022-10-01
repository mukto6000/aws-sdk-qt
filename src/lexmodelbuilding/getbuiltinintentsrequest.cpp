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

#include "getbuiltinintentsrequest.h"
#include "getbuiltinintentsrequest_p.h"
#include "getbuiltinintentsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentsRequest
 * \brief The GetBuiltinIntentsRequest class provides an interface for LexModelBuilding GetBuiltinIntents requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinIntents
 */

/*!
 * Constructs a copy of \a other.
 */
GetBuiltinIntentsRequest::GetBuiltinIntentsRequest(const GetBuiltinIntentsRequest &other)
    : LexModelBuildingRequest(new GetBuiltinIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBuiltinIntentsRequest object.
 */
GetBuiltinIntentsRequest::GetBuiltinIntentsRequest()
    : LexModelBuildingRequest(new GetBuiltinIntentsRequestPrivate(LexModelBuildingRequest::GetBuiltinIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBuiltinIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBuiltinIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBuiltinIntentsRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentsRequestPrivate
 * \brief The GetBuiltinIntentsRequestPrivate class provides private implementation for GetBuiltinIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinIntentsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBuiltinIntentsRequestPrivate::GetBuiltinIntentsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBuiltinIntentsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinIntentsRequest
 * class' copy constructor.
 */
GetBuiltinIntentsRequestPrivate::GetBuiltinIntentsRequestPrivate(
    const GetBuiltinIntentsRequestPrivate &other, GetBuiltinIntentsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
