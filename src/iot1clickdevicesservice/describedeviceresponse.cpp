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

#include "describedeviceresponse.h"
#include "describedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::DescribeDeviceResponse
 * \brief The DescribeDeviceResponse class provides an interace for IoT1ClickDevicesService DescribeDevice responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::describeDevice
 */

/*!
 * Constructs a DescribeDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceResponse::DescribeDeviceResponse(
        const DescribeDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new DescribeDeviceResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceRequest * DescribeDeviceResponse::request() const
{
    return static_cast<const DescribeDeviceRequest *>(IoT1ClickDevicesServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevicesService DescribeDevice \a response.
 */
void DescribeDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::DescribeDeviceResponsePrivate
 * \brief The DescribeDeviceResponsePrivate class provides private implementation for DescribeDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a DescribeDeviceResponsePrivate object with public implementation \a q.
 */
DescribeDeviceResponsePrivate::DescribeDeviceResponsePrivate(
    DescribeDeviceResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService DescribeDevice response element from \a xml.
 */
void DescribeDeviceResponsePrivate::parseDescribeDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
