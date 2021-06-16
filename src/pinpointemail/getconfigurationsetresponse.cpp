/*
    Copyright 2013-2021 Paul Colby

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

#include "getconfigurationsetresponse.h"
#include "getconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetConfigurationSetResponse
 * \brief The GetConfigurationSetResponse class provides an interace for PinpointEmail GetConfigurationSet responses.
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
 * \sa PinpointEmailClient::getConfigurationSet
 */

/*!
 * Constructs a GetConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigurationSetResponse::GetConfigurationSetResponse(
        const GetConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new GetConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new GetConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigurationSetRequest * GetConfigurationSetResponse::request() const
{
    Q_D(const GetConfigurationSetResponse);
    return static_cast<const GetConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail GetConfigurationSet \a response.
 */
void GetConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::GetConfigurationSetResponsePrivate
 * \brief The GetConfigurationSetResponsePrivate class provides private implementation for GetConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetConfigurationSetResponsePrivate object with public implementation \a q.
 */
GetConfigurationSetResponsePrivate::GetConfigurationSetResponsePrivate(
    GetConfigurationSetResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail GetConfigurationSet response element from \a xml.
 */
void GetConfigurationSetResponsePrivate::parseGetConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
