// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesshpublickeyresponse.h"
#include "deletesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteSshPublicKeyResponse
 * \brief The DeleteSshPublicKeyResponse class provides an interace for Transfer DeleteSshPublicKey responses.
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
 * \sa TransferClient::deleteSshPublicKey
 */

/*!
 * Constructs a DeleteSshPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSshPublicKeyResponse::DeleteSshPublicKeyResponse(
        const DeleteSshPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteSshPublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteSshPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSshPublicKeyRequest * DeleteSshPublicKeyResponse::request() const
{
    Q_D(const DeleteSshPublicKeyResponse);
    return static_cast<const DeleteSshPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteSshPublicKey \a response.
 */
void DeleteSshPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSshPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteSshPublicKeyResponsePrivate
 * \brief The DeleteSshPublicKeyResponsePrivate class provides private implementation for DeleteSshPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteSshPublicKeyResponsePrivate object with public implementation \a q.
 */
DeleteSshPublicKeyResponsePrivate::DeleteSshPublicKeyResponsePrivate(
    DeleteSshPublicKeyResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteSshPublicKey response element from \a xml.
 */
void DeleteSshPublicKeyResponsePrivate::parseDeleteSshPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSshPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
