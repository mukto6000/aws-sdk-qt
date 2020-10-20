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

#include "deleteconfigresponse.h"
#include "deleteconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteConfigResponse
 * \brief The DeleteConfigResponse class provides an interace for GroundStation DeleteConfig responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteConfig
 */

/*!
 * Constructs a DeleteConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigResponse::DeleteConfigResponse(
        const DeleteConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new DeleteConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigRequest * DeleteConfigResponse::request() const
{
    Q_D(const DeleteConfigResponse);
    return static_cast<const DeleteConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation DeleteConfig \a response.
 */
void DeleteConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::DeleteConfigResponsePrivate
 * \brief The DeleteConfigResponsePrivate class provides private implementation for DeleteConfigResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteConfigResponsePrivate object with public implementation \a q.
 */
DeleteConfigResponsePrivate::DeleteConfigResponsePrivate(
    DeleteConfigResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation DeleteConfig response element from \a xml.
 */
void DeleteConfigResponsePrivate::parseDeleteConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
