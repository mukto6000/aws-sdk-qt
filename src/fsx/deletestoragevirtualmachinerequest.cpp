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

#include "deletestoragevirtualmachinerequest.h"
#include "deletestoragevirtualmachinerequest_p.h"
#include "deletestoragevirtualmachineresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteStorageVirtualMachineRequest
 * \brief The DeleteStorageVirtualMachineRequest class provides an interface for FSx DeleteStorageVirtualMachine requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteStorageVirtualMachine
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStorageVirtualMachineRequest::DeleteStorageVirtualMachineRequest(const DeleteStorageVirtualMachineRequest &other)
    : FSxRequest(new DeleteStorageVirtualMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStorageVirtualMachineRequest object.
 */
DeleteStorageVirtualMachineRequest::DeleteStorageVirtualMachineRequest()
    : FSxRequest(new DeleteStorageVirtualMachineRequestPrivate(FSxRequest::DeleteStorageVirtualMachineAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStorageVirtualMachineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStorageVirtualMachineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStorageVirtualMachineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStorageVirtualMachineResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DeleteStorageVirtualMachineRequestPrivate
 * \brief The DeleteStorageVirtualMachineRequestPrivate class provides private implementation for DeleteStorageVirtualMachineRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteStorageVirtualMachineRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DeleteStorageVirtualMachineRequestPrivate::DeleteStorageVirtualMachineRequestPrivate(
    const FSxRequest::Action action, DeleteStorageVirtualMachineRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStorageVirtualMachineRequest
 * class' copy constructor.
 */
DeleteStorageVirtualMachineRequestPrivate::DeleteStorageVirtualMachineRequestPrivate(
    const DeleteStorageVirtualMachineRequestPrivate &other, DeleteStorageVirtualMachineRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
