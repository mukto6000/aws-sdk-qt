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

#include "listeventsubscriptionsresponse.h"
#include "listeventsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListEventSubscriptionsResponse
 * \brief The ListEventSubscriptionsResponse class provides an interace for Inspector ListEventSubscriptions responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listEventSubscriptions
 */

/*!
 * Constructs a ListEventSubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventSubscriptionsResponse::ListEventSubscriptionsResponse(
        const ListEventSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListEventSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new ListEventSubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventSubscriptionsRequest * ListEventSubscriptionsResponse::request() const
{
    return static_cast<const ListEventSubscriptionsRequest *>(InspectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful Inspector ListEventSubscriptions \a response.
 */
void ListEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListEventSubscriptionsResponsePrivate
 * \brief The ListEventSubscriptionsResponsePrivate class provides private implementation for ListEventSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListEventSubscriptionsResponsePrivate object with public implementation \a q.
 */
ListEventSubscriptionsResponsePrivate::ListEventSubscriptionsResponsePrivate(
    ListEventSubscriptionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListEventSubscriptions response element from \a xml.
 */
void ListEventSubscriptionsResponsePrivate::parseListEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventSubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
