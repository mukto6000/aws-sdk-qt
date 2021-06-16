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

#include "flushapicacheresponse.h"
#include "flushapicacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::FlushApiCacheResponse
 * \brief The FlushApiCacheResponse class provides an interace for AppSync FlushApiCache responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::flushApiCache
 */

/*!
 * Constructs a FlushApiCacheResponse object for \a reply to \a request, with parent \a parent.
 */
FlushApiCacheResponse::FlushApiCacheResponse(
        const FlushApiCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new FlushApiCacheResponsePrivate(this), parent)
{
    setRequest(new FlushApiCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FlushApiCacheRequest * FlushApiCacheResponse::request() const
{
    Q_D(const FlushApiCacheResponse);
    return static_cast<const FlushApiCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync FlushApiCache \a response.
 */
void FlushApiCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FlushApiCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::FlushApiCacheResponsePrivate
 * \brief The FlushApiCacheResponsePrivate class provides private implementation for FlushApiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a FlushApiCacheResponsePrivate object with public implementation \a q.
 */
FlushApiCacheResponsePrivate::FlushApiCacheResponsePrivate(
    FlushApiCacheResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync FlushApiCache response element from \a xml.
 */
void FlushApiCacheResponsePrivate::parseFlushApiCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushApiCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
