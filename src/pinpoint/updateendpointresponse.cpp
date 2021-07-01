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

#include "updateendpointresponse.h"
#include "updateendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointResponse
 * \brief The UpdateEndpointResponse class provides an interace for Pinpoint UpdateEndpoint responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEndpoint
 */

/*!
 * Constructs a UpdateEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEndpointResponse::UpdateEndpointResponse(
        const UpdateEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEndpointRequest * UpdateEndpointResponse::request() const
{
    Q_D(const UpdateEndpointResponse);
    return static_cast<const UpdateEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEndpoint \a response.
 */
void UpdateEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointResponsePrivate
 * \brief The UpdateEndpointResponsePrivate class provides private implementation for UpdateEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointResponsePrivate object with public implementation \a q.
 */
UpdateEndpointResponsePrivate::UpdateEndpointResponsePrivate(
    UpdateEndpointResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEndpoint response element from \a xml.
 */
void UpdateEndpointResponsePrivate::parseUpdateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
