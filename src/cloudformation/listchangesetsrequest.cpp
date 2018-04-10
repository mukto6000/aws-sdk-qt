/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listchangesetsrequest.h"
#include "listchangesetsrequest_p.h"
#include "listchangesetsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListChangeSetsRequest
 *
 * @brief  Implements CloudFormation ListChangeSets requests.
 *
 * @see    CloudFormationClient::listChangeSets
 */

/**
 * @brief  Constructs a new ListChangeSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListChangeSetsRequest::ListChangeSetsRequest(const ListChangeSetsRequest &other)
    : CloudFormationRequest(new ListChangeSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListChangeSetsRequest object.
 */
ListChangeSetsRequest::ListChangeSetsRequest()
    : CloudFormationRequest(new ListChangeSetsRequestPrivate(CloudFormationRequest::ListChangeSetsAction, this))
{

}

bool ListChangeSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListChangeSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListChangeSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChangeSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListChangeSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListChangeSetsRequestPrivate
 *
 * @brief  Private implementation for ListChangeSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListChangeSetsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListChangeSetsRequest instance.
 */
ListChangeSetsRequestPrivate::ListChangeSetsRequestPrivate(
    const CloudFormationRequest::Action action, ListChangeSetsRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListChangeSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListChangeSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListChangeSetsRequest instance.
 */
ListChangeSetsRequestPrivate::ListChangeSetsRequestPrivate(
    const ListChangeSetsRequestPrivate &other, ListChangeSetsRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws