// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuniqueproblemsrequest.h"
#include "listuniqueproblemsrequest_p.h"
#include "listuniqueproblemsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUniqueProblemsRequest
 * \brief The ListUniqueProblemsRequest class provides an interface for DeviceFarm ListUniqueProblems requests.
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
 * \sa DeviceFarmClient::listUniqueProblems
 */

/*!
 * Constructs a copy of \a other.
 */
ListUniqueProblemsRequest::ListUniqueProblemsRequest(const ListUniqueProblemsRequest &other)
    : DeviceFarmRequest(new ListUniqueProblemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUniqueProblemsRequest object.
 */
ListUniqueProblemsRequest::ListUniqueProblemsRequest()
    : DeviceFarmRequest(new ListUniqueProblemsRequestPrivate(DeviceFarmRequest::ListUniqueProblemsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUniqueProblemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUniqueProblemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUniqueProblemsRequest::response(QNetworkReply * const reply) const
{
    return new ListUniqueProblemsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListUniqueProblemsRequestPrivate
 * \brief The ListUniqueProblemsRequestPrivate class provides private implementation for ListUniqueProblemsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListUniqueProblemsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListUniqueProblemsRequestPrivate::ListUniqueProblemsRequestPrivate(
    const DeviceFarmRequest::Action action, ListUniqueProblemsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUniqueProblemsRequest
 * class' copy constructor.
 */
ListUniqueProblemsRequestPrivate::ListUniqueProblemsRequestPrivate(
    const ListUniqueProblemsRequestPrivate &other, ListUniqueProblemsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
