/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updaterecordsresponse.h"
#include "updaterecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  UpdateRecordsResponse
 *
 * @brief  Handles CognitoSync UpdateRecords responses.
 *
 * @see    CognitoSyncClient::updateRecords
 */

/**
 * @brief  Constructs a new UpdateRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRecordsResponse::UpdateRecordsResponse(
        const UpdateRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new UpdateRecordsResponsePrivate(this), parent)
{
    setRequest(new UpdateRecordsRequest(request));
    setReply(reply);
}

const UpdateRecordsRequest * UpdateRecordsResponse::request() const
{
    Q_D(const UpdateRecordsResponse);
    return static_cast<const UpdateRecordsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync UpdateRecords response.
 *
 * @param  response  Response to parse.
 */
void UpdateRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRecordsResponsePrivate
 *
 * @brief  Private implementation for UpdateRecordsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRecordsResponse instance.
 */
UpdateRecordsResponsePrivate::UpdateRecordsResponsePrivate(
    UpdateRecordsResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync UpdateRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRecordsResponsePrivate::parseUpdateRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecordsResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws