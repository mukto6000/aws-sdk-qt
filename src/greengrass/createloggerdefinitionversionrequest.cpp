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

#include "createloggerdefinitionversionrequest.h"
#include "createloggerdefinitionversionrequest_p.h"
#include "createloggerdefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionRequest
 *
 * \brief The CreateLoggerDefinitionVersionRequest class encapsulates Greengrass CreateLoggerDefinitionVersion requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createLoggerDefinitionVersion
 */

/*!
 * @brief  Constructs a new CreateLoggerDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoggerDefinitionVersionRequest::CreateLoggerDefinitionVersionRequest(const CreateLoggerDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateLoggerDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateLoggerDefinitionVersionRequest object.
 */
CreateLoggerDefinitionVersionRequest::CreateLoggerDefinitionVersionRequest()
    : GreengrassRequest(new CreateLoggerDefinitionVersionRequestPrivate(GreengrassRequest::CreateLoggerDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoggerDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateLoggerDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoggerDefinitionVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoggerDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoggerDefinitionVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateLoggerDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for CreateLoggerDefinitionVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateLoggerDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateLoggerDefinitionVersionRequest instance.
 */
CreateLoggerDefinitionVersionRequestPrivate::CreateLoggerDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateLoggerDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoggerDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoggerDefinitionVersionRequest instance.
 */
CreateLoggerDefinitionVersionRequestPrivate::CreateLoggerDefinitionVersionRequestPrivate(
    const CreateLoggerDefinitionVersionRequestPrivate &other, CreateLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
