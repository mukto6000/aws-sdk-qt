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

#include "deletegraphqlapiresponse.h"
#include "deletegraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiResponse
 * \brief The DeleteGraphqlApiResponse class provides an interace for AppSync DeleteGraphqlApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteGraphqlApi
 */

/*!
 * Constructs a DeleteGraphqlApiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGraphqlApiResponse::DeleteGraphqlApiResponse(
        const DeleteGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new DeleteGraphqlApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGraphqlApiRequest * DeleteGraphqlApiResponse::request() const
{
    Q_D(const DeleteGraphqlApiResponse);
    return static_cast<const DeleteGraphqlApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteGraphqlApi \a response.
 */
void DeleteGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGraphqlApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiResponsePrivate
 * \brief The DeleteGraphqlApiResponsePrivate class provides private implementation for DeleteGraphqlApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteGraphqlApiResponsePrivate object with public implementation \a q.
 */
DeleteGraphqlApiResponsePrivate::DeleteGraphqlApiResponsePrivate(
    DeleteGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteGraphqlApi response element from \a xml.
 */
void DeleteGraphqlApiResponsePrivate::parseDeleteGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGraphqlApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
