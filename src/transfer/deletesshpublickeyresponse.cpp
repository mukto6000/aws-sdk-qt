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
 *  AWS Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3). AWS helps you seamlessly migrate your file transfer workflows to AWS Transfer
 *  Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53 so nothing
 *  changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it with AWS
 *  services for processing, analytics, machine learning, and archiving. Getting started with AWS Transfer Family is easy
 *  since there is no infrastructure to buy and set
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
    return static_cast<const DeleteSshPublicKeyRequest *>(TransferResponse::request());
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
