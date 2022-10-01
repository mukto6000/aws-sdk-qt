// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startserverrequest.h"
#include "startserverrequest_p.h"
#include "startserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StartServerRequest
 * \brief The StartServerRequest class provides an interface for Transfer StartServer requests.
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
 * \sa TransferClient::startServer
 */

/*!
 * Constructs a copy of \a other.
 */
StartServerRequest::StartServerRequest(const StartServerRequest &other)
    : TransferRequest(new StartServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartServerRequest object.
 */
StartServerRequest::StartServerRequest()
    : TransferRequest(new StartServerRequestPrivate(TransferRequest::StartServerAction, this))
{

}

/*!
 * \reimp
 */
bool StartServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartServerRequest::response(QNetworkReply * const reply) const
{
    return new StartServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::StartServerRequestPrivate
 * \brief The StartServerRequestPrivate class provides private implementation for StartServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StartServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
StartServerRequestPrivate::StartServerRequestPrivate(
    const TransferRequest::Action action, StartServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartServerRequest
 * class' copy constructor.
 */
StartServerRequestPrivate::StartServerRequestPrivate(
    const StartServerRequestPrivate &other, StartServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
