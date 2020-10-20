/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteslottypeversionrequest.h"
#include "deleteslottypeversionrequest_p.h"
#include "deleteslottypeversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteSlotTypeVersionRequest
 * \brief The DeleteSlotTypeVersionRequest class provides an interface for LexModelBuildingService DeleteSlotTypeVersion requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteSlotTypeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSlotTypeVersionRequest::DeleteSlotTypeVersionRequest(const DeleteSlotTypeVersionRequest &other)
    : LexModelBuildingServiceRequest(new DeleteSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSlotTypeVersionRequest object.
 */
DeleteSlotTypeVersionRequest::DeleteSlotTypeVersionRequest()
    : LexModelBuildingServiceRequest(new DeleteSlotTypeVersionRequestPrivate(LexModelBuildingServiceRequest::DeleteSlotTypeVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSlotTypeVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSlotTypeVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSlotTypeVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotTypeVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteSlotTypeVersionRequestPrivate
 * \brief The DeleteSlotTypeVersionRequestPrivate class provides private implementation for DeleteSlotTypeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteSlotTypeVersionRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
DeleteSlotTypeVersionRequestPrivate::DeleteSlotTypeVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteSlotTypeVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotTypeVersionRequest
 * class' copy constructor.
 */
DeleteSlotTypeVersionRequestPrivate::DeleteSlotTypeVersionRequestPrivate(
    const DeleteSlotTypeVersionRequestPrivate &other, DeleteSlotTypeVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
