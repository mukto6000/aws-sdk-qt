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

#include "describedbclustersrequest.h"
#include "describedbclustersrequest_p.h"
#include "describedbclustersresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DescribeDBClustersRequest
 * \brief The DescribeDBClustersRequest class provides an interface for Neptune DescribeDBClusters requests.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 *
 * \sa NeptuneClient::describeDBClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest(const DescribeDBClustersRequest &other)
    : NeptuneRequest(new DescribeDBClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClustersRequest object.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest()
    : NeptuneRequest(new DescribeDBClustersRequestPrivate(NeptuneRequest::DescribeDBClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClustersResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::DescribeDBClustersRequestPrivate
 * \brief The DescribeDBClustersRequestPrivate class provides private implementation for DescribeDBClustersRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DescribeDBClustersRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const NeptuneRequest::Action action, DescribeDBClustersRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClustersRequest
 * class' copy constructor.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DescribeDBClustersRequestPrivate &other, DescribeDBClustersRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
