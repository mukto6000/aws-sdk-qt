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

#include "deletelabelrequest.h"
#include "deletelabelrequest_p.h"
#include "deletelabelresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelRequest
 * \brief The DeleteLabelRequest class provides an interface for LookoutEquipment DeleteLabel requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteLabel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLabelRequest::DeleteLabelRequest(const DeleteLabelRequest &other)
    : LookoutEquipmentRequest(new DeleteLabelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLabelRequest object.
 */
DeleteLabelRequest::DeleteLabelRequest()
    : LookoutEquipmentRequest(new DeleteLabelRequestPrivate(LookoutEquipmentRequest::DeleteLabelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLabelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLabelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLabelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLabelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelRequestPrivate
 * \brief The DeleteLabelRequestPrivate class provides private implementation for DeleteLabelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteLabelRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DeleteLabelRequestPrivate::DeleteLabelRequestPrivate(
    const LookoutEquipmentRequest::Action action, DeleteLabelRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLabelRequest
 * class' copy constructor.
 */
DeleteLabelRequestPrivate::DeleteLabelRequestPrivate(
    const DeleteLabelRequestPrivate &other, DeleteLabelRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
