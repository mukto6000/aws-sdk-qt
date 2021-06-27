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

#include "updateapnschannelresponse.h"
#include "updateapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelResponse
 * \brief The UpdateApnsChannelResponse class provides an interace for Pinpoint UpdateApnsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsChannel
 */

/*!
 * Constructs a UpdateApnsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsChannelResponse::UpdateApnsChannelResponse(
        const UpdateApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsChannelRequest * UpdateApnsChannelResponse::request() const
{
    return static_cast<const UpdateApnsChannelRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsChannel \a response.
 */
void UpdateApnsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelResponsePrivate
 * \brief The UpdateApnsChannelResponsePrivate class provides private implementation for UpdateApnsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsChannelResponsePrivate::UpdateApnsChannelResponsePrivate(
    UpdateApnsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsChannel response element from \a xml.
 */
void UpdateApnsChannelResponsePrivate::parseUpdateApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
