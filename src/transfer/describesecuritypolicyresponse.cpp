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

#include "describesecuritypolicyresponse.h"
#include "describesecuritypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeSecurityPolicyResponse
 * \brief The DescribeSecurityPolicyResponse class provides an interace for Transfer DescribeSecurityPolicy responses.
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
 * \sa TransferClient::describeSecurityPolicy
 */

/*!
 * Constructs a DescribeSecurityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSecurityPolicyResponse::DescribeSecurityPolicyResponse(
        const DescribeSecurityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeSecurityPolicyResponsePrivate(this), parent)
{
    setRequest(new DescribeSecurityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSecurityPolicyRequest * DescribeSecurityPolicyResponse::request() const
{
    return static_cast<const DescribeSecurityPolicyRequest *>(TransferResponse::request());
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeSecurityPolicy \a response.
 */
void DescribeSecurityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSecurityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeSecurityPolicyResponsePrivate
 * \brief The DescribeSecurityPolicyResponsePrivate class provides private implementation for DescribeSecurityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeSecurityPolicyResponsePrivate object with public implementation \a q.
 */
DescribeSecurityPolicyResponsePrivate::DescribeSecurityPolicyResponsePrivate(
    DescribeSecurityPolicyResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeSecurityPolicy response element from \a xml.
 */
void DescribeSecurityPolicyResponsePrivate::parseDescribeSecurityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecurityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
