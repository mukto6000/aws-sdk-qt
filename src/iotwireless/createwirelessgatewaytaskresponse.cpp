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

#include "createwirelessgatewaytaskresponse.h"
#include "createwirelessgatewaytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskResponse
 * \brief The CreateWirelessGatewayTaskResponse class provides an interace for IoTWireless CreateWirelessGatewayTask responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createWirelessGatewayTask
 */

/*!
 * Constructs a CreateWirelessGatewayTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessGatewayTaskResponse::CreateWirelessGatewayTaskResponse(
        const CreateWirelessGatewayTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessGatewayTaskResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessGatewayTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessGatewayTaskRequest * CreateWirelessGatewayTaskResponse::request() const
{
    return static_cast<const CreateWirelessGatewayTaskRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessGatewayTask \a response.
 */
void CreateWirelessGatewayTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessGatewayTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskResponsePrivate
 * \brief The CreateWirelessGatewayTaskResponsePrivate class provides private implementation for CreateWirelessGatewayTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayTaskResponsePrivate object with public implementation \a q.
 */
CreateWirelessGatewayTaskResponsePrivate::CreateWirelessGatewayTaskResponsePrivate(
    CreateWirelessGatewayTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessGatewayTask response element from \a xml.
 */
void CreateWirelessGatewayTaskResponsePrivate::parseCreateWirelessGatewayTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessGatewayTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
