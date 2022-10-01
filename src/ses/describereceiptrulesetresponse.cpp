// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereceiptrulesetresponse.h"
#include "describereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeReceiptRuleSetResponse
 * \brief The DescribeReceiptRuleSetResponse class provides an interace for Ses DescribeReceiptRuleSet responses.
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
 * \sa SesClient::describeReceiptRuleSet
 */

/*!
 * Constructs a DescribeReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReceiptRuleSetResponse::DescribeReceiptRuleSetResponse(
        const DescribeReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DescribeReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new DescribeReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReceiptRuleSetRequest * DescribeReceiptRuleSetResponse::request() const
{
    Q_D(const DescribeReceiptRuleSetResponse);
    return static_cast<const DescribeReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DescribeReceiptRuleSet \a response.
 */
void DescribeReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DescribeReceiptRuleSetResponsePrivate
 * \brief The DescribeReceiptRuleSetResponsePrivate class provides private implementation for DescribeReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
DescribeReceiptRuleSetResponsePrivate::DescribeReceiptRuleSetResponsePrivate(
    DescribeReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DescribeReceiptRuleSet response element from \a xml.
 */
void DescribeReceiptRuleSetResponsePrivate::parseDescribeReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
