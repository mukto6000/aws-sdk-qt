// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnotificationsrequest.h"
#include "listnotificationsrequest_p.h"
#include "listnotificationsresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListNotificationsRequest
 * \brief The ListNotificationsRequest class provides an interface for WellArchitected ListNotifications requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listNotifications
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotificationsRequest::ListNotificationsRequest(const ListNotificationsRequest &other)
    : WellArchitectedRequest(new ListNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotificationsRequest object.
 */
ListNotificationsRequest::ListNotificationsRequest()
    : WellArchitectedRequest(new ListNotificationsRequestPrivate(WellArchitectedRequest::ListNotificationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNotificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotificationsResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ListNotificationsRequestPrivate
 * \brief The ListNotificationsRequestPrivate class provides private implementation for ListNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListNotificationsRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ListNotificationsRequestPrivate::ListNotificationsRequestPrivate(
    const WellArchitectedRequest::Action action, ListNotificationsRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotificationsRequest
 * class' copy constructor.
 */
ListNotificationsRequestPrivate::ListNotificationsRequestPrivate(
    const ListNotificationsRequestPrivate &other, ListNotificationsRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
