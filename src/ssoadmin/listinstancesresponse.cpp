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

#include "listinstancesresponse.h"
#include "listinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListInstancesResponse
 * \brief The ListInstancesResponse class provides an interace for SSOAdmin ListInstances responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listInstances
 */

/*!
 * Constructs a ListInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstancesResponse::ListInstancesResponse(
        const ListInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListInstancesResponsePrivate(this), parent)
{
    setRequest(new ListInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstancesRequest * ListInstancesResponse::request() const
{
    return static_cast<const ListInstancesRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListInstances \a response.
 */
void ListInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListInstancesResponsePrivate
 * \brief The ListInstancesResponsePrivate class provides private implementation for ListInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListInstancesResponsePrivate object with public implementation \a q.
 */
ListInstancesResponsePrivate::ListInstancesResponsePrivate(
    ListInstancesResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListInstances response element from \a xml.
 */
void ListInstancesResponsePrivate::parseListInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
