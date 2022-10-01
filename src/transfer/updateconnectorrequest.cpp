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

#include "updateconnectorrequest.h"
#include "updateconnectorrequest_p.h"
#include "updateconnectorresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateConnectorRequest
 * \brief The UpdateConnectorRequest class provides an interface for Transfer UpdateConnector requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3) or Amazon EFS. Additionally, you can use Applicability Statement 2 (AS2) to
 *  transfer files into and out of Amazon S3. Amazon Web Services helps you seamlessly migrate your file transfer workflows
 *  to Transfer Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53
 *  so nothing changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it
 *  with Amazon Web Services for processing, analytics, machine learning, and archiving. Getting started with Transfer
 *  Family is easy since there is no infrastructure to buy and set
 *
 * \sa TransferClient::updateConnector
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectorRequest::UpdateConnectorRequest(const UpdateConnectorRequest &other)
    : TransferRequest(new UpdateConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectorRequest object.
 */
UpdateConnectorRequest::UpdateConnectorRequest()
    : TransferRequest(new UpdateConnectorRequestPrivate(TransferRequest::UpdateConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::UpdateConnectorRequestPrivate
 * \brief The UpdateConnectorRequestPrivate class provides private implementation for UpdateConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateConnectorRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
UpdateConnectorRequestPrivate::UpdateConnectorRequestPrivate(
    const TransferRequest::Action action, UpdateConnectorRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectorRequest
 * class' copy constructor.
 */
UpdateConnectorRequestPrivate::UpdateConnectorRequestPrivate(
    const UpdateConnectorRequestPrivate &other, UpdateConnectorRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
