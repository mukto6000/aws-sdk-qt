// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereceiptrulesetresponse.h"
#include "deletereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteReceiptRuleSetResponse
 * \brief The DeleteReceiptRuleSetResponse class provides an interace for Ses DeleteReceiptRuleSet responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::deleteReceiptRuleSet
 */

/*!
 * Constructs a DeleteReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReceiptRuleSetResponse::DeleteReceiptRuleSetResponse(
        const DeleteReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new DeleteReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReceiptRuleSetRequest * DeleteReceiptRuleSetResponse::request() const
{
    Q_D(const DeleteReceiptRuleSetResponse);
    return static_cast<const DeleteReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteReceiptRuleSet \a response.
 */
void DeleteReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteReceiptRuleSetResponsePrivate
 * \brief The DeleteReceiptRuleSetResponsePrivate class provides private implementation for DeleteReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
DeleteReceiptRuleSetResponsePrivate::DeleteReceiptRuleSetResponsePrivate(
    DeleteReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteReceiptRuleSet response element from \a xml.
 */
void DeleteReceiptRuleSetResponsePrivate::parseDeleteReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
