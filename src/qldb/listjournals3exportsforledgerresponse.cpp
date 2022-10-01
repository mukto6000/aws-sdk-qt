// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjournals3exportsforledgerresponse.h"
#include "listjournals3exportsforledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsForLedgerResponse
 * \brief The ListJournalS3ExportsForLedgerResponse class provides an interace for Qldb ListJournalS3ExportsForLedger responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalS3ExportsForLedger
 */

/*!
 * Constructs a ListJournalS3ExportsForLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
ListJournalS3ExportsForLedgerResponse::ListJournalS3ExportsForLedgerResponse(
        const ListJournalS3ExportsForLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ListJournalS3ExportsForLedgerResponsePrivate(this), parent)
{
    setRequest(new ListJournalS3ExportsForLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJournalS3ExportsForLedgerRequest * ListJournalS3ExportsForLedgerResponse::request() const
{
    Q_D(const ListJournalS3ExportsForLedgerResponse);
    return static_cast<const ListJournalS3ExportsForLedgerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb ListJournalS3ExportsForLedger \a response.
 */
void ListJournalS3ExportsForLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJournalS3ExportsForLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsForLedgerResponsePrivate
 * \brief The ListJournalS3ExportsForLedgerResponsePrivate class provides private implementation for ListJournalS3ExportsForLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListJournalS3ExportsForLedgerResponsePrivate object with public implementation \a q.
 */
ListJournalS3ExportsForLedgerResponsePrivate::ListJournalS3ExportsForLedgerResponsePrivate(
    ListJournalS3ExportsForLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb ListJournalS3ExportsForLedger response element from \a xml.
 */
void ListJournalS3ExportsForLedgerResponsePrivate::parseListJournalS3ExportsForLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJournalS3ExportsForLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
