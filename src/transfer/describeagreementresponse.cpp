// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeagreementresponse.h"
#include "describeagreementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeAgreementResponse
 * \brief The DescribeAgreementResponse class provides an interace for Transfer DescribeAgreement responses.
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
 * \sa TransferClient::describeAgreement
 */

/*!
 * Constructs a DescribeAgreementResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAgreementResponse::DescribeAgreementResponse(
        const DescribeAgreementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeAgreementResponsePrivate(this), parent)
{
    setRequest(new DescribeAgreementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAgreementRequest * DescribeAgreementResponse::request() const
{
    Q_D(const DescribeAgreementResponse);
    return static_cast<const DescribeAgreementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeAgreement \a response.
 */
void DescribeAgreementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAgreementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeAgreementResponsePrivate
 * \brief The DescribeAgreementResponsePrivate class provides private implementation for DescribeAgreementResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeAgreementResponsePrivate object with public implementation \a q.
 */
DescribeAgreementResponsePrivate::DescribeAgreementResponsePrivate(
    DescribeAgreementResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeAgreement response element from \a xml.
 */
void DescribeAgreementResponsePrivate::parseDescribeAgreementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAgreementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
