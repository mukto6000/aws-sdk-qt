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

#include "createconnectorresponse.h"
#include "createconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateConnectorResponse
 * \brief The CreateConnectorResponse class provides an interace for Transfer CreateConnector responses.
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
 * \sa TransferClient::createConnector
 */

/*!
 * Constructs a CreateConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectorResponse::CreateConnectorResponse(
        const CreateConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new CreateConnectorResponsePrivate(this), parent)
{
    setRequest(new CreateConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectorRequest * CreateConnectorResponse::request() const
{
    Q_D(const CreateConnectorResponse);
    return static_cast<const CreateConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer CreateConnector \a response.
 */
void CreateConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::CreateConnectorResponsePrivate
 * \brief The CreateConnectorResponsePrivate class provides private implementation for CreateConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateConnectorResponsePrivate object with public implementation \a q.
 */
CreateConnectorResponsePrivate::CreateConnectorResponsePrivate(
    CreateConnectorResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer CreateConnector response element from \a xml.
 */
void CreateConnectorResponsePrivate::parseCreateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
