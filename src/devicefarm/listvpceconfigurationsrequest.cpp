// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvpceconfigurationsrequest.h"
#include "listvpceconfigurationsrequest_p.h"
#include "listvpceconfigurationsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListVPCEConfigurationsRequest
 * \brief The ListVPCEConfigurationsRequest class provides an interface for DeviceFarm ListVPCEConfigurations requests.
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
 * \sa DeviceFarmClient::listVPCEConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListVPCEConfigurationsRequest::ListVPCEConfigurationsRequest(const ListVPCEConfigurationsRequest &other)
    : DeviceFarmRequest(new ListVPCEConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVPCEConfigurationsRequest object.
 */
ListVPCEConfigurationsRequest::ListVPCEConfigurationsRequest()
    : DeviceFarmRequest(new ListVPCEConfigurationsRequestPrivate(DeviceFarmRequest::ListVPCEConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListVPCEConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVPCEConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVPCEConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListVPCEConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListVPCEConfigurationsRequestPrivate
 * \brief The ListVPCEConfigurationsRequestPrivate class provides private implementation for ListVPCEConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListVPCEConfigurationsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListVPCEConfigurationsRequestPrivate::ListVPCEConfigurationsRequestPrivate(
    const DeviceFarmRequest::Action action, ListVPCEConfigurationsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVPCEConfigurationsRequest
 * class' copy constructor.
 */
ListVPCEConfigurationsRequestPrivate::ListVPCEConfigurationsRequestPrivate(
    const ListVPCEConfigurationsRequestPrivate &other, ListVPCEConfigurationsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
