// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfiletransferresponse.h"
#include "startfiletransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StartFileTransferResponse
 * \brief The StartFileTransferResponse class provides an interace for Transfer StartFileTransfer responses.
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
 * \sa TransferClient::startFileTransfer
 */

/*!
 * Constructs a StartFileTransferResponse object for \a reply to \a request, with parent \a parent.
 */
StartFileTransferResponse::StartFileTransferResponse(
        const StartFileTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new StartFileTransferResponsePrivate(this), parent)
{
    setRequest(new StartFileTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFileTransferRequest * StartFileTransferResponse::request() const
{
    Q_D(const StartFileTransferResponse);
    return static_cast<const StartFileTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer StartFileTransfer \a response.
 */
void StartFileTransferResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFileTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::StartFileTransferResponsePrivate
 * \brief The StartFileTransferResponsePrivate class provides private implementation for StartFileTransferResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StartFileTransferResponsePrivate object with public implementation \a q.
 */
StartFileTransferResponsePrivate::StartFileTransferResponsePrivate(
    StartFileTransferResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer StartFileTransfer response element from \a xml.
 */
void StartFileTransferResponsePrivate::parseStartFileTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFileTransferResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
