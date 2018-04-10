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

#include "createhealthcheckrequest.h"
#include "createhealthcheckrequest_p.h"
#include "createhealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateHealthCheckRequest
 *
 * @brief  Implements Route53 CreateHealthCheck requests.
 *
 * @see    Route53Client::createHealthCheck
 */

/**
 * @brief  Constructs a new CreateHealthCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHealthCheckRequest::CreateHealthCheckRequest(const CreateHealthCheckRequest &other)
    : Route53Request(new CreateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHealthCheckRequest object.
 */
CreateHealthCheckRequest::CreateHealthCheckRequest()
    : Route53Request(new CreateHealthCheckRequestPrivate(Route53Request::CreateHealthCheckAction, this))
{

}

bool CreateHealthCheckRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHealthCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHealthCheckResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new CreateHealthCheckResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHealthCheckRequestPrivate
 *
 * @brief  Private implementation for CreateHealthCheckRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHealthCheckRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateHealthCheckRequest instance.
 */
CreateHealthCheckRequestPrivate::CreateHealthCheckRequestPrivate(
    const Route53Request::Action action, CreateHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHealthCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHealthCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHealthCheckRequest instance.
 */
CreateHealthCheckRequestPrivate::CreateHealthCheckRequestPrivate(
    const CreateHealthCheckRequestPrivate &other, CreateHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws