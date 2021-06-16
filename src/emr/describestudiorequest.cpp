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

#include "describestudiorequest.h"
#include "describestudiorequest_p.h"
#include "describestudioresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeStudioRequest
 * \brief The DescribeStudioRequest class provides an interface for EMR DescribeStudio requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeStudio
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStudioRequest::DescribeStudioRequest(const DescribeStudioRequest &other)
    : EmrRequest(new DescribeStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStudioRequest object.
 */
DescribeStudioRequest::DescribeStudioRequest()
    : EmrRequest(new DescribeStudioRequestPrivate(EmrRequest::DescribeStudioAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStudioRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStudioResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::DescribeStudioRequestPrivate
 * \brief The DescribeStudioRequestPrivate class provides private implementation for DescribeStudioRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeStudioRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeStudioRequestPrivate::DescribeStudioRequestPrivate(
    const EmrRequest::Action action, DescribeStudioRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStudioRequest
 * class' copy constructor.
 */
DescribeStudioRequestPrivate::DescribeStudioRequestPrivate(
    const DescribeStudioRequestPrivate &other, DescribeStudioRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
