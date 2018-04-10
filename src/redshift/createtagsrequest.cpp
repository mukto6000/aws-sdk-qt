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

#include "createtagsrequest.h"
#include "createtagsrequest_p.h"
#include "createtagsresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  CreateTagsRequest
 *
 * @brief  Implements Redshift CreateTags requests.
 *
 * @see    RedshiftClient::createTags
 */

/**
 * @brief  Constructs a new CreateTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTagsRequest::CreateTagsRequest(const CreateTagsRequest &other)
    : RedshiftRequest(new CreateTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTagsRequest object.
 */
CreateTagsRequest::CreateTagsRequest()
    : RedshiftRequest(new CreateTagsRequestPrivate(RedshiftRequest::CreateTagsAction, this))
{

}

bool CreateTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTagsRequestPrivate
 *
 * @brief  Private implementation for CreateTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTagsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateTagsRequest instance.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const RedshiftRequest::Action action, CreateTagsRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTagsRequest instance.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const CreateTagsRequestPrivate &other, CreateTagsRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws