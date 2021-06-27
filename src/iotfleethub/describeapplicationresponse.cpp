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

#include "describeapplicationresponse.h"
#include "describeapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::DescribeApplicationResponse
 * \brief The DescribeApplicationResponse class provides an interace for IoTFleetHub DescribeApplication responses.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::describeApplication
 */

/*!
 * Constructs a DescribeApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationResponse::DescribeApplicationResponse(
        const DescribeApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTFleetHubResponse(new DescribeApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationRequest * DescribeApplicationResponse::request() const
{
    return static_cast<const DescribeApplicationRequest *>(IoTFleetHubResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTFleetHub DescribeApplication \a response.
 */
void DescribeApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTFleetHub::DescribeApplicationResponsePrivate
 * \brief The DescribeApplicationResponsePrivate class provides private implementation for DescribeApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a DescribeApplicationResponsePrivate object with public implementation \a q.
 */
DescribeApplicationResponsePrivate::DescribeApplicationResponsePrivate(
    DescribeApplicationResponse * const q) : IoTFleetHubResponsePrivate(q)
{

}

/*!
 * Parses a IoTFleetHub DescribeApplication response element from \a xml.
 */
void DescribeApplicationResponsePrivate::parseDescribeApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTFleetHub
} // namespace QtAws
