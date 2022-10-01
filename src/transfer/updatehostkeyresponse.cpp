// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehostkeyresponse.h"
#include "updatehostkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateHostKeyResponse
 * \brief The UpdateHostKeyResponse class provides an interace for Transfer UpdateHostKey responses.
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
 * \sa TransferClient::updateHostKey
 */

/*!
 * Constructs a UpdateHostKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHostKeyResponse::UpdateHostKeyResponse(
        const UpdateHostKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateHostKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateHostKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHostKeyRequest * UpdateHostKeyResponse::request() const
{
    Q_D(const UpdateHostKeyResponse);
    return static_cast<const UpdateHostKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateHostKey \a response.
 */
void UpdateHostKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateHostKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateHostKeyResponsePrivate
 * \brief The UpdateHostKeyResponsePrivate class provides private implementation for UpdateHostKeyResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateHostKeyResponsePrivate object with public implementation \a q.
 */
UpdateHostKeyResponsePrivate::UpdateHostKeyResponsePrivate(
    UpdateHostKeyResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateHostKey response element from \a xml.
 */
void UpdateHostKeyResponsePrivate::parseUpdateHostKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHostKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
