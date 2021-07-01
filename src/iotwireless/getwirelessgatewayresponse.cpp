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

#include "getwirelessgatewayresponse.h"
#include "getwirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayResponse
 * \brief The GetWirelessGatewayResponse class provides an interace for IoTWireless GetWirelessGateway responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGateway
 */

/*!
 * Constructs a GetWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayResponse::GetWirelessGatewayResponse(
        const GetWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayRequest * GetWirelessGatewayResponse::request() const
{
    Q_D(const GetWirelessGatewayResponse);
    return static_cast<const GetWirelessGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGateway \a response.
 */
void GetWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayResponsePrivate
 * \brief The GetWirelessGatewayResponsePrivate class provides private implementation for GetWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayResponsePrivate::GetWirelessGatewayResponsePrivate(
    GetWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGateway response element from \a xml.
 */
void GetWirelessGatewayResponsePrivate::parseGetWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
