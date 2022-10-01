// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importcertificaterequest.h"
#include "importcertificaterequest_p.h"
#include "importcertificateresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ImportCertificateRequest
 * \brief The ImportCertificateRequest class provides an interface for Transfer ImportCertificate requests.
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
 * \sa TransferClient::importCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
ImportCertificateRequest::ImportCertificateRequest(const ImportCertificateRequest &other)
    : TransferRequest(new ImportCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportCertificateRequest object.
 */
ImportCertificateRequest::ImportCertificateRequest()
    : TransferRequest(new ImportCertificateRequestPrivate(TransferRequest::ImportCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool ImportCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ImportCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ImportCertificateRequestPrivate
 * \brief The ImportCertificateRequestPrivate class provides private implementation for ImportCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ImportCertificateRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ImportCertificateRequestPrivate::ImportCertificateRequestPrivate(
    const TransferRequest::Action action, ImportCertificateRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportCertificateRequest
 * class' copy constructor.
 */
ImportCertificateRequestPrivate::ImportCertificateRequestPrivate(
    const ImportCertificateRequestPrivate &other, ImportCertificateRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
