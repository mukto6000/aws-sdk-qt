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

#include "listassociationsrequest.h"
#include "listassociationsrequest_p.h"
#include "listassociationsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAssociationsRequest
 * \brief The ListAssociationsRequest class provides an interface for SageMaker ListAssociations requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociationsRequest::ListAssociationsRequest(const ListAssociationsRequest &other)
    : SageMakerRequest(new ListAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociationsRequest object.
 */
ListAssociationsRequest::ListAssociationsRequest()
    : SageMakerRequest(new ListAssociationsRequestPrivate(SageMakerRequest::ListAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAssociationsRequestPrivate
 * \brief The ListAssociationsRequestPrivate class provides private implementation for ListAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAssociationsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAssociationsRequestPrivate::ListAssociationsRequestPrivate(
    const SageMakerRequest::Action action, ListAssociationsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociationsRequest
 * class' copy constructor.
 */
ListAssociationsRequestPrivate::ListAssociationsRequestPrivate(
    const ListAssociationsRequestPrivate &other, ListAssociationsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
