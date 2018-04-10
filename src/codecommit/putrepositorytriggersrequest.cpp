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

#include "putrepositorytriggersrequest.h"
#include "putrepositorytriggersrequest_p.h"
#include "putrepositorytriggersresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  PutRepositoryTriggersRequest
 *
 * @brief  Implements CodeCommit PutRepositoryTriggers requests.
 *
 * @see    CodeCommitClient::putRepositoryTriggers
 */

/**
 * @brief  Constructs a new PutRepositoryTriggersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRepositoryTriggersRequest::PutRepositoryTriggersRequest(const PutRepositoryTriggersRequest &other)
    : CodeCommitRequest(new PutRepositoryTriggersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRepositoryTriggersRequest object.
 */
PutRepositoryTriggersRequest::PutRepositoryTriggersRequest()
    : CodeCommitRequest(new PutRepositoryTriggersRequestPrivate(CodeCommitRequest::PutRepositoryTriggersAction, this))
{

}

bool PutRepositoryTriggersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRepositoryTriggersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRepositoryTriggersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRepositoryTriggersRequest::response(QNetworkReply * const reply) const
{
    return new PutRepositoryTriggersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRepositoryTriggersRequestPrivate
 *
 * @brief  Private implementation for PutRepositoryTriggersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRepositoryTriggersRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public PutRepositoryTriggersRequest instance.
 */
PutRepositoryTriggersRequestPrivate::PutRepositoryTriggersRequestPrivate(
    const CodeCommitRequest::Action action, PutRepositoryTriggersRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRepositoryTriggersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRepositoryTriggersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRepositoryTriggersRequest instance.
 */
PutRepositoryTriggersRequestPrivate::PutRepositoryTriggersRequestPrivate(
    const PutRepositoryTriggersRequestPrivate &other, PutRepositoryTriggersRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws