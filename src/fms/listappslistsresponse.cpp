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

#include "listappslistsresponse.h"
#include "listappslistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListAppsListsResponse
 * \brief The ListAppsListsResponse class provides an interace for FMS ListAppsLists responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::listAppsLists
 */

/*!
 * Constructs a ListAppsListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppsListsResponse::ListAppsListsResponse(
        const ListAppsListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListAppsListsResponsePrivate(this), parent)
{
    setRequest(new ListAppsListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppsListsRequest * ListAppsListsResponse::request() const
{
    Q_D(const ListAppsListsResponse);
    return static_cast<const ListAppsListsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS ListAppsLists \a response.
 */
void ListAppsListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppsListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::ListAppsListsResponsePrivate
 * \brief The ListAppsListsResponsePrivate class provides private implementation for ListAppsListsResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a ListAppsListsResponsePrivate object with public implementation \a q.
 */
ListAppsListsResponsePrivate::ListAppsListsResponsePrivate(
    ListAppsListsResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a FMS ListAppsLists response element from \a xml.
 */
void ListAppsListsResponsePrivate::parseListAppsListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppsListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FMS
} // namespace QtAws
