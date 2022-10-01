// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateeventdestinationresponse.h"
#include "updateeventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdateEventDestinationResponse
 * \brief The UpdateEventDestinationResponse class provides an interace for PinpointSmsVoiceV2 UpdateEventDestination responses.
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
 * \sa PinpointSmsVoiceV2Client::updateEventDestination
 */

/*!
 * Constructs a UpdateEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEventDestinationResponse::UpdateEventDestinationResponse(
        const UpdateEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new UpdateEventDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEventDestinationRequest * UpdateEventDestinationResponse::request() const
{
    Q_D(const UpdateEventDestinationResponse);
    return static_cast<const UpdateEventDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 UpdateEventDestination \a response.
 */
void UpdateEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdateEventDestinationResponsePrivate
 * \brief The UpdateEventDestinationResponsePrivate class provides private implementation for UpdateEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a UpdateEventDestinationResponsePrivate object with public implementation \a q.
 */
UpdateEventDestinationResponsePrivate::UpdateEventDestinationResponsePrivate(
    UpdateEventDestinationResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 UpdateEventDestination response element from \a xml.
 */
void UpdateEventDestinationResponsePrivate::parseUpdateEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
