/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createresourcedefinitionversionrequest.h"
#include "createresourcedefinitionversionrequest_p.h"
#include "createresourcedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionRequest
 * \brief The CreateResourceDefinitionVersionRequest class provides an interface for Greengrass CreateResourceDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createResourceDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceDefinitionVersionRequest::CreateResourceDefinitionVersionRequest(const CreateResourceDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateResourceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceDefinitionVersionRequest object.
 */
CreateResourceDefinitionVersionRequest::CreateResourceDefinitionVersionRequest()
    : GreengrassRequest(new CreateResourceDefinitionVersionRequestPrivate(GreengrassRequest::CreateResourceDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionRequestPrivate
 * \brief The CreateResourceDefinitionVersionRequestPrivate class provides private implementation for CreateResourceDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateResourceDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateResourceDefinitionVersionRequestPrivate::CreateResourceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateResourceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceDefinitionVersionRequest
 * class' copy constructor.
 */
CreateResourceDefinitionVersionRequestPrivate::CreateResourceDefinitionVersionRequestPrivate(
    const CreateResourceDefinitionVersionRequestPrivate &other, CreateResourceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
