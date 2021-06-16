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

#include "updateserverresponse.h"
#include "updateserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateServerResponse
 * \brief The UpdateServerResponse class provides an interace for Transfer UpdateServer responses.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer for SFTP is a fully managed service that enables the transfer of files directly into and out of Amazon S3
 *  using the Secure File Transfer Protocol (SFTP)—also known as Secure Shell (SSH) File Transfer Protocol. AWS helps you
 *  seamlessly migrate your file transfer workflows to AWS Transfer for SFTP—by integrating with existing authentication
 *  systems, and providing DNS routing with Amazon Route 53—so nothing changes for your customers and partners, or their
 *  applications. With your data in S3, you can use it with AWS services for processing, analytics, machine learning, and
 *  archiving. Getting started with AWS Transfer for SFTP (AWS SFTP) is easy; there is no infrastructure to buy and setup.
 *
 * \sa TransferClient::updateServer
 */

/*!
 * Constructs a UpdateServerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServerResponse::UpdateServerResponse(
        const UpdateServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateServerResponsePrivate(this), parent)
{
    setRequest(new UpdateServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServerRequest * UpdateServerResponse::request() const
{
    Q_D(const UpdateServerResponse);
    return static_cast<const UpdateServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateServer \a response.
 */
void UpdateServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateServerResponsePrivate
 * \brief The UpdateServerResponsePrivate class provides private implementation for UpdateServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateServerResponsePrivate object with public implementation \a q.
 */
UpdateServerResponsePrivate::UpdateServerResponsePrivate(
    UpdateServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateServer response element from \a xml.
 */
void UpdateServerResponsePrivate::parseUpdateServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
