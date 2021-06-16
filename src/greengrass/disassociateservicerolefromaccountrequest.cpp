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

#include "disassociateservicerolefromaccountrequest.h"
#include "disassociateservicerolefromaccountrequest_p.h"
#include "disassociateservicerolefromaccountresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountRequest
 * \brief The DisassociateServiceRoleFromAccountRequest class provides an interface for Greengrass DisassociateServiceRoleFromAccount requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::disassociateServiceRoleFromAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateServiceRoleFromAccountRequest::DisassociateServiceRoleFromAccountRequest(const DisassociateServiceRoleFromAccountRequest &other)
    : GreengrassRequest(new DisassociateServiceRoleFromAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateServiceRoleFromAccountRequest object.
 */
DisassociateServiceRoleFromAccountRequest::DisassociateServiceRoleFromAccountRequest()
    : GreengrassRequest(new DisassociateServiceRoleFromAccountRequestPrivate(GreengrassRequest::DisassociateServiceRoleFromAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateServiceRoleFromAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateServiceRoleFromAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateServiceRoleFromAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateServiceRoleFromAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountRequestPrivate
 * \brief The DisassociateServiceRoleFromAccountRequestPrivate class provides private implementation for DisassociateServiceRoleFromAccountRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DisassociateServiceRoleFromAccountRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DisassociateServiceRoleFromAccountRequestPrivate::DisassociateServiceRoleFromAccountRequestPrivate(
    const GreengrassRequest::Action action, DisassociateServiceRoleFromAccountRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateServiceRoleFromAccountRequest
 * class' copy constructor.
 */
DisassociateServiceRoleFromAccountRequestPrivate::DisassociateServiceRoleFromAccountRequestPrivate(
    const DisassociateServiceRoleFromAccountRequestPrivate &other, DisassociateServiceRoleFromAccountRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
