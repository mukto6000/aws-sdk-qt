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

#include "getreadinesscheckresourcestatusrequest.h"
#include "getreadinesscheckresourcestatusrequest_p.h"
#include "getreadinesscheckresourcestatusresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResourceStatusRequest
 * \brief The GetReadinessCheckResourceStatusRequest class provides an interface for Route53RecoveryReadiness GetReadinessCheckResourceStatus requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheckResourceStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetReadinessCheckResourceStatusRequest::GetReadinessCheckResourceStatusRequest(const GetReadinessCheckResourceStatusRequest &other)
    : Route53RecoveryReadinessRequest(new GetReadinessCheckResourceStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReadinessCheckResourceStatusRequest object.
 */
GetReadinessCheckResourceStatusRequest::GetReadinessCheckResourceStatusRequest()
    : Route53RecoveryReadinessRequest(new GetReadinessCheckResourceStatusRequestPrivate(Route53RecoveryReadinessRequest::GetReadinessCheckResourceStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetReadinessCheckResourceStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReadinessCheckResourceStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReadinessCheckResourceStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetReadinessCheckResourceStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResourceStatusRequestPrivate
 * \brief The GetReadinessCheckResourceStatusRequestPrivate class provides private implementation for GetReadinessCheckResourceStatusRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckResourceStatusRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetReadinessCheckResourceStatusRequestPrivate::GetReadinessCheckResourceStatusRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetReadinessCheckResourceStatusRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReadinessCheckResourceStatusRequest
 * class' copy constructor.
 */
GetReadinessCheckResourceStatusRequestPrivate::GetReadinessCheckResourceStatusRequestPrivate(
    const GetReadinessCheckResourceStatusRequestPrivate &other, GetReadinessCheckResourceStatusRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
