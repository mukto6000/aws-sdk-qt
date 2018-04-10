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

#include "updateapplicationrequest.h"
#include "updateapplicationrequest_p.h"
#include "updateapplicationresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  UpdateApplicationRequest
 *
 * @brief  Implements ElasticBeanstalk UpdateApplication requests.
 *
 * @see    ElasticBeanstalkClient::updateApplication
 */

/**
 * @brief  Constructs a new UpdateApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApplicationRequest::UpdateApplicationRequest(const UpdateApplicationRequest &other)
    : ElasticBeanstalkRequest(new UpdateApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApplicationRequest object.
 */
UpdateApplicationRequest::UpdateApplicationRequest()
    : ElasticBeanstalkRequest(new UpdateApplicationRequestPrivate(ElasticBeanstalkRequest::UpdateApplicationAction, this))
{

}

bool UpdateApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApplicationRequestPrivate
 *
 * @brief  Private implementation for UpdateApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public UpdateApplicationRequest instance.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const ElasticBeanstalkRequest::Action action, UpdateApplicationRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApplicationRequest instance.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const UpdateApplicationRequestPrivate &other, UpdateApplicationRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws