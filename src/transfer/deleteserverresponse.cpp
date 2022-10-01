// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteserverresponse.h"
#include "deleteserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteServerResponse
 * \brief The DeleteServerResponse class provides an interace for Transfer DeleteServer responses.
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
 * Constructs a DeleteServerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServerResponse::DeleteServerResponse(
        const DeleteServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteServerResponsePrivate(this), parent)
{
    setRequest(new DeleteServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServerRequest * DeleteServerResponse::request() const
{
    Q_D(const DeleteServerResponse);
    return static_cast<const DeleteServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteServer \a response.
 */
void DeleteServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteServerResponsePrivate
 * \brief The DeleteServerResponsePrivate class provides private implementation for DeleteServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteServerResponsePrivate object with public implementation \a q.
 */
DeleteServerResponsePrivate::DeleteServerResponsePrivate(
    DeleteServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteServer response element from \a xml.
 */
void DeleteServerResponsePrivate::parseDeleteServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
