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

#include "getgameconfigurationresponse.h"
#include "getgameconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGameConfigurationResponse
 * \brief The GetGameConfigurationResponse class provides an interace for GameSparks GetGameConfiguration responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGameConfiguration
 */

/*!
 * Constructs a GetGameConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetGameConfigurationResponse::GetGameConfigurationResponse(
        const GetGameConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetGameConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetGameConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGameConfigurationRequest * GetGameConfigurationResponse::request() const
{
    Q_D(const GetGameConfigurationResponse);
    return static_cast<const GetGameConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetGameConfiguration \a response.
 */
void GetGameConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGameConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetGameConfigurationResponsePrivate
 * \brief The GetGameConfigurationResponsePrivate class provides private implementation for GetGameConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGameConfigurationResponsePrivate object with public implementation \a q.
 */
GetGameConfigurationResponsePrivate::GetGameConfigurationResponsePrivate(
    GetGameConfigurationResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetGameConfiguration response element from \a xml.
 */
void GetGameConfigurationResponsePrivate::parseGetGameConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGameConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
