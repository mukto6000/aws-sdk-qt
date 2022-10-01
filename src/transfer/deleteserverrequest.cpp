// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteserverrequest.h"
#include "deleteserverrequest_p.h"
#include "deleteserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteServerRequest
 * \brief The DeleteServerRequest class provides an interface for Transfer DeleteServer requests.
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
 * \sa TransferClient::deleteServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServerRequest::DeleteServerRequest(const DeleteServerRequest &other)
    : TransferRequest(new DeleteServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServerRequest object.
 */
DeleteServerRequest::DeleteServerRequest()
    : TransferRequest(new DeleteServerRequestPrivate(TransferRequest::DeleteServerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DeleteServerRequestPrivate
 * \brief The DeleteServerRequestPrivate class provides private implementation for DeleteServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DeleteServerRequestPrivate::DeleteServerRequestPrivate(
    const TransferRequest::Action action, DeleteServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServerRequest
 * class' copy constructor.
 */
DeleteServerRequestPrivate::DeleteServerRequestPrivate(
    const DeleteServerRequestPrivate &other, DeleteServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
