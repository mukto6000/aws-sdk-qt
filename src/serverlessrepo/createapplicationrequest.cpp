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

#include "createapplicationrequest.h"
#include "createapplicationrequest_p.h"
#include "createapplicationresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  CreateApplicationRequest
 *
 * @brief  Implements ServerlessApplicationRepository CreateApplication requests.
 *
 * @see    ServerlessApplicationRepositoryClient::createApplication
 */

/**
 * @brief  Constructs a new CreateApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateApplicationRequest::CreateApplicationRequest(const CreateApplicationRequest &other)
    : ServerlessApplicationRepositoryRequest(new CreateApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateApplicationRequest object.
 */
CreateApplicationRequest::CreateApplicationRequest()
    : ServerlessApplicationRepositoryRequest(new CreateApplicationRequestPrivate(ServerlessApplicationRepositoryRequest::CreateApplicationAction, this))
{

}

bool CreateApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateApplicationRequestPrivate
 *
 * @brief  Private implementation for CreateApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public CreateApplicationRequest instance.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, CreateApplicationRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateApplicationRequest instance.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const CreateApplicationRequestPrivate &other, CreateApplicationRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws