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

#include "listgithubaccounttokennamesresponse.h"
#include "listgithubaccounttokennamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  ListGitHubAccountTokenNamesResponse
 *
 * @brief  Handles CodeDeploy ListGitHubAccountTokenNames responses.
 *
 * @see    CodeDeployClient::listGitHubAccountTokenNames
 */

/**
 * @brief  Constructs a new ListGitHubAccountTokenNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGitHubAccountTokenNamesResponse::ListGitHubAccountTokenNamesResponse(
        const ListGitHubAccountTokenNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListGitHubAccountTokenNamesResponsePrivate(this), parent)
{
    setRequest(new ListGitHubAccountTokenNamesRequest(request));
    setReply(reply);
}

const ListGitHubAccountTokenNamesRequest * ListGitHubAccountTokenNamesResponse::request() const
{
    Q_D(const ListGitHubAccountTokenNamesResponse);
    return static_cast<const ListGitHubAccountTokenNamesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListGitHubAccountTokenNames response.
 *
 * @param  response  Response to parse.
 */
void ListGitHubAccountTokenNamesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGitHubAccountTokenNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGitHubAccountTokenNamesResponsePrivate
 *
 * @brief  Private implementation for ListGitHubAccountTokenNamesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGitHubAccountTokenNamesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGitHubAccountTokenNamesResponse instance.
 */
ListGitHubAccountTokenNamesResponsePrivate::ListGitHubAccountTokenNamesResponsePrivate(
    ListGitHubAccountTokenNamesResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListGitHubAccountTokenNamesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGitHubAccountTokenNamesResponsePrivate::parseListGitHubAccountTokenNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGitHubAccountTokenNamesResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws