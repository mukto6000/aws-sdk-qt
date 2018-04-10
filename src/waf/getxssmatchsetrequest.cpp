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

#include "getxssmatchsetrequest.h"
#include "getxssmatchsetrequest_p.h"
#include "getxssmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  GetXssMatchSetRequest
 *
 * @brief  Implements WAF GetXssMatchSet requests.
 *
 * @see    WAFClient::getXssMatchSet
 */

/**
 * @brief  Constructs a new GetXssMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetXssMatchSetRequest::GetXssMatchSetRequest(const GetXssMatchSetRequest &other)
    : WAFRequest(new GetXssMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetXssMatchSetRequest object.
 */
GetXssMatchSetRequest::GetXssMatchSetRequest()
    : WAFRequest(new GetXssMatchSetRequestPrivate(WAFRequest::GetXssMatchSetAction, this))
{

}

bool GetXssMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetXssMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetXssMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * GetXssMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetXssMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetXssMatchSetRequestPrivate
 *
 * @brief  Private implementation for GetXssMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetXssMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetXssMatchSetRequest instance.
 */
GetXssMatchSetRequestPrivate::GetXssMatchSetRequestPrivate(
    const WAFRequest::Action action, GetXssMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetXssMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetXssMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetXssMatchSetRequest instance.
 */
GetXssMatchSetRequestPrivate::GetXssMatchSetRequestPrivate(
    const GetXssMatchSetRequestPrivate &other, GetXssMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws