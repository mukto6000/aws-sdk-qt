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

#include "detachtypedlinkrequest.h"
#include "detachtypedlinkrequest_p.h"
#include "detachtypedlinkresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DetachTypedLinkRequest
 *
 * @brief  Implements CloudDirectory DetachTypedLink requests.
 *
 * @see    CloudDirectoryClient::detachTypedLink
 */

/**
 * @brief  Constructs a new DetachTypedLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachTypedLinkRequest::DetachTypedLinkRequest(const DetachTypedLinkRequest &other)
    : CloudDirectoryRequest(new DetachTypedLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachTypedLinkRequest object.
 */
DetachTypedLinkRequest::DetachTypedLinkRequest()
    : CloudDirectoryRequest(new DetachTypedLinkRequestPrivate(CloudDirectoryRequest::DetachTypedLinkAction, this))
{

}

bool DetachTypedLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachTypedLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachTypedLinkResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachTypedLinkRequest::response(QNetworkReply * const reply) const
{
    return new DetachTypedLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachTypedLinkRequestPrivate
 *
 * @brief  Private implementation for DetachTypedLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachTypedLinkRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DetachTypedLinkRequest instance.
 */
DetachTypedLinkRequestPrivate::DetachTypedLinkRequestPrivate(
    const CloudDirectoryRequest::Action action, DetachTypedLinkRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachTypedLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachTypedLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachTypedLinkRequest instance.
 */
DetachTypedLinkRequestPrivate::DetachTypedLinkRequestPrivate(
    const DetachTypedLinkRequestPrivate &other, DetachTypedLinkRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws