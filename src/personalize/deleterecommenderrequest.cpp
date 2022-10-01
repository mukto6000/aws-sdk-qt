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

#include "deleterecommenderrequest.h"
#include "deleterecommenderrequest_p.h"
#include "deleterecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteRecommenderRequest
 * \brief The DeleteRecommenderRequest class provides an interface for Personalize DeleteRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecommenderRequest::DeleteRecommenderRequest(const DeleteRecommenderRequest &other)
    : PersonalizeRequest(new DeleteRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecommenderRequest object.
 */
DeleteRecommenderRequest::DeleteRecommenderRequest()
    : PersonalizeRequest(new DeleteRecommenderRequestPrivate(PersonalizeRequest::DeleteRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteRecommenderRequestPrivate
 * \brief The DeleteRecommenderRequestPrivate class provides private implementation for DeleteRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteRecommenderRequestPrivate::DeleteRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, DeleteRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecommenderRequest
 * class' copy constructor.
 */
DeleteRecommenderRequestPrivate::DeleteRecommenderRequestPrivate(
    const DeleteRecommenderRequestPrivate &other, DeleteRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
