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

#include "associatewirelessgatewaywithcertificateresponse.h"
#include "associatewirelessgatewaywithcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithCertificateResponse
 * \brief The AssociateWirelessGatewayWithCertificateResponse class provides an interace for IoTWireless AssociateWirelessGatewayWithCertificate responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::associateWirelessGatewayWithCertificate
 */

/*!
 * Constructs a AssociateWirelessGatewayWithCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWirelessGatewayWithCertificateResponse::AssociateWirelessGatewayWithCertificateResponse(
        const AssociateWirelessGatewayWithCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateWirelessGatewayWithCertificateResponsePrivate(this), parent)
{
    setRequest(new AssociateWirelessGatewayWithCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWirelessGatewayWithCertificateRequest * AssociateWirelessGatewayWithCertificateResponse::request() const
{
    return static_cast<const AssociateWirelessGatewayWithCertificateRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateWirelessGatewayWithCertificate \a response.
 */
void AssociateWirelessGatewayWithCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWirelessGatewayWithCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithCertificateResponsePrivate
 * \brief The AssociateWirelessGatewayWithCertificateResponsePrivate class provides private implementation for AssociateWirelessGatewayWithCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessGatewayWithCertificateResponsePrivate object with public implementation \a q.
 */
AssociateWirelessGatewayWithCertificateResponsePrivate::AssociateWirelessGatewayWithCertificateResponsePrivate(
    AssociateWirelessGatewayWithCertificateResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateWirelessGatewayWithCertificate response element from \a xml.
 */
void AssociateWirelessGatewayWithCertificateResponsePrivate::parseAssociateWirelessGatewayWithCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWirelessGatewayWithCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
