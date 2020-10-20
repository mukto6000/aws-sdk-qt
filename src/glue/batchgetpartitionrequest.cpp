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

#include "batchgetpartitionrequest.h"
#include "batchgetpartitionrequest_p.h"
#include "batchgetpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetPartitionRequest
 * \brief The BatchGetPartitionRequest class provides an interface for Glue BatchGetPartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetPartition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetPartitionRequest::BatchGetPartitionRequest(const BatchGetPartitionRequest &other)
    : GlueRequest(new BatchGetPartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetPartitionRequest object.
 */
BatchGetPartitionRequest::BatchGetPartitionRequest()
    : GlueRequest(new BatchGetPartitionRequestPrivate(GlueRequest::BatchGetPartitionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetPartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetPartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetPartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetPartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetPartitionRequestPrivate
 * \brief The BatchGetPartitionRequestPrivate class provides private implementation for BatchGetPartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetPartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetPartitionRequestPrivate::BatchGetPartitionRequestPrivate(
    const GlueRequest::Action action, BatchGetPartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetPartitionRequest
 * class' copy constructor.
 */
BatchGetPartitionRequestPrivate::BatchGetPartitionRequestPrivate(
    const BatchGetPartitionRequestPrivate &other, BatchGetPartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
