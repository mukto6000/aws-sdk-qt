// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateoriginationidentityresponse.h"
#include "associateoriginationidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::AssociateOriginationIdentityResponse
 * \brief The AssociateOriginationIdentityResponse class provides an interace for PinpointSmsVoiceV2 AssociateOriginationIdentity responses.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 *
 *  Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>. This guide provides information about
 *  Amazon Pinpoint SMS and Voice, version 2 API resources, including supported HTTP methods, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Pinpoint is an Amazon Web Services service that you can use to engage with your recipients across multiple
 *  messaging channels. The Amazon Pinpoint SMS and Voice, version 2 API provides programmatic access to options that are
 *  unique to the SMS and voice channels and supplements the resources provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, it's also helpful to review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html"> Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides key information, such as Amazon Pinpoint integration with other Amazon
 *  Web Services services, and the quotas that apply to use of the
 *
 * \sa PinpointSmsVoiceV2Client::associateOriginationIdentity
 */

/*!
 * Constructs a AssociateOriginationIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateOriginationIdentityResponse::AssociateOriginationIdentityResponse(
        const AssociateOriginationIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new AssociateOriginationIdentityResponsePrivate(this), parent)
{
    setRequest(new AssociateOriginationIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateOriginationIdentityRequest * AssociateOriginationIdentityResponse::request() const
{
    Q_D(const AssociateOriginationIdentityResponse);
    return static_cast<const AssociateOriginationIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 AssociateOriginationIdentity \a response.
 */
void AssociateOriginationIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateOriginationIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::AssociateOriginationIdentityResponsePrivate
 * \brief The AssociateOriginationIdentityResponsePrivate class provides private implementation for AssociateOriginationIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a AssociateOriginationIdentityResponsePrivate object with public implementation \a q.
 */
AssociateOriginationIdentityResponsePrivate::AssociateOriginationIdentityResponsePrivate(
    AssociateOriginationIdentityResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 AssociateOriginationIdentity response element from \a xml.
 */
void AssociateOriginationIdentityResponsePrivate::parseAssociateOriginationIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateOriginationIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
