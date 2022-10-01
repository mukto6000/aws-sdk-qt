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

#include "getstageresponse.h"
#include "getstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetStageResponse
 * \brief The GetStageResponse class provides an interace for GameSparks GetStage responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getStage
 */

/*!
 * Constructs a GetStageResponse object for \a reply to \a request, with parent \a parent.
 */
GetStageResponse::GetStageResponse(
        const GetStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetStageResponsePrivate(this), parent)
{
    setRequest(new GetStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStageRequest * GetStageResponse::request() const
{
    Q_D(const GetStageResponse);
    return static_cast<const GetStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetStage \a response.
 */
void GetStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetStageResponsePrivate
 * \brief The GetStageResponsePrivate class provides private implementation for GetStageResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetStageResponsePrivate object with public implementation \a q.
 */
GetStageResponsePrivate::GetStageResponsePrivate(
    GetStageResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetStage response element from \a xml.
 */
void GetStageResponsePrivate::parseGetStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
