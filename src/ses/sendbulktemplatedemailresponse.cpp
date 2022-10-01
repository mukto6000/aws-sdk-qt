// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendbulktemplatedemailresponse.h"
#include "sendbulktemplatedemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendBulkTemplatedEmailResponse
 * \brief The SendBulkTemplatedEmailResponse class provides an interace for Ses SendBulkTemplatedEmail responses.
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
 * \sa SesClient::sendBulkTemplatedEmail
 */

/*!
 * Constructs a SendBulkTemplatedEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendBulkTemplatedEmailResponse::SendBulkTemplatedEmailResponse(
        const SendBulkTemplatedEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendBulkTemplatedEmailResponsePrivate(this), parent)
{
    setRequest(new SendBulkTemplatedEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendBulkTemplatedEmailRequest * SendBulkTemplatedEmailResponse::request() const
{
    Q_D(const SendBulkTemplatedEmailResponse);
    return static_cast<const SendBulkTemplatedEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SendBulkTemplatedEmail \a response.
 */
void SendBulkTemplatedEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendBulkTemplatedEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SendBulkTemplatedEmailResponsePrivate
 * \brief The SendBulkTemplatedEmailResponsePrivate class provides private implementation for SendBulkTemplatedEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendBulkTemplatedEmailResponsePrivate object with public implementation \a q.
 */
SendBulkTemplatedEmailResponsePrivate::SendBulkTemplatedEmailResponsePrivate(
    SendBulkTemplatedEmailResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SendBulkTemplatedEmail response element from \a xml.
 */
void SendBulkTemplatedEmailResponsePrivate::parseSendBulkTemplatedEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBulkTemplatedEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
