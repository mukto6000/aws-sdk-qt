// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestgridsessionsrequest.h"
#include "listtestgridsessionsrequest_p.h"
#include "listtestgridsessionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionsRequest
 * \brief The ListTestGridSessionsRequest class provides an interface for DeviceFarm ListTestGridSessions requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::listTestGridSessions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestGridSessionsRequest::ListTestGridSessionsRequest(const ListTestGridSessionsRequest &other)
    : DeviceFarmRequest(new ListTestGridSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestGridSessionsRequest object.
 */
ListTestGridSessionsRequest::ListTestGridSessionsRequest()
    : DeviceFarmRequest(new ListTestGridSessionsRequestPrivate(DeviceFarmRequest::ListTestGridSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestGridSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestGridSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestGridSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestGridSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionsRequestPrivate
 * \brief The ListTestGridSessionsRequestPrivate class provides private implementation for ListTestGridSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestGridSessionsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListTestGridSessionsRequestPrivate::ListTestGridSessionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListTestGridSessionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestGridSessionsRequest
 * class' copy constructor.
 */
ListTestGridSessionsRequestPrivate::ListTestGridSessionsRequestPrivate(
    const ListTestGridSessionsRequestPrivate &other, ListTestGridSessionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
