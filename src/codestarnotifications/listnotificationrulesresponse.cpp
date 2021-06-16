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

#include "listnotificationrulesresponse.h"
#include "listnotificationrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStarNotifications {

/*!
 * \class QtAws::CodeStarNotifications::ListNotificationRulesResponse
 * \brief The ListNotificationRulesResponse class provides an interace for CodeStarNotifications ListNotificationRules responses.
 *
 * \inmodule QtAwsCodeStarNotifications
 *
 *  This AWS CodeStar Notifications API Reference provides descriptions and usage examples of the operations and data types
 *  for the AWS CodeStar Notifications API. You can use the AWS CodeStar Notifications API to work with the following
 * 
 *  objects>
 * 
 *  Notification rules, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateNotificationRule</a>, which creates a notification rule for a resource in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>DeleteNotificationRule</a>, which deletes a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeNotificationRule</a>, which provides information about a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListNotificationRules</a>, which lists the notification rules associated with your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UpdateNotificationRule</a>, which changes the name, events, or targets associated with a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Subscribe</a>, which subscribes a target to a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Unsubscribe</a>, which removes a target from a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Targets, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>DeleteTarget</a>, which removes a notification rule target (SNS topic) from a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListTargets</a>, which lists the targets associated with a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Events, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListEventTypes</a>, which lists the event types you can include in a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Tags, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListTagsForResource</a>, which lists the tags already associated with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>TagResource</a>, which associates a tag you provide with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UntagResource</a>, which removes a tag from a notification rule in your account.
 * 
 *  </p </li> </ul>
 * 
 *  For information about how to use AWS CodeStar Notifications, see link in the CodeStarNotifications User Guide.
 *
 * \sa CodeStarNotificationsClient::listNotificationRules
 */

/*!
 * Constructs a ListNotificationRulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNotificationRulesResponse::ListNotificationRulesResponse(
        const ListNotificationRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarNotificationsResponse(new ListNotificationRulesResponsePrivate(this), parent)
{
    setRequest(new ListNotificationRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNotificationRulesRequest * ListNotificationRulesResponse::request() const
{
    Q_D(const ListNotificationRulesResponse);
    return static_cast<const ListNotificationRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeStarNotifications ListNotificationRules \a response.
 */
void ListNotificationRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNotificationRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeStarNotifications::ListNotificationRulesResponsePrivate
 * \brief The ListNotificationRulesResponsePrivate class provides private implementation for ListNotificationRulesResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * Constructs a ListNotificationRulesResponsePrivate object with public implementation \a q.
 */
ListNotificationRulesResponsePrivate::ListNotificationRulesResponsePrivate(
    ListNotificationRulesResponse * const q) : CodeStarNotificationsResponsePrivate(q)
{

}

/*!
 * Parses a CodeStarNotifications ListNotificationRules response element from \a xml.
 */
void ListNotificationRulesResponsePrivate::parseListNotificationRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotificationRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeStarNotifications
} // namespace QtAws
