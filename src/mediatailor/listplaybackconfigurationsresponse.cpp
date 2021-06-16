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

#include "listplaybackconfigurationsresponse.h"
#include "listplaybackconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListPlaybackConfigurationsResponse
 * \brief The ListPlaybackConfigurationsResponse class provides an interace for MediaTailor ListPlaybackConfigurations responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDK to configure scalable ad insertion for your live and VOD content. With AWS
 *  Elemental MediaTailor, you can serve targeted ads to viewers while maintaining broadcast quality in over-the-top (OTT)
 *  video applications. For information about using the service, including detailed information about the settings covered
 *  in this guide, see the AWS Elemental MediaTailor User Guide.<p>Through the SDK, you manage AWS Elemental MediaTailor
 *  configurations the same as you do through the console. For example, you specify ad insertion behavior and mapping
 *  information for the origin server and the ad decision server
 *
 * \sa MediaTailorClient::listPlaybackConfigurations
 */

/*!
 * Constructs a ListPlaybackConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPlaybackConfigurationsResponse::ListPlaybackConfigurationsResponse(
        const ListPlaybackConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListPlaybackConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListPlaybackConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPlaybackConfigurationsRequest * ListPlaybackConfigurationsResponse::request() const
{
    Q_D(const ListPlaybackConfigurationsResponse);
    return static_cast<const ListPlaybackConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListPlaybackConfigurations \a response.
 */
void ListPlaybackConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPlaybackConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListPlaybackConfigurationsResponsePrivate
 * \brief The ListPlaybackConfigurationsResponsePrivate class provides private implementation for ListPlaybackConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListPlaybackConfigurationsResponsePrivate object with public implementation \a q.
 */
ListPlaybackConfigurationsResponsePrivate::ListPlaybackConfigurationsResponsePrivate(
    ListPlaybackConfigurationsResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListPlaybackConfigurations response element from \a xml.
 */
void ListPlaybackConfigurationsResponsePrivate::parseListPlaybackConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlaybackConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
