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

#include "describemultiregionaccesspointoperationrequest.h"
#include "describemultiregionaccesspointoperationrequest_p.h"
#include "describemultiregionaccesspointoperationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DescribeMultiRegionAccessPointOperationRequest
 * \brief The DescribeMultiRegionAccessPointOperationRequest class provides an interface for S3Control DescribeMultiRegionAccessPointOperation requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::describeMultiRegionAccessPointOperation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMultiRegionAccessPointOperationRequest::DescribeMultiRegionAccessPointOperationRequest(const DescribeMultiRegionAccessPointOperationRequest &other)
    : S3ControlRequest(new DescribeMultiRegionAccessPointOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMultiRegionAccessPointOperationRequest object.
 */
DescribeMultiRegionAccessPointOperationRequest::DescribeMultiRegionAccessPointOperationRequest()
    : S3ControlRequest(new DescribeMultiRegionAccessPointOperationRequestPrivate(S3ControlRequest::DescribeMultiRegionAccessPointOperationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMultiRegionAccessPointOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMultiRegionAccessPointOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMultiRegionAccessPointOperationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMultiRegionAccessPointOperationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DescribeMultiRegionAccessPointOperationRequestPrivate
 * \brief The DescribeMultiRegionAccessPointOperationRequestPrivate class provides private implementation for DescribeMultiRegionAccessPointOperationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DescribeMultiRegionAccessPointOperationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DescribeMultiRegionAccessPointOperationRequestPrivate::DescribeMultiRegionAccessPointOperationRequestPrivate(
    const S3ControlRequest::Action action, DescribeMultiRegionAccessPointOperationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMultiRegionAccessPointOperationRequest
 * class' copy constructor.
 */
DescribeMultiRegionAccessPointOperationRequestPrivate::DescribeMultiRegionAccessPointOperationRequestPrivate(
    const DescribeMultiRegionAccessPointOperationRequestPrivate &other, DescribeMultiRegionAccessPointOperationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
