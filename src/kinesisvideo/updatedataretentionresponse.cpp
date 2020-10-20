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

#include "updatedataretentionresponse.h"
#include "updatedataretentionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionResponse
 * \brief The UpdateDataRetentionResponse class provides an interace for KinesisVideo UpdateDataRetention responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateDataRetention
 */

/*!
 * Constructs a UpdateDataRetentionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataRetentionResponse::UpdateDataRetentionResponse(
        const UpdateDataRetentionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateDataRetentionResponsePrivate(this), parent)
{
    setRequest(new UpdateDataRetentionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataRetentionRequest * UpdateDataRetentionResponse::request() const
{
    Q_D(const UpdateDataRetentionResponse);
    return static_cast<const UpdateDataRetentionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UpdateDataRetention \a response.
 */
void UpdateDataRetentionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataRetentionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionResponsePrivate
 * \brief The UpdateDataRetentionResponsePrivate class provides private implementation for UpdateDataRetentionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateDataRetentionResponsePrivate object with public implementation \a q.
 */
UpdateDataRetentionResponsePrivate::UpdateDataRetentionResponsePrivate(
    UpdateDataRetentionResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UpdateDataRetention response element from \a xml.
 */
void UpdateDataRetentionResponsePrivate::parseUpdateDataRetentionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataRetentionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
