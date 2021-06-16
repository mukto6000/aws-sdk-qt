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

#include "batchdeleteattributesrequest.h"
#include "batchdeleteattributesrequest_p.h"
#include "batchdeleteattributesresponse.h"
#include "simpledbrequest_p.h"

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::BatchDeleteAttributesRequest
 * \brief The BatchDeleteAttributesRequest class provides an interface for SimpleDB BatchDeleteAttributes requests.
 *
 * \inmodule QtAwsSimpleDB
 *
 *  Amazon SimpleDB is a web service providing the core database functions of data indexing and querying in the cloud. By
 *  offloading the time and effort associated with building and operating a web-scale database, SimpleDB provides developers
 *  the freedom to focus on application development.
 * 
 *  A traditional, clustered relational database requires a sizable upfront capital outlay, is complex to design, and often
 *  requires extensive and repetitive database administration. Amazon SimpleDB is dramatically simpler, requiring no schema,
 *  automatically indexing your data and providing a simple API for storage and access. This approach eliminates the
 *  administrative burden of data modeling, index maintenance, and performance tuning. Developers gain access to this
 *  functionality within Amazon's proven computing environment, are able to scale instantly, and pay only for what they use.
 * 
 *  </p
 * 
 *  Visit <a href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for more information.
 *
 * \sa SimpleDBClient::batchDeleteAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteAttributesRequest::BatchDeleteAttributesRequest(const BatchDeleteAttributesRequest &other)
    : SimpleDBRequest(new BatchDeleteAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteAttributesRequest object.
 */
BatchDeleteAttributesRequest::BatchDeleteAttributesRequest()
    : SimpleDBRequest(new BatchDeleteAttributesRequestPrivate(SimpleDBRequest::BatchDeleteAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteAttributesRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SimpleDB::BatchDeleteAttributesRequestPrivate
 * \brief The BatchDeleteAttributesRequestPrivate class provides private implementation for BatchDeleteAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a BatchDeleteAttributesRequestPrivate object for SimpleDB \a action,
 * with public implementation \a q.
 */
BatchDeleteAttributesRequestPrivate::BatchDeleteAttributesRequestPrivate(
    const SimpleDBRequest::Action action, BatchDeleteAttributesRequest * const q)
    : SimpleDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteAttributesRequest
 * class' copy constructor.
 */
BatchDeleteAttributesRequestPrivate::BatchDeleteAttributesRequestPrivate(
    const BatchDeleteAttributesRequestPrivate &other, BatchDeleteAttributesRequest * const q)
    : SimpleDBRequestPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace QtAws
