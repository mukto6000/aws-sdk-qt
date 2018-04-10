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

#include "getmergeconflictsrequest.h"
#include "getmergeconflictsrequest_p.h"
#include "getmergeconflictsresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetMergeConflictsRequest
 *
 * @brief  Implements CodeCommit GetMergeConflicts requests.
 *
 * @see    CodeCommitClient::getMergeConflicts
 */

/**
 * @brief  Constructs a new GetMergeConflictsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMergeConflictsRequest::GetMergeConflictsRequest(const GetMergeConflictsRequest &other)
    : CodeCommitRequest(new GetMergeConflictsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMergeConflictsRequest object.
 */
GetMergeConflictsRequest::GetMergeConflictsRequest()
    : CodeCommitRequest(new GetMergeConflictsRequestPrivate(CodeCommitRequest::GetMergeConflictsAction, this))
{

}

bool GetMergeConflictsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMergeConflictsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMergeConflictsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMergeConflictsRequest::response(QNetworkReply * const reply) const
{
    return new GetMergeConflictsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMergeConflictsRequestPrivate
 *
 * @brief  Private implementation for GetMergeConflictsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMergeConflictsRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetMergeConflictsRequest instance.
 */
GetMergeConflictsRequestPrivate::GetMergeConflictsRequestPrivate(
    const CodeCommitRequest::Action action, GetMergeConflictsRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMergeConflictsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMergeConflictsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMergeConflictsRequest instance.
 */
GetMergeConflictsRequestPrivate::GetMergeConflictsRequestPrivate(
    const GetMergeConflictsRequestPrivate &other, GetMergeConflictsRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws