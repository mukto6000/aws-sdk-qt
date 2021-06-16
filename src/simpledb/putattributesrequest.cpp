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

#include "putattributesrequest.h"
#include "putattributesrequest_p.h"
#include "putattributesresponse.h"
#include "simpledbrequest_p.h"

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::PutAttributesRequest
 * \brief The PutAttributesRequest class provides an interface for SimpleDB PutAttributes requests.
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
 * \sa SimpleDBClient::putAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutAttributesRequest::PutAttributesRequest(const PutAttributesRequest &other)
    : SimpleDBRequest(new PutAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAttributesRequest object.
 */
PutAttributesRequest::PutAttributesRequest()
    : SimpleDBRequest(new PutAttributesRequestPrivate(SimpleDBRequest::PutAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SimpleDB::PutAttributesRequestPrivate
 * \brief The PutAttributesRequestPrivate class provides private implementation for PutAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a PutAttributesRequestPrivate object for SimpleDB \a action,
 * with public implementation \a q.
 */
PutAttributesRequestPrivate::PutAttributesRequestPrivate(
    const SimpleDBRequest::Action action, PutAttributesRequest * const q)
    : SimpleDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAttributesRequest
 * class' copy constructor.
 */
PutAttributesRequestPrivate::PutAttributesRequestPrivate(
    const PutAttributesRequestPrivate &other, PutAttributesRequest * const q)
    : SimpleDBRequestPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace QtAws
