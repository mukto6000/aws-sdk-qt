// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventtypesrequest.h"
#include "listeventtypesrequest_p.h"
#include "listeventtypesresponse.h"
#include "codestarnotificationsrequest_p.h"

namespace QtAws {
namespace CodestarNotifications {

/*!
 * \class QtAws::CodestarNotifications::ListEventTypesRequest
 * \brief The ListEventTypesRequest class provides an interface for CodestarNotifications ListEventTypes requests.
 *
 * \inmodule QtAwsCodestarNotifications
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
 *  <a>DeleteTarget</a>, which removes a notification rule target from a notification rule.
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
 *  For information about how to use AWS CodeStar Notifications, see the <a
 *  href="https://docs.aws.amazon.com/dtconsole/latest/userguide/what-is-dtconsole.html">Amazon Web Services Developer Tools
 *  Console User Guide</a>.
 *
 * \sa CodestarNotificationsClient::listEventTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventTypesRequest::ListEventTypesRequest(const ListEventTypesRequest &other)
    : CodestarNotificationsRequest(new ListEventTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventTypesRequest object.
 */
ListEventTypesRequest::ListEventTypesRequest()
    : CodestarNotificationsRequest(new ListEventTypesRequestPrivate(CodestarNotificationsRequest::ListEventTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListEventTypesResponse(*this, reply);
}

/*!
 * \class QtAws::CodestarNotifications::ListEventTypesRequestPrivate
 * \brief The ListEventTypesRequestPrivate class provides private implementation for ListEventTypesRequest.
 * \internal
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a ListEventTypesRequestPrivate object for CodestarNotifications \a action,
 * with public implementation \a q.
 */
ListEventTypesRequestPrivate::ListEventTypesRequestPrivate(
    const CodestarNotificationsRequest::Action action, ListEventTypesRequest * const q)
    : CodestarNotificationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventTypesRequest
 * class' copy constructor.
 */
ListEventTypesRequestPrivate::ListEventTypesRequestPrivate(
    const ListEventTypesRequestPrivate &other, ListEventTypesRequest * const q)
    : CodestarNotificationsRequestPrivate(other, q)
{

}

} // namespace CodestarNotifications
} // namespace QtAws
