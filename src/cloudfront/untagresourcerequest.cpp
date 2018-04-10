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

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  UntagResourceRequest
 *
 * @brief  Implements CloudFront UntagResource requests.
 *
 * @see    CloudFrontClient::untagResource
 */

/**
 * @brief  Constructs a new UntagResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : CloudFrontRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : CloudFrontRequest(new UntagResourceRequestPrivate(CloudFrontRequest::UntagResourceAction, this))
{

}

bool UntagResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagResourceRequestPrivate
 *
 * @brief  Private implementation for UntagResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const CloudFrontRequest::Action action, UntagResourceRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws