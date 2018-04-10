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

#include "updatexssmatchsetrequest.h"
#include "updatexssmatchsetrequest_p.h"
#include "updatexssmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  UpdateXssMatchSetRequest
 *
 * @brief  Implements WAFRegional UpdateXssMatchSet requests.
 *
 * @see    WAFRegionalClient::updateXssMatchSet
 */

/**
 * @brief  Constructs a new UpdateXssMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateXssMatchSetRequest::UpdateXssMatchSetRequest(const UpdateXssMatchSetRequest &other)
    : WAFRegionalRequest(new UpdateXssMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateXssMatchSetRequest object.
 */
UpdateXssMatchSetRequest::UpdateXssMatchSetRequest()
    : WAFRegionalRequest(new UpdateXssMatchSetRequestPrivate(WAFRegionalRequest::UpdateXssMatchSetAction, this))
{

}

bool UpdateXssMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateXssMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateXssMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateXssMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateXssMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateXssMatchSetRequestPrivate
 *
 * @brief  Private implementation for UpdateXssMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateXssMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateXssMatchSetRequest instance.
 */
UpdateXssMatchSetRequestPrivate::UpdateXssMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateXssMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateXssMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateXssMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateXssMatchSetRequest instance.
 */
UpdateXssMatchSetRequestPrivate::UpdateXssMatchSetRequestPrivate(
    const UpdateXssMatchSetRequestPrivate &other, UpdateXssMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws