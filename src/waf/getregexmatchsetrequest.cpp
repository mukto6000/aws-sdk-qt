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

#include "getregexmatchsetrequest.h"
#include "getregexmatchsetrequest_p.h"
#include "getregexmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  GetRegexMatchSetRequest
 *
 * @brief  Implements WAF GetRegexMatchSet requests.
 *
 * @see    WAFClient::getRegexMatchSet
 */

/**
 * @brief  Constructs a new GetRegexMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRegexMatchSetRequest::GetRegexMatchSetRequest(const GetRegexMatchSetRequest &other)
    : WAFRequest(new GetRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRegexMatchSetRequest object.
 */
GetRegexMatchSetRequest::GetRegexMatchSetRequest()
    : WAFRequest(new GetRegexMatchSetRequestPrivate(WAFRequest::GetRegexMatchSetAction, this))
{

}

bool GetRegexMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRegexMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRegexMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegexMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetRegexMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRegexMatchSetRequestPrivate
 *
 * @brief  Private implementation for GetRegexMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetRegexMatchSetRequest instance.
 */
GetRegexMatchSetRequestPrivate::GetRegexMatchSetRequestPrivate(
    const WAFRequest::Action action, GetRegexMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRegexMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRegexMatchSetRequest instance.
 */
GetRegexMatchSetRequestPrivate::GetRegexMatchSetRequestPrivate(
    const GetRegexMatchSetRequestPrivate &other, GetRegexMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws