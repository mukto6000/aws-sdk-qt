// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendbounceresponse.h"
#include "sendbounceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendBounceResponse
 * \brief The SendBounceResponse class provides an interace for Ses SendBounce responses.
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
 * \sa SesClient::sendBounce
 */

/*!
 * Constructs a SendBounceResponse object for \a reply to \a request, with parent \a parent.
 */
SendBounceResponse::SendBounceResponse(
        const SendBounceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendBounceResponsePrivate(this), parent)
{
    setRequest(new SendBounceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendBounceRequest * SendBounceResponse::request() const
{
    Q_D(const SendBounceResponse);
    return static_cast<const SendBounceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SendBounce \a response.
 */
void SendBounceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendBounceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SendBounceResponsePrivate
 * \brief The SendBounceResponsePrivate class provides private implementation for SendBounceResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendBounceResponsePrivate object with public implementation \a q.
 */
SendBounceResponsePrivate::SendBounceResponsePrivate(
    SendBounceResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SendBounce response element from \a xml.
 */
void SendBounceResponsePrivate::parseSendBounceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBounceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
