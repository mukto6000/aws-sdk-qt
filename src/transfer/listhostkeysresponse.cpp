// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhostkeysresponse.h"
#include "listhostkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListHostKeysResponse
 * \brief The ListHostKeysResponse class provides an interace for Transfer ListHostKeys responses.
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
 * \sa TransferClient::listHostKeys
 */

/*!
 * Constructs a ListHostKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListHostKeysResponse::ListHostKeysResponse(
        const ListHostKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListHostKeysResponsePrivate(this), parent)
{
    setRequest(new ListHostKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHostKeysRequest * ListHostKeysResponse::request() const
{
    Q_D(const ListHostKeysResponse);
    return static_cast<const ListHostKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListHostKeys \a response.
 */
void ListHostKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHostKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListHostKeysResponsePrivate
 * \brief The ListHostKeysResponsePrivate class provides private implementation for ListHostKeysResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListHostKeysResponsePrivate object with public implementation \a q.
 */
ListHostKeysResponsePrivate::ListHostKeysResponsePrivate(
    ListHostKeysResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListHostKeys response element from \a xml.
 */
void ListHostKeysResponsePrivate::parseListHostKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
