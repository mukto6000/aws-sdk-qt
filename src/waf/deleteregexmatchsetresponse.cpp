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

#include "deleteregexmatchsetresponse.h"
#include "deleteregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  DeleteRegexMatchSetResponse
 *
 * @brief  Handles WAF DeleteRegexMatchSet responses.
 *
 * @see    WAFClient::deleteRegexMatchSet
 */

/**
 * @brief  Constructs a new DeleteRegexMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegexMatchSetResponse::DeleteRegexMatchSetResponse(
        const DeleteRegexMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteRegexMatchSetRequest(request));
    setReply(reply);
}

const DeleteRegexMatchSetRequest * DeleteRegexMatchSetResponse::request() const
{
    Q_D(const DeleteRegexMatchSetResponse);
    return static_cast<const DeleteRegexMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteRegexMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRegexMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRegexMatchSetResponsePrivate
 *
 * @brief  Private implementation for DeleteRegexMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegexMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRegexMatchSetResponse instance.
 */
DeleteRegexMatchSetResponsePrivate::DeleteRegexMatchSetResponsePrivate(
    DeleteRegexMatchSetResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteRegexMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRegexMatchSetResponsePrivate::parseDeleteRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws