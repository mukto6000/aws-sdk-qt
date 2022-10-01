// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworkprofilesrequest.h"
#include "listnetworkprofilesrequest_p.h"
#include "listnetworkprofilesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesRequest
 * \brief The ListNetworkProfilesRequest class provides an interface for DeviceFarm ListNetworkProfiles requests.
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
 * \sa DeviceFarmClient::listNetworkProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworkProfilesRequest::ListNetworkProfilesRequest(const ListNetworkProfilesRequest &other)
    : DeviceFarmRequest(new ListNetworkProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworkProfilesRequest object.
 */
ListNetworkProfilesRequest::ListNetworkProfilesRequest()
    : DeviceFarmRequest(new ListNetworkProfilesRequestPrivate(DeviceFarmRequest::ListNetworkProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworkProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworkProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworkProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworkProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesRequestPrivate
 * \brief The ListNetworkProfilesRequestPrivate class provides private implementation for ListNetworkProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListNetworkProfilesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListNetworkProfilesRequestPrivate::ListNetworkProfilesRequestPrivate(
    const DeviceFarmRequest::Action action, ListNetworkProfilesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworkProfilesRequest
 * class' copy constructor.
 */
ListNetworkProfilesRequestPrivate::ListNetworkProfilesRequestPrivate(
    const ListNetworkProfilesRequestPrivate &other, ListNetworkProfilesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
