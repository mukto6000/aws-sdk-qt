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

#include "deletestageresponse.h"
#include "deletestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DeleteStageResponse
 * \brief The DeleteStageResponse class provides an interace for GameSparks DeleteStage responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::deleteStage
 */

/*!
 * Constructs a DeleteStageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStageResponse::DeleteStageResponse(
        const DeleteStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new DeleteStageResponsePrivate(this), parent)
{
    setRequest(new DeleteStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStageRequest * DeleteStageResponse::request() const
{
    Q_D(const DeleteStageResponse);
    return static_cast<const DeleteStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks DeleteStage \a response.
 */
void DeleteStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::DeleteStageResponsePrivate
 * \brief The DeleteStageResponsePrivate class provides private implementation for DeleteStageResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DeleteStageResponsePrivate object with public implementation \a q.
 */
DeleteStageResponsePrivate::DeleteStageResponsePrivate(
    DeleteStageResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks DeleteStage response element from \a xml.
 */
void DeleteStageResponsePrivate::parseDeleteStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
