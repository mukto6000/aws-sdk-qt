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

#include "describeroutingcontrolrequest.h"
#include "describeroutingcontrolrequest_p.h"
#include "describeroutingcontrolresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeRoutingControlRequest
 * \brief The DescribeRoutingControlRequest class provides an interface for Route53RecoveryControlConfig DescribeRoutingControl requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::describeRoutingControl
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRoutingControlRequest::DescribeRoutingControlRequest(const DescribeRoutingControlRequest &other)
    : Route53RecoveryControlConfigRequest(new DescribeRoutingControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRoutingControlRequest object.
 */
DescribeRoutingControlRequest::DescribeRoutingControlRequest()
    : Route53RecoveryControlConfigRequest(new DescribeRoutingControlRequestPrivate(Route53RecoveryControlConfigRequest::DescribeRoutingControlAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRoutingControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRoutingControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRoutingControlRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRoutingControlResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeRoutingControlRequestPrivate
 * \brief The DescribeRoutingControlRequestPrivate class provides private implementation for DescribeRoutingControlRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DescribeRoutingControlRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
DescribeRoutingControlRequestPrivate::DescribeRoutingControlRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, DescribeRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRoutingControlRequest
 * class' copy constructor.
 */
DescribeRoutingControlRequestPrivate::DescribeRoutingControlRequestPrivate(
    const DescribeRoutingControlRequestPrivate &other, DescribeRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
