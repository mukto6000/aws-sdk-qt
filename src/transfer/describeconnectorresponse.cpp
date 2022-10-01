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

#include "describeconnectorresponse.h"
#include "describeconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeConnectorResponse
 * \brief The DescribeConnectorResponse class provides an interace for Transfer DescribeConnector responses.
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
 * \sa TransferClient::describeConnector
 */

/*!
 * Constructs a DescribeConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectorResponse::DescribeConnectorResponse(
        const DescribeConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeConnectorResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectorRequest * DescribeConnectorResponse::request() const
{
    Q_D(const DescribeConnectorResponse);
    return static_cast<const DescribeConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeConnector \a response.
 */
void DescribeConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeConnectorResponsePrivate
 * \brief The DescribeConnectorResponsePrivate class provides private implementation for DescribeConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeConnectorResponsePrivate object with public implementation \a q.
 */
DescribeConnectorResponsePrivate::DescribeConnectorResponsePrivate(
    DescribeConnectorResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeConnector response element from \a xml.
 */
void DescribeConnectorResponsePrivate::parseDescribeConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
