// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "promotereadreplicadbclusterrequest.h"
#include "promotereadreplicadbclusterrequest_p.h"
#include "promotereadreplicadbclusterresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::PromoteReadReplicaDBClusterRequest
 * \brief The PromoteReadReplicaDBClusterRequest class provides an interface for Neptune PromoteReadReplicaDBCluster requests.
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
 * \sa NeptuneClient::promoteReadReplicaDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
PromoteReadReplicaDBClusterRequest::PromoteReadReplicaDBClusterRequest(const PromoteReadReplicaDBClusterRequest &other)
    : NeptuneRequest(new PromoteReadReplicaDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PromoteReadReplicaDBClusterRequest object.
 */
PromoteReadReplicaDBClusterRequest::PromoteReadReplicaDBClusterRequest()
    : NeptuneRequest(new PromoteReadReplicaDBClusterRequestPrivate(NeptuneRequest::PromoteReadReplicaDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool PromoteReadReplicaDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PromoteReadReplicaDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PromoteReadReplicaDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new PromoteReadReplicaDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::PromoteReadReplicaDBClusterRequestPrivate
 * \brief The PromoteReadReplicaDBClusterRequestPrivate class provides private implementation for PromoteReadReplicaDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a PromoteReadReplicaDBClusterRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
PromoteReadReplicaDBClusterRequestPrivate::PromoteReadReplicaDBClusterRequestPrivate(
    const NeptuneRequest::Action action, PromoteReadReplicaDBClusterRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PromoteReadReplicaDBClusterRequest
 * class' copy constructor.
 */
PromoteReadReplicaDBClusterRequestPrivate::PromoteReadReplicaDBClusterRequestPrivate(
    const PromoteReadReplicaDBClusterRequestPrivate &other, PromoteReadReplicaDBClusterRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
