// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelrequest.h"
#include "describemodelrequest_p.h"
#include "describemodelresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeModelRequest
 * \brief The DescribeModelRequest class provides an interface for LookoutEquipment DescribeModel requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelRequest::DescribeModelRequest(const DescribeModelRequest &other)
    : LookoutEquipmentRequest(new DescribeModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelRequest object.
 */
DescribeModelRequest::DescribeModelRequest()
    : LookoutEquipmentRequest(new DescribeModelRequestPrivate(LookoutEquipmentRequest::DescribeModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DescribeModelRequestPrivate
 * \brief The DescribeModelRequestPrivate class provides private implementation for DescribeModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeModelRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const LookoutEquipmentRequest::Action action, DescribeModelRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelRequest
 * class' copy constructor.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const DescribeModelRequestPrivate &other, DescribeModelRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
