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

#include "listappsrequest.h"
#include "listappsrequest_p.h"
#include "listappsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::ListAppsRequest
 * \brief The ListAppsRequest class provides an interface for Sms ListApps requests.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::listApps
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppsRequest::ListAppsRequest(const ListAppsRequest &other)
    : SmsRequest(new ListAppsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppsRequest object.
 */
ListAppsRequest::ListAppsRequest()
    : SmsRequest(new ListAppsRequestPrivate(SmsRequest::ListAppsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppsResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::ListAppsRequestPrivate
 * \brief The ListAppsRequestPrivate class provides private implementation for ListAppsRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a ListAppsRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const SmsRequest::Action action, ListAppsRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppsRequest
 * class' copy constructor.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const ListAppsRequestPrivate &other, ListAppsRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
