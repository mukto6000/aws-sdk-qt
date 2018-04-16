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

#include "listmembersrequest.h"
#include "listmembersrequest_p.h"
#include "listmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListMembersRequest
 *
 * \brief The ListMembersRequest class encapsulates GuardDuty ListMembers requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::listMembers
 */

/*!
 * @brief  Constructs a new ListMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListMembersRequest::ListMembersRequest(const ListMembersRequest &other)
    : GuardDutyRequest(new ListMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListMembersRequest object.
 */
ListMembersRequest::ListMembersRequest()
    : GuardDutyRequest(new ListMembersRequestPrivate(GuardDutyRequest::ListMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListMembersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListMembersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListMembersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListMembersRequestPrivate
 *
 * @brief  Private implementation for ListMembersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public ListMembersRequest instance.
 */
ListMembersRequestPrivate::ListMembersRequestPrivate(
    const GuardDutyRequest::Action action, ListMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListMembersRequest instance.
 */
ListMembersRequestPrivate::ListMembersRequestPrivate(
    const ListMembersRequestPrivate &other, ListMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
