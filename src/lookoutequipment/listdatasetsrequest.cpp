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

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListDatasetsRequest
 * \brief The ListDatasetsRequest class provides an interface for LookoutEquipment ListDatasets requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listDatasets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : LookoutEquipmentRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : LookoutEquipmentRequest(new ListDatasetsRequestPrivate(LookoutEquipmentRequest::ListDatasetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListDatasetsRequestPrivate
 * \brief The ListDatasetsRequestPrivate class provides private implementation for ListDatasetsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListDatasetsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListDatasetsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
