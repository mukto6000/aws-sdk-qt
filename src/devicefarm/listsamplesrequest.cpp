// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsamplesrequest.h"
#include "listsamplesrequest_p.h"
#include "listsamplesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSamplesRequest
 * \brief The ListSamplesRequest class provides an interface for DeviceFarm ListSamples requests.
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
 * \sa DeviceFarmClient::listSamples
 */

/*!
 * Constructs a copy of \a other.
 */
ListSamplesRequest::ListSamplesRequest(const ListSamplesRequest &other)
    : DeviceFarmRequest(new ListSamplesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSamplesRequest object.
 */
ListSamplesRequest::ListSamplesRequest()
    : DeviceFarmRequest(new ListSamplesRequestPrivate(DeviceFarmRequest::ListSamplesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSamplesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSamplesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSamplesRequest::response(QNetworkReply * const reply) const
{
    return new ListSamplesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListSamplesRequestPrivate
 * \brief The ListSamplesRequestPrivate class provides private implementation for ListSamplesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListSamplesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListSamplesRequestPrivate::ListSamplesRequestPrivate(
    const DeviceFarmRequest::Action action, ListSamplesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSamplesRequest
 * class' copy constructor.
 */
ListSamplesRequestPrivate::ListSamplesRequestPrivate(
    const ListSamplesRequestPrivate &other, ListSamplesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
