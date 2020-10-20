/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putemailidentityfeedbackattributesresponse.h"
#include "putemailidentityfeedbackattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PutEmailIdentityFeedbackAttributesResponse
 * \brief The PutEmailIdentityFeedbackAttributesResponse class provides an interace for PinpointEmail PutEmailIdentityFeedbackAttributes responses.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in several AWS Regions and it provides an endpoint for each of these Regions.
 *  For a list of all the Regions and endpoints where the API is currently available, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">AWS Regions and Endpoints</a> in the
 *  <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  In each Region, AWS maintains multiple Availability Zones. These Availability Zones are physically isolated from each
 *  other, but are united by private, low-latency, high-throughput, and highly redundant network connections. These
 *  Availability Zones enable us to provide very high levels of availability and redundancy, while also minimizing latency.
 *  To learn more about the number of Availability Zones that are available in each Region, see <a
 *  href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
 *
 * \sa PinpointEmailClient::putEmailIdentityFeedbackAttributes
 */

/*!
 * Constructs a PutEmailIdentityFeedbackAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutEmailIdentityFeedbackAttributesResponse::PutEmailIdentityFeedbackAttributesResponse(
        const PutEmailIdentityFeedbackAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new PutEmailIdentityFeedbackAttributesResponsePrivate(this), parent)
{
    setRequest(new PutEmailIdentityFeedbackAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEmailIdentityFeedbackAttributesRequest * PutEmailIdentityFeedbackAttributesResponse::request() const
{
    Q_D(const PutEmailIdentityFeedbackAttributesResponse);
    return static_cast<const PutEmailIdentityFeedbackAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail PutEmailIdentityFeedbackAttributes \a response.
 */
void PutEmailIdentityFeedbackAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEmailIdentityFeedbackAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::PutEmailIdentityFeedbackAttributesResponsePrivate
 * \brief The PutEmailIdentityFeedbackAttributesResponsePrivate class provides private implementation for PutEmailIdentityFeedbackAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PutEmailIdentityFeedbackAttributesResponsePrivate object with public implementation \a q.
 */
PutEmailIdentityFeedbackAttributesResponsePrivate::PutEmailIdentityFeedbackAttributesResponsePrivate(
    PutEmailIdentityFeedbackAttributesResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail PutEmailIdentityFeedbackAttributes response element from \a xml.
 */
void PutEmailIdentityFeedbackAttributesResponsePrivate::parsePutEmailIdentityFeedbackAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEmailIdentityFeedbackAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
