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

#include "updatedatasetgroupresponse.h"
#include "updatedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::UpdateDatasetGroupResponse
 * \brief The UpdateDatasetGroupResponse class provides an interace for Forecast UpdateDatasetGroup responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::updateDatasetGroup
 */

/*!
 * Constructs a UpdateDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatasetGroupResponse::UpdateDatasetGroupResponse(
        const UpdateDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new UpdateDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatasetGroupRequest * UpdateDatasetGroupResponse::request() const
{
    Q_D(const UpdateDatasetGroupResponse);
    return static_cast<const UpdateDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast UpdateDatasetGroup \a response.
 */
void UpdateDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::UpdateDatasetGroupResponsePrivate
 * \brief The UpdateDatasetGroupResponsePrivate class provides private implementation for UpdateDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a UpdateDatasetGroupResponsePrivate object with public implementation \a q.
 */
UpdateDatasetGroupResponsePrivate::UpdateDatasetGroupResponsePrivate(
    UpdateDatasetGroupResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast UpdateDatasetGroup response element from \a xml.
 */
void UpdateDatasetGroupResponsePrivate::parseUpdateDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
