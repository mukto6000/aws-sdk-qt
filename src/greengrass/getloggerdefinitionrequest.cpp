// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloggerdefinitionrequest.h"
#include "getloggerdefinitionrequest_p.h"
#include "getloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionRequest
 * \brief The GetLoggerDefinitionRequest class provides an interface for Greengrass GetLoggerDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getLoggerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetLoggerDefinitionRequest::GetLoggerDefinitionRequest(const GetLoggerDefinitionRequest &other)
    : GreengrassRequest(new GetLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLoggerDefinitionRequest object.
 */
GetLoggerDefinitionRequest::GetLoggerDefinitionRequest()
    : GreengrassRequest(new GetLoggerDefinitionRequestPrivate(GreengrassRequest::GetLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLoggerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetLoggerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionRequestPrivate
 * \brief The GetLoggerDefinitionRequestPrivate class provides private implementation for GetLoggerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetLoggerDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetLoggerDefinitionRequestPrivate::GetLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLoggerDefinitionRequest
 * class' copy constructor.
 */
GetLoggerDefinitionRequestPrivate::GetLoggerDefinitionRequestPrivate(
    const GetLoggerDefinitionRequestPrivate &other, GetLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
