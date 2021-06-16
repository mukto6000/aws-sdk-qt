/*
    Copyright 2013-2021 Paul Colby

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

#include "updatefunctiondefinitionrequest.h"
#include "updatefunctiondefinitionrequest_p.h"
#include "updatefunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateFunctionDefinitionRequest
 * \brief The UpdateFunctionDefinitionRequest class provides an interface for Greengrass UpdateFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFunctionDefinitionRequest::UpdateFunctionDefinitionRequest(const UpdateFunctionDefinitionRequest &other)
    : GreengrassRequest(new UpdateFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFunctionDefinitionRequest object.
 */
UpdateFunctionDefinitionRequest::UpdateFunctionDefinitionRequest()
    : GreengrassRequest(new UpdateFunctionDefinitionRequestPrivate(GreengrassRequest::UpdateFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateFunctionDefinitionRequestPrivate
 * \brief The UpdateFunctionDefinitionRequestPrivate class provides private implementation for UpdateFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateFunctionDefinitionRequestPrivate::UpdateFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionDefinitionRequest
 * class' copy constructor.
 */
UpdateFunctionDefinitionRequestPrivate::UpdateFunctionDefinitionRequestPrivate(
    const UpdateFunctionDefinitionRequestPrivate &other, UpdateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
