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

#include "deletebotchannelassociationrequest.h"
#include "deletebotchannelassociationrequest_p.h"
#include "deletebotchannelassociationresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotChannelAssociationRequest
 * \brief The DeleteBotChannelAssociationRequest class provides an interface for LexModelBuilding DeleteBotChannelAssociation requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotChannelAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBotChannelAssociationRequest::DeleteBotChannelAssociationRequest(const DeleteBotChannelAssociationRequest &other)
    : LexModelBuildingRequest(new DeleteBotChannelAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBotChannelAssociationRequest object.
 */
DeleteBotChannelAssociationRequest::DeleteBotChannelAssociationRequest()
    : LexModelBuildingRequest(new DeleteBotChannelAssociationRequestPrivate(LexModelBuildingRequest::DeleteBotChannelAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBotChannelAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBotChannelAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBotChannelAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotChannelAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotChannelAssociationRequestPrivate
 * \brief The DeleteBotChannelAssociationRequestPrivate class provides private implementation for DeleteBotChannelAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotChannelAssociationRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteBotChannelAssociationRequestPrivate::DeleteBotChannelAssociationRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteBotChannelAssociationRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotChannelAssociationRequest
 * class' copy constructor.
 */
DeleteBotChannelAssociationRequestPrivate::DeleteBotChannelAssociationRequestPrivate(
    const DeleteBotChannelAssociationRequestPrivate &other, DeleteBotChannelAssociationRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
