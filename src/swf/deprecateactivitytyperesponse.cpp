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

#include "deprecateactivitytyperesponse.h"
#include "deprecateactivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  DeprecateActivityTypeResponse
 *
 * @brief  Handles SWF DeprecateActivityType responses.
 *
 * @see    SWFClient::deprecateActivityType
 */

/**
 * @brief  Constructs a new DeprecateActivityTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeprecateActivityTypeResponse::DeprecateActivityTypeResponse(
        const DeprecateActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DeprecateActivityTypeResponsePrivate(this), parent)
{
    setRequest(new DeprecateActivityTypeRequest(request));
    setReply(reply);
}

const DeprecateActivityTypeRequest * DeprecateActivityTypeResponse::request() const
{
    Q_D(const DeprecateActivityTypeResponse);
    return static_cast<const DeprecateActivityTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DeprecateActivityType response.
 *
 * @param  response  Response to parse.
 */
void DeprecateActivityTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeprecateActivityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeprecateActivityTypeResponsePrivate
 *
 * @brief  Private implementation for DeprecateActivityTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateActivityTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeprecateActivityTypeResponse instance.
 */
DeprecateActivityTypeResponsePrivate::DeprecateActivityTypeResponsePrivate(
    DeprecateActivityTypeResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF DeprecateActivityTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeprecateActivityTypeResponsePrivate::parseDeprecateActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateActivityTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws