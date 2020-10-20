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

#include "startbulkdeploymentrequest.h"
#include "startbulkdeploymentrequest_p.h"
#include "startbulkdeploymentresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::StartBulkDeploymentRequest
 * \brief The StartBulkDeploymentRequest class provides an interface for Greengrass StartBulkDeployment requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::startBulkDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StartBulkDeploymentRequest::StartBulkDeploymentRequest(const StartBulkDeploymentRequest &other)
    : GreengrassRequest(new StartBulkDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBulkDeploymentRequest object.
 */
StartBulkDeploymentRequest::StartBulkDeploymentRequest()
    : GreengrassRequest(new StartBulkDeploymentRequestPrivate(GreengrassRequest::StartBulkDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StartBulkDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBulkDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBulkDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StartBulkDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::StartBulkDeploymentRequestPrivate
 * \brief The StartBulkDeploymentRequestPrivate class provides private implementation for StartBulkDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a StartBulkDeploymentRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
StartBulkDeploymentRequestPrivate::StartBulkDeploymentRequestPrivate(
    const GreengrassRequest::Action action, StartBulkDeploymentRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBulkDeploymentRequest
 * class' copy constructor.
 */
StartBulkDeploymentRequestPrivate::StartBulkDeploymentRequestPrivate(
    const StartBulkDeploymentRequestPrivate &other, StartBulkDeploymentRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
