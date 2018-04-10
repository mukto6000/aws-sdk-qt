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

#include "exportbundleresponse.h"
#include "exportbundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/**
 * @class  ExportBundleResponse
 *
 * @brief  Handles Mobile ExportBundle responses.
 *
 * @see    MobileClient::exportBundle
 */

/**
 * @brief  Constructs a new ExportBundleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExportBundleResponse::ExportBundleResponse(
        const ExportBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportBundleResponsePrivate(this), parent)
{
    setRequest(new ExportBundleRequest(request));
    setReply(reply);
}

const ExportBundleRequest * ExportBundleResponse::request() const
{
    Q_D(const ExportBundleResponse);
    return static_cast<const ExportBundleRequest *>(d->request);
}

/**
 * @brief  Parse a Mobile ExportBundle response.
 *
 * @param  response  Response to parse.
 */
void ExportBundleResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExportBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ExportBundleResponsePrivate
 *
 * @brief  Private implementation for ExportBundleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExportBundleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExportBundleResponse instance.
 */
ExportBundleResponsePrivate::ExportBundleResponsePrivate(
    ExportBundleResponse * const q) : MobileResponsePrivate(q)
{

}

/**
 * @brief  Parse an Mobile ExportBundleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExportBundleResponsePrivate::parseExportBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportBundleResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws