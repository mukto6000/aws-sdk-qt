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

#include "batchputpropertyvaluesrequest.h"
#include "batchputpropertyvaluesrequest_p.h"
#include "batchputpropertyvaluesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::BatchPutPropertyValuesRequest
 * \brief The BatchPutPropertyValuesRequest class provides an interface for IoTTwinMaker BatchPutPropertyValues requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::batchPutPropertyValues
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutPropertyValuesRequest::BatchPutPropertyValuesRequest(const BatchPutPropertyValuesRequest &other)
    : IoTTwinMakerRequest(new BatchPutPropertyValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutPropertyValuesRequest object.
 */
BatchPutPropertyValuesRequest::BatchPutPropertyValuesRequest()
    : IoTTwinMakerRequest(new BatchPutPropertyValuesRequestPrivate(IoTTwinMakerRequest::BatchPutPropertyValuesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutPropertyValuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutPropertyValuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutPropertyValuesRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutPropertyValuesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::BatchPutPropertyValuesRequestPrivate
 * \brief The BatchPutPropertyValuesRequestPrivate class provides private implementation for BatchPutPropertyValuesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a BatchPutPropertyValuesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
BatchPutPropertyValuesRequestPrivate::BatchPutPropertyValuesRequestPrivate(
    const IoTTwinMakerRequest::Action action, BatchPutPropertyValuesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutPropertyValuesRequest
 * class' copy constructor.
 */
BatchPutPropertyValuesRequestPrivate::BatchPutPropertyValuesRequestPrivate(
    const BatchPutPropertyValuesRequestPrivate &other, BatchPutPropertyValuesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
