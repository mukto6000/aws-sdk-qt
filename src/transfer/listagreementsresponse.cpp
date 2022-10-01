// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listagreementsresponse.h"
#include "listagreementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListAgreementsResponse
 * \brief The ListAgreementsResponse class provides an interace for Transfer ListAgreements responses.
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
 * \sa TransferClient::listAgreements
 */

/*!
 * Constructs a ListAgreementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAgreementsResponse::ListAgreementsResponse(
        const ListAgreementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListAgreementsResponsePrivate(this), parent)
{
    setRequest(new ListAgreementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAgreementsRequest * ListAgreementsResponse::request() const
{
    Q_D(const ListAgreementsResponse);
    return static_cast<const ListAgreementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListAgreements \a response.
 */
void ListAgreementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAgreementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListAgreementsResponsePrivate
 * \brief The ListAgreementsResponsePrivate class provides private implementation for ListAgreementsResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListAgreementsResponsePrivate object with public implementation \a q.
 */
ListAgreementsResponsePrivate::ListAgreementsResponsePrivate(
    ListAgreementsResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListAgreements response element from \a xml.
 */
void ListAgreementsResponsePrivate::parseListAgreementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAgreementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
