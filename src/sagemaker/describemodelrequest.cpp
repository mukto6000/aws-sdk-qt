/*
    Copyright 2013-2020 Paul Colby

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

#include "describemodelrequest.h"
#include "describemodelrequest_p.h"
#include "describemodelresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelRequest
 * \brief The DescribeModelRequest class provides an interface for SageMaker DescribeModel requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelRequest::DescribeModelRequest(const DescribeModelRequest &other)
    : SageMakerRequest(new DescribeModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelRequest object.
 */
DescribeModelRequest::DescribeModelRequest()
    : SageMakerRequest(new DescribeModelRequestPrivate(SageMakerRequest::DescribeModelAction, this))
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
 * \class QtAws::SageMaker::DescribeModelRequestPrivate
 * \brief The DescribeModelRequestPrivate class provides private implementation for DescribeModelRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelRequest * const q)
    : SageMakerRequestPrivate(action, q)
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
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
