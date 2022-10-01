// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountsuppressionattributesresponse.h"
#include "putaccountsuppressionattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountSuppressionAttributesResponse
 * \brief The PutAccountSuppressionAttributesResponse class provides an interace for SESv2 PutAccountSuppressionAttributes responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::putAccountSuppressionAttributes
 */

/*!
 * Constructs a PutAccountSuppressionAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountSuppressionAttributesResponse::PutAccountSuppressionAttributesResponse(
        const PutAccountSuppressionAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutAccountSuppressionAttributesResponsePrivate(this), parent)
{
    setRequest(new PutAccountSuppressionAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountSuppressionAttributesRequest * PutAccountSuppressionAttributesResponse::request() const
{
    Q_D(const PutAccountSuppressionAttributesResponse);
    return static_cast<const PutAccountSuppressionAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutAccountSuppressionAttributes \a response.
 */
void PutAccountSuppressionAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountSuppressionAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutAccountSuppressionAttributesResponsePrivate
 * \brief The PutAccountSuppressionAttributesResponsePrivate class provides private implementation for PutAccountSuppressionAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountSuppressionAttributesResponsePrivate object with public implementation \a q.
 */
PutAccountSuppressionAttributesResponsePrivate::PutAccountSuppressionAttributesResponsePrivate(
    PutAccountSuppressionAttributesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutAccountSuppressionAttributes response element from \a xml.
 */
void PutAccountSuppressionAttributesResponsePrivate::parsePutAccountSuppressionAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountSuppressionAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
