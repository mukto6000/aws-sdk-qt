// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateloggerdefinitionrequest.h"
#include "updateloggerdefinitionrequest_p.h"
#include "updateloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateLoggerDefinitionRequest
 * \brief The UpdateLoggerDefinitionRequest class provides an interface for Greengrass UpdateLoggerDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateLoggerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLoggerDefinitionRequest::UpdateLoggerDefinitionRequest(const UpdateLoggerDefinitionRequest &other)
    : GreengrassRequest(new UpdateLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLoggerDefinitionRequest object.
 */
UpdateLoggerDefinitionRequest::UpdateLoggerDefinitionRequest()
    : GreengrassRequest(new UpdateLoggerDefinitionRequestPrivate(GreengrassRequest::UpdateLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLoggerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLoggerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateLoggerDefinitionRequestPrivate
 * \brief The UpdateLoggerDefinitionRequestPrivate class provides private implementation for UpdateLoggerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateLoggerDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateLoggerDefinitionRequestPrivate::UpdateLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLoggerDefinitionRequest
 * class' copy constructor.
 */
UpdateLoggerDefinitionRequestPrivate::UpdateLoggerDefinitionRequestPrivate(
    const UpdateLoggerDefinitionRequestPrivate &other, UpdateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
