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

#include "createcomponenttyperesponse.h"
#include "createcomponenttyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateComponentTypeResponse
 * \brief The CreateComponentTypeResponse class provides an interace for IoTTwinMaker CreateComponentType responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createComponentType
 */

/*!
 * Constructs a CreateComponentTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComponentTypeResponse::CreateComponentTypeResponse(
        const CreateComponentTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new CreateComponentTypeResponsePrivate(this), parent)
{
    setRequest(new CreateComponentTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComponentTypeRequest * CreateComponentTypeResponse::request() const
{
    Q_D(const CreateComponentTypeResponse);
    return static_cast<const CreateComponentTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker CreateComponentType \a response.
 */
void CreateComponentTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComponentTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::CreateComponentTypeResponsePrivate
 * \brief The CreateComponentTypeResponsePrivate class provides private implementation for CreateComponentTypeResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateComponentTypeResponsePrivate object with public implementation \a q.
 */
CreateComponentTypeResponsePrivate::CreateComponentTypeResponsePrivate(
    CreateComponentTypeResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker CreateComponentType response element from \a xml.
 */
void CreateComponentTypeResponsePrivate::parseCreateComponentTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComponentTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
