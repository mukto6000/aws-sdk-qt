// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentityheadersinnotificationsenabledresponse.h"
#include "setidentityheadersinnotificationsenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityHeadersInNotificationsEnabledResponse
 * \brief The SetIdentityHeadersInNotificationsEnabledResponse class provides an interace for Ses SetIdentityHeadersInNotificationsEnabled responses.
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
 * \sa SesClient::setIdentityHeadersInNotificationsEnabled
 */

/*!
 * Constructs a SetIdentityHeadersInNotificationsEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
SetIdentityHeadersInNotificationsEnabledResponse::SetIdentityHeadersInNotificationsEnabledResponse(
        const SetIdentityHeadersInNotificationsEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetIdentityHeadersInNotificationsEnabledResponsePrivate(this), parent)
{
    setRequest(new SetIdentityHeadersInNotificationsEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetIdentityHeadersInNotificationsEnabledRequest * SetIdentityHeadersInNotificationsEnabledResponse::request() const
{
    Q_D(const SetIdentityHeadersInNotificationsEnabledResponse);
    return static_cast<const SetIdentityHeadersInNotificationsEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SetIdentityHeadersInNotificationsEnabled \a response.
 */
void SetIdentityHeadersInNotificationsEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetIdentityHeadersInNotificationsEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SetIdentityHeadersInNotificationsEnabledResponsePrivate
 * \brief The SetIdentityHeadersInNotificationsEnabledResponsePrivate class provides private implementation for SetIdentityHeadersInNotificationsEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityHeadersInNotificationsEnabledResponsePrivate object with public implementation \a q.
 */
SetIdentityHeadersInNotificationsEnabledResponsePrivate::SetIdentityHeadersInNotificationsEnabledResponsePrivate(
    SetIdentityHeadersInNotificationsEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SetIdentityHeadersInNotificationsEnabled response element from \a xml.
 */
void SetIdentityHeadersInNotificationsEnabledResponsePrivate::parseSetIdentityHeadersInNotificationsEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityHeadersInNotificationsEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
