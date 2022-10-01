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

#include "listappinstancesrequest.h"
#include "listappinstancesrequest_p.h"
#include "listappinstancesresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstancesRequest
 * \brief The ListAppInstancesRequest class provides an interface for ChimeSdkIdentity ListAppInstances requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppInstancesRequest::ListAppInstancesRequest(const ListAppInstancesRequest &other)
    : ChimeSdkIdentityRequest(new ListAppInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppInstancesRequest object.
 */
ListAppInstancesRequest::ListAppInstancesRequest()
    : ChimeSdkIdentityRequest(new ListAppInstancesRequestPrivate(ChimeSdkIdentityRequest::ListAppInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListAppInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstancesRequestPrivate
 * \brief The ListAppInstancesRequestPrivate class provides private implementation for ListAppInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstancesRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
ListAppInstancesRequestPrivate::ListAppInstancesRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, ListAppInstancesRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppInstancesRequest
 * class' copy constructor.
 */
ListAppInstancesRequestPrivate::ListAppInstancesRequestPrivate(
    const ListAppInstancesRequestPrivate &other, ListAppInstancesRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
