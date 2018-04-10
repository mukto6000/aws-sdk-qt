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

#include "applypendingmaintenanceactionresponse.h"
#include "applypendingmaintenanceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  ApplyPendingMaintenanceActionResponse
 *
 * @brief  Handles RDS ApplyPendingMaintenanceAction responses.
 *
 * @see    RDSClient::applyPendingMaintenanceAction
 */

/**
 * @brief  Constructs a new ApplyPendingMaintenanceActionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplyPendingMaintenanceActionResponse::ApplyPendingMaintenanceActionResponse(
        const ApplyPendingMaintenanceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ApplyPendingMaintenanceActionResponsePrivate(this), parent)
{
    setRequest(new ApplyPendingMaintenanceActionRequest(request));
    setReply(reply);
}

const ApplyPendingMaintenanceActionRequest * ApplyPendingMaintenanceActionResponse::request() const
{
    Q_D(const ApplyPendingMaintenanceActionResponse);
    return static_cast<const ApplyPendingMaintenanceActionRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ApplyPendingMaintenanceAction response.
 *
 * @param  response  Response to parse.
 */
void ApplyPendingMaintenanceActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(ApplyPendingMaintenanceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ApplyPendingMaintenanceActionResponsePrivate
 *
 * @brief  Private implementation for ApplyPendingMaintenanceActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplyPendingMaintenanceActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplyPendingMaintenanceActionResponse instance.
 */
ApplyPendingMaintenanceActionResponsePrivate::ApplyPendingMaintenanceActionResponsePrivate(
    ApplyPendingMaintenanceActionResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS ApplyPendingMaintenanceActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ApplyPendingMaintenanceActionResponsePrivate::parseApplyPendingMaintenanceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyPendingMaintenanceActionResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws