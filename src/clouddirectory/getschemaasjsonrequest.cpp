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

#include "getschemaasjsonrequest.h"
#include "getschemaasjsonrequest_p.h"
#include "getschemaasjsonresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetSchemaAsJsonRequest
 *
 * @brief  Implements CloudDirectory GetSchemaAsJson requests.
 *
 * @see    CloudDirectoryClient::getSchemaAsJson
 */

/**
 * @brief  Constructs a new GetSchemaAsJsonRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSchemaAsJsonRequest::GetSchemaAsJsonRequest(const GetSchemaAsJsonRequest &other)
    : CloudDirectoryRequest(new GetSchemaAsJsonRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSchemaAsJsonRequest object.
 */
GetSchemaAsJsonRequest::GetSchemaAsJsonRequest()
    : CloudDirectoryRequest(new GetSchemaAsJsonRequestPrivate(CloudDirectoryRequest::GetSchemaAsJsonAction, this))
{

}

bool GetSchemaAsJsonRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSchemaAsJsonResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSchemaAsJsonResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaAsJsonRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaAsJsonResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSchemaAsJsonRequestPrivate
 *
 * @brief  Private implementation for GetSchemaAsJsonRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSchemaAsJsonRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public GetSchemaAsJsonRequest instance.
 */
GetSchemaAsJsonRequestPrivate::GetSchemaAsJsonRequestPrivate(
    const CloudDirectoryRequest::Action action, GetSchemaAsJsonRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSchemaAsJsonRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaAsJsonRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSchemaAsJsonRequest instance.
 */
GetSchemaAsJsonRequestPrivate::GetSchemaAsJsonRequestPrivate(
    const GetSchemaAsJsonRequestPrivate &other, GetSchemaAsJsonRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws