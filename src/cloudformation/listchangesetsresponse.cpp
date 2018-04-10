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

#include "listchangesetsresponse.h"
#include "listchangesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListChangeSetsResponse
 *
 * @brief  Handles CloudFormation ListChangeSets responses.
 *
 * @see    CloudFormationClient::listChangeSets
 */

/**
 * @brief  Constructs a new ListChangeSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListChangeSetsResponse::ListChangeSetsResponse(
        const ListChangeSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListChangeSetsResponsePrivate(this), parent)
{
    setRequest(new ListChangeSetsRequest(request));
    setReply(reply);
}

const ListChangeSetsRequest * ListChangeSetsResponse::request() const
{
    Q_D(const ListChangeSetsResponse);
    return static_cast<const ListChangeSetsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListChangeSets response.
 *
 * @param  response  Response to parse.
 */
void ListChangeSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListChangeSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListChangeSetsResponsePrivate
 *
 * @brief  Private implementation for ListChangeSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListChangeSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListChangeSetsResponse instance.
 */
ListChangeSetsResponsePrivate::ListChangeSetsResponsePrivate(
    ListChangeSetsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListChangeSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListChangeSetsResponsePrivate::parseListChangeSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChangeSetsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws