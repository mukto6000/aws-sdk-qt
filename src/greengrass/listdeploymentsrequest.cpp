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

#include "listdeploymentsrequest.h"
#include "listdeploymentsrequest_p.h"
#include "listdeploymentsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeploymentsRequest
 * \brief The ListDeploymentsRequest class provides an interface for Greengrass ListDeployments requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeploymentsRequest::ListDeploymentsRequest(const ListDeploymentsRequest &other)
    : GreengrassRequest(new ListDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeploymentsRequest object.
 */
ListDeploymentsRequest::ListDeploymentsRequest()
    : GreengrassRequest(new ListDeploymentsRequestPrivate(GreengrassRequest::ListDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListDeploymentsRequestPrivate
 * \brief The ListDeploymentsRequestPrivate class provides private implementation for ListDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeploymentsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const GreengrassRequest::Action action, ListDeploymentsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentsRequest
 * class' copy constructor.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const ListDeploymentsRequestPrivate &other, ListDeploymentsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
