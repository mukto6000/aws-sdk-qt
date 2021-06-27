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

#include "updatecampaignresponse.h"
#include "updatecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateCampaignResponse
 * \brief The UpdateCampaignResponse class provides an interace for Pinpoint UpdateCampaign responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateCampaign
 */

/*!
 * Constructs a UpdateCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCampaignResponse::UpdateCampaignResponse(
        const UpdateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateCampaignResponsePrivate(this), parent)
{
    setRequest(new UpdateCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCampaignRequest * UpdateCampaignResponse::request() const
{
    return static_cast<const UpdateCampaignRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateCampaign \a response.
 */
void UpdateCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateCampaignResponsePrivate
 * \brief The UpdateCampaignResponsePrivate class provides private implementation for UpdateCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateCampaignResponsePrivate object with public implementation \a q.
 */
UpdateCampaignResponsePrivate::UpdateCampaignResponsePrivate(
    UpdateCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateCampaign response element from \a xml.
 */
void UpdateCampaignResponsePrivate::parseUpdateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
