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

#include "listclustersrequest.h"
#include "listclustersrequest_p.h"
#include "listclustersresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListClustersRequest
 * \brief The ListClustersRequest class provides an interface for Route53RecoveryControlConfig ListClusters requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listClusters
 */

/*!
 * Constructs a copy of \a other.
 */
ListClustersRequest::ListClustersRequest(const ListClustersRequest &other)
    : Route53RecoveryControlConfigRequest(new ListClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListClustersRequest object.
 */
ListClustersRequest::ListClustersRequest()
    : Route53RecoveryControlConfigRequest(new ListClustersRequestPrivate(Route53RecoveryControlConfigRequest::ListClustersAction, this))
{

}

/*!
 * \reimp
 */
bool ListClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClustersRequest::response(QNetworkReply * const reply) const
{
    return new ListClustersResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListClustersRequestPrivate
 * \brief The ListClustersRequestPrivate class provides private implementation for ListClustersRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListClustersRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, ListClustersRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListClustersRequest
 * class' copy constructor.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const ListClustersRequestPrivate &other, ListClustersRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
