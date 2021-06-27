/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listsubscriptiondefinitionversionsresponse.h"
#include "listsubscriptiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionVersionsResponse
 * \brief The ListSubscriptionDefinitionVersionsResponse class provides an interace for Greengrass ListSubscriptionDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listSubscriptionDefinitionVersions
 */

/*!
 * Constructs a ListSubscriptionDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubscriptionDefinitionVersionsResponse::ListSubscriptionDefinitionVersionsResponse(
        const ListSubscriptionDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListSubscriptionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubscriptionDefinitionVersionsRequest * ListSubscriptionDefinitionVersionsResponse::request() const
{
    return static_cast<const ListSubscriptionDefinitionVersionsRequest *>(GreengrassResponse::request());
}

/*!
 * \reimp
 * Parses a successful Greengrass ListSubscriptionDefinitionVersions \a response.
 */
void ListSubscriptionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubscriptionDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionVersionsResponsePrivate
 * \brief The ListSubscriptionDefinitionVersionsResponsePrivate class provides private implementation for ListSubscriptionDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListSubscriptionDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListSubscriptionDefinitionVersionsResponsePrivate::ListSubscriptionDefinitionVersionsResponsePrivate(
    ListSubscriptionDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListSubscriptionDefinitionVersions response element from \a xml.
 */
void ListSubscriptionDefinitionVersionsResponsePrivate::parseListSubscriptionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
