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

#include "updatewebaclresponse.h"
#include "updatewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  UpdateWebACLResponse
 *
 * @brief  Handles WAFRegional UpdateWebACL responses.
 *
 * @see    WAFRegionalClient::updateWebACL
 */

/**
 * @brief  Constructs a new UpdateWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateWebACLResponse::UpdateWebACLResponse(
        const UpdateWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateWebACLResponsePrivate(this), parent)
{
    setRequest(new UpdateWebACLRequest(request));
    setReply(reply);
}

const UpdateWebACLRequest * UpdateWebACLResponse::request() const
{
    Q_D(const UpdateWebACLResponse);
    return static_cast<const UpdateWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateWebACL response.
 *
 * @param  response  Response to parse.
 */
void UpdateWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateWebACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateWebACLResponsePrivate
 *
 * @brief  Private implementation for UpdateWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateWebACLResponse instance.
 */
UpdateWebACLResponsePrivate::UpdateWebACLResponsePrivate(
    UpdateWebACLResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateWebACLResponsePrivate::parseUpdateWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebACLResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws