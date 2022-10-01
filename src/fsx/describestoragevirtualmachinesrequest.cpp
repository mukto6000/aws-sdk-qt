// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestoragevirtualmachinesrequest.h"
#include "describestoragevirtualmachinesrequest_p.h"
#include "describestoragevirtualmachinesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeStorageVirtualMachinesRequest
 * \brief The DescribeStorageVirtualMachinesRequest class provides an interface for FSx DescribeStorageVirtualMachines requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeStorageVirtualMachines
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStorageVirtualMachinesRequest::DescribeStorageVirtualMachinesRequest(const DescribeStorageVirtualMachinesRequest &other)
    : FSxRequest(new DescribeStorageVirtualMachinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStorageVirtualMachinesRequest object.
 */
DescribeStorageVirtualMachinesRequest::DescribeStorageVirtualMachinesRequest()
    : FSxRequest(new DescribeStorageVirtualMachinesRequestPrivate(FSxRequest::DescribeStorageVirtualMachinesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStorageVirtualMachinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStorageVirtualMachinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStorageVirtualMachinesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStorageVirtualMachinesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeStorageVirtualMachinesRequestPrivate
 * \brief The DescribeStorageVirtualMachinesRequestPrivate class provides private implementation for DescribeStorageVirtualMachinesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeStorageVirtualMachinesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeStorageVirtualMachinesRequestPrivate::DescribeStorageVirtualMachinesRequestPrivate(
    const FSxRequest::Action action, DescribeStorageVirtualMachinesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStorageVirtualMachinesRequest
 * class' copy constructor.
 */
DescribeStorageVirtualMachinesRequestPrivate::DescribeStorageVirtualMachinesRequestPrivate(
    const DescribeStorageVirtualMachinesRequestPrivate &other, DescribeStorageVirtualMachinesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
