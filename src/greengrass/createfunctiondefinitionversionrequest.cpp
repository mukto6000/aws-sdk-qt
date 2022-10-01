// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfunctiondefinitionversionrequest.h"
#include "createfunctiondefinitionversionrequest_p.h"
#include "createfunctiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionVersionRequest
 * \brief The CreateFunctionDefinitionVersionRequest class provides an interface for Greengrass CreateFunctionDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createFunctionDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFunctionDefinitionVersionRequest::CreateFunctionDefinitionVersionRequest(const CreateFunctionDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateFunctionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFunctionDefinitionVersionRequest object.
 */
CreateFunctionDefinitionVersionRequest::CreateFunctionDefinitionVersionRequest()
    : GreengrassRequest(new CreateFunctionDefinitionVersionRequestPrivate(GreengrassRequest::CreateFunctionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFunctionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFunctionDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFunctionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionVersionRequestPrivate
 * \brief The CreateFunctionDefinitionVersionRequestPrivate class provides private implementation for CreateFunctionDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateFunctionDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateFunctionDefinitionVersionRequestPrivate::CreateFunctionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionDefinitionVersionRequest
 * class' copy constructor.
 */
CreateFunctionDefinitionVersionRequestPrivate::CreateFunctionDefinitionVersionRequestPrivate(
    const CreateFunctionDefinitionVersionRequestPrivate &other, CreateFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
