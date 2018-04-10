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

#include "deleteproductresponse.h"
#include "deleteproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DeleteProductResponse
 *
 * @brief  Handles ServiceCatalog DeleteProduct responses.
 *
 * @see    ServiceCatalogClient::deleteProduct
 */

/**
 * @brief  Constructs a new DeleteProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProductResponse::DeleteProductResponse(
        const DeleteProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteProductResponsePrivate(this), parent)
{
    setRequest(new DeleteProductRequest(request));
    setReply(reply);
}

const DeleteProductRequest * DeleteProductResponse::request() const
{
    Q_D(const DeleteProductResponse);
    return static_cast<const DeleteProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DeleteProduct response.
 *
 * @param  response  Response to parse.
 */
void DeleteProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteProductResponsePrivate
 *
 * @brief  Private implementation for DeleteProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProductResponse instance.
 */
DeleteProductResponsePrivate::DeleteProductResponsePrivate(
    DeleteProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DeleteProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProductResponsePrivate::parseDeleteProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws