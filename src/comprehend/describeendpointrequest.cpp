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

#include "describeendpointrequest.h"
#include "describeendpointrequest_p.h"
#include "describeendpointresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEndpointRequest
 * \brief The DescribeEndpointRequest class provides an interface for Comprehend DescribeEndpoint requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointRequest::DescribeEndpointRequest(const DescribeEndpointRequest &other)
    : ComprehendRequest(new DescribeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointRequest object.
 */
DescribeEndpointRequest::DescribeEndpointRequest()
    : ComprehendRequest(new DescribeEndpointRequestPrivate(ComprehendRequest::DescribeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeEndpointRequestPrivate
 * \brief The DescribeEndpointRequestPrivate class provides private implementation for DescribeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEndpointRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const ComprehendRequest::Action action, DescribeEndpointRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointRequest
 * class' copy constructor.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const DescribeEndpointRequestPrivate &other, DescribeEndpointRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
