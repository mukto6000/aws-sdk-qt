// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrunrequest.h"
#include "getrunrequest_p.h"
#include "getrunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRunRequest
 * \brief The GetRunRequest class provides an interface for DeviceFarm GetRun requests.
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
 * \sa DeviceFarmClient::getRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetRunRequest::GetRunRequest(const GetRunRequest &other)
    : DeviceFarmRequest(new GetRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRunRequest object.
 */
GetRunRequest::GetRunRequest()
    : DeviceFarmRequest(new GetRunRequestPrivate(DeviceFarmRequest::GetRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRunRequest::response(QNetworkReply * const reply) const
{
    return new GetRunResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetRunRequestPrivate
 * \brief The GetRunRequestPrivate class provides private implementation for GetRunRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetRunRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetRunRequestPrivate::GetRunRequestPrivate(
    const DeviceFarmRequest::Action action, GetRunRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRunRequest
 * class' copy constructor.
 */
GetRunRequestPrivate::GetRunRequestPrivate(
    const GetRunRequestPrivate &other, GetRunRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
