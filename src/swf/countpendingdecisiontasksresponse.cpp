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

#include "countpendingdecisiontasksresponse.h"
#include "countpendingdecisiontasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  CountPendingDecisionTasksResponse
 *
 * @brief  Handles SWF CountPendingDecisionTasks responses.
 *
 * @see    SWFClient::countPendingDecisionTasks
 */

/**
 * @brief  Constructs a new CountPendingDecisionTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CountPendingDecisionTasksResponse::CountPendingDecisionTasksResponse(
        const CountPendingDecisionTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new CountPendingDecisionTasksResponsePrivate(this), parent)
{
    setRequest(new CountPendingDecisionTasksRequest(request));
    setReply(reply);
}

const CountPendingDecisionTasksRequest * CountPendingDecisionTasksResponse::request() const
{
    Q_D(const CountPendingDecisionTasksResponse);
    return static_cast<const CountPendingDecisionTasksRequest *>(d->request);
}

/**
 * @brief  Parse a SWF CountPendingDecisionTasks response.
 *
 * @param  response  Response to parse.
 */
void CountPendingDecisionTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(CountPendingDecisionTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CountPendingDecisionTasksResponsePrivate
 *
 * @brief  Private implementation for CountPendingDecisionTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountPendingDecisionTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CountPendingDecisionTasksResponse instance.
 */
CountPendingDecisionTasksResponsePrivate::CountPendingDecisionTasksResponsePrivate(
    CountPendingDecisionTasksResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF CountPendingDecisionTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CountPendingDecisionTasksResponsePrivate::parseCountPendingDecisionTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountPendingDecisionTasksResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws