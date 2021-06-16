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

#include "testidentityproviderrequest.h"
#include "testidentityproviderrequest_p.h"
#include "testidentityproviderresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TestIdentityProviderRequest
 * \brief The TestIdentityProviderRequest class provides an interface for Transfer TestIdentityProvider requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3). AWS helps you seamlessly migrate your file transfer workflows to AWS Transfer
 *  Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53 so nothing
 *  changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it with AWS
 *  services for processing, analytics, machine learning, and archiving. Getting started with AWS Transfer Family is easy
 *  since there is no infrastructure to buy and set
 *
 * \sa TransferClient::testIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
TestIdentityProviderRequest::TestIdentityProviderRequest(const TestIdentityProviderRequest &other)
    : TransferRequest(new TestIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestIdentityProviderRequest object.
 */
TestIdentityProviderRequest::TestIdentityProviderRequest()
    : TransferRequest(new TestIdentityProviderRequestPrivate(TransferRequest::TestIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool TestIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new TestIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::TestIdentityProviderRequestPrivate
 * \brief The TestIdentityProviderRequestPrivate class provides private implementation for TestIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TestIdentityProviderRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
TestIdentityProviderRequestPrivate::TestIdentityProviderRequestPrivate(
    const TransferRequest::Action action, TestIdentityProviderRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestIdentityProviderRequest
 * class' copy constructor.
 */
TestIdentityProviderRequestPrivate::TestIdentityProviderRequestPrivate(
    const TestIdentityProviderRequestPrivate &other, TestIdentityProviderRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
