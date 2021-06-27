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

#include "listtagsforstreamresponse.h"
#include "listtagsforstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::ListTagsForStreamResponse
 * \brief The ListTagsForStreamResponse class provides an interace for KinesisVideo ListTagsForStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::listTagsForStream
 */

/*!
 * Constructs a ListTagsForStreamResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForStreamResponse::ListTagsForStreamResponse(
        const ListTagsForStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new ListTagsForStreamResponsePrivate(this), parent)
{
    setRequest(new ListTagsForStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForStreamRequest * ListTagsForStreamResponse::request() const
{
    return static_cast<const ListTagsForStreamRequest *>(KinesisVideoResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisVideo ListTagsForStream \a response.
 */
void ListTagsForStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::ListTagsForStreamResponsePrivate
 * \brief The ListTagsForStreamResponsePrivate class provides private implementation for ListTagsForStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a ListTagsForStreamResponsePrivate object with public implementation \a q.
 */
ListTagsForStreamResponsePrivate::ListTagsForStreamResponsePrivate(
    ListTagsForStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo ListTagsForStream response element from \a xml.
 */
void ListTagsForStreamResponsePrivate::parseListTagsForStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
