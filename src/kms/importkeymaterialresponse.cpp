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

#include "importkeymaterialresponse.h"
#include "importkeymaterialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  ImportKeyMaterialResponse
 *
 * @brief  Handles KMS ImportKeyMaterial responses.
 *
 * @see    KMSClient::importKeyMaterial
 */

/**
 * @brief  Constructs a new ImportKeyMaterialResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportKeyMaterialResponse::ImportKeyMaterialResponse(
        const ImportKeyMaterialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ImportKeyMaterialResponsePrivate(this), parent)
{
    setRequest(new ImportKeyMaterialRequest(request));
    setReply(reply);
}

const ImportKeyMaterialRequest * ImportKeyMaterialResponse::request() const
{
    Q_D(const ImportKeyMaterialResponse);
    return static_cast<const ImportKeyMaterialRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ImportKeyMaterial response.
 *
 * @param  response  Response to parse.
 */
void ImportKeyMaterialResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportKeyMaterialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportKeyMaterialResponsePrivate
 *
 * @brief  Private implementation for ImportKeyMaterialResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportKeyMaterialResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportKeyMaterialResponse instance.
 */
ImportKeyMaterialResponsePrivate::ImportKeyMaterialResponsePrivate(
    ImportKeyMaterialResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS ImportKeyMaterialResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportKeyMaterialResponsePrivate::parseImportKeyMaterialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportKeyMaterialResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws