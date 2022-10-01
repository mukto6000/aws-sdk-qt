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

#include "listcoredevicesresponse.h"
#include "listcoredevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListCoreDevicesResponse
 * \brief The ListCoreDevicesResponse class provides an interace for GreengrassV2 ListCoreDevices responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listCoreDevices
 */

/*!
 * Constructs a ListCoreDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreDevicesResponse::ListCoreDevicesResponse(
        const ListCoreDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListCoreDevicesResponsePrivate(this), parent)
{
    setRequest(new ListCoreDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreDevicesRequest * ListCoreDevicesResponse::request() const
{
    Q_D(const ListCoreDevicesResponse);
    return static_cast<const ListCoreDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListCoreDevices \a response.
 */
void ListCoreDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListCoreDevicesResponsePrivate
 * \brief The ListCoreDevicesResponsePrivate class provides private implementation for ListCoreDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListCoreDevicesResponsePrivate object with public implementation \a q.
 */
ListCoreDevicesResponsePrivate::ListCoreDevicesResponsePrivate(
    ListCoreDevicesResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListCoreDevices response element from \a xml.
 */
void ListCoreDevicesResponsePrivate::parseListCoreDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
