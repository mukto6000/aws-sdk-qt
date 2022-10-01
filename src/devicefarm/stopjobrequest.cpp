// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopjobrequest.h"
#include "stopjobrequest_p.h"
#include "stopjobresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopJobRequest
 * \brief The StopJobRequest class provides an interface for DeviceFarm StopJob requests.
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
 * \sa DeviceFarmClient::stopJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopJobRequest::StopJobRequest(const StopJobRequest &other)
    : DeviceFarmRequest(new StopJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopJobRequest object.
 */
StopJobRequest::StopJobRequest()
    : DeviceFarmRequest(new StopJobRequestPrivate(DeviceFarmRequest::StopJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopJobRequest::response(QNetworkReply * const reply) const
{
    return new StopJobResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::StopJobRequestPrivate
 * \brief The StopJobRequestPrivate class provides private implementation for StopJobRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopJobRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
StopJobRequestPrivate::StopJobRequestPrivate(
    const DeviceFarmRequest::Action action, StopJobRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopJobRequest
 * class' copy constructor.
 */
StopJobRequestPrivate::StopJobRequestPrivate(
    const StopJobRequestPrivate &other, StopJobRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
