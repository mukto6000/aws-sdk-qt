// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listofferingpromotionsrequest.h"
#include "listofferingpromotionsrequest_p.h"
#include "listofferingpromotionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsRequest
 * \brief The ListOfferingPromotionsRequest class provides an interface for DeviceFarm ListOfferingPromotions requests.
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
 * \sa DeviceFarmClient::listOfferingPromotions
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingPromotionsRequest::ListOfferingPromotionsRequest(const ListOfferingPromotionsRequest &other)
    : DeviceFarmRequest(new ListOfferingPromotionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingPromotionsRequest object.
 */
ListOfferingPromotionsRequest::ListOfferingPromotionsRequest()
    : DeviceFarmRequest(new ListOfferingPromotionsRequestPrivate(DeviceFarmRequest::ListOfferingPromotionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOfferingPromotionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOfferingPromotionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingPromotionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingPromotionsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsRequestPrivate
 * \brief The ListOfferingPromotionsRequestPrivate class provides private implementation for ListOfferingPromotionsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingPromotionsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListOfferingPromotionsRequestPrivate::ListOfferingPromotionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingPromotionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingPromotionsRequest
 * class' copy constructor.
 */
ListOfferingPromotionsRequestPrivate::ListOfferingPromotionsRequestPrivate(
    const ListOfferingPromotionsRequestPrivate &other, ListOfferingPromotionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
