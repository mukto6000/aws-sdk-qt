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

#include "deletekeyspacerequest.h"
#include "deletekeyspacerequest_p.h"
#include "deletekeyspaceresponse.h"
#include "keyspacesrequest_p.h"

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::DeleteKeyspaceRequest
 * \brief The DeleteKeyspaceRequest class provides an interface for Keyspaces DeleteKeyspace requests.
 *
 * \inmodule QtAwsKeyspaces
 *
 *  Amazon Keyspaces (for Apache Cassandra) is a scalable, highly available, and managed Apache Cassandra-compatible
 *  database service. Amazon Keyspaces makes it easy to migrate, run, and scale Cassandra workloads in the Amazon Web
 *  Services Cloud. With just a few clicks on the Amazon Web Services Management Console or a few lines of code, you can
 *  create keyspaces and tables in Amazon Keyspaces, without deploying any infrastructure or installing software.
 * 
 *  </p
 * 
 *  In addition to supporting Cassandra Query Language (CQL) requests via open-source Cassandra drivers, Amazon Keyspaces
 *  supports data definition language (DDL) operations to manage keyspaces and tables using the Amazon Web Services SDK and
 *  CLI. This API reference describes the supported DDL operations in
 * 
 *  detail>
 * 
 *  For the list of all supported CQL APIs, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cassandra-apis.html">Supported Cassandra APIs, operations,
 *  and data types in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  To learn how Amazon Keyspaces API actions are recorded with CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
 *  Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  For more information about Amazon Web Services APIs, for example how to implement retry logic or how to sign Amazon Web
 *  Services API requests, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services
 *  APIs</a> in the <i>General
 *
 * \sa KeyspacesClient::deleteKeyspace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteKeyspaceRequest::DeleteKeyspaceRequest(const DeleteKeyspaceRequest &other)
    : KeyspacesRequest(new DeleteKeyspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteKeyspaceRequest object.
 */
DeleteKeyspaceRequest::DeleteKeyspaceRequest()
    : KeyspacesRequest(new DeleteKeyspaceRequestPrivate(KeyspacesRequest::DeleteKeyspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteKeyspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteKeyspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteKeyspaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKeyspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Keyspaces::DeleteKeyspaceRequestPrivate
 * \brief The DeleteKeyspaceRequestPrivate class provides private implementation for DeleteKeyspaceRequest.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a DeleteKeyspaceRequestPrivate object for Keyspaces \a action,
 * with public implementation \a q.
 */
DeleteKeyspaceRequestPrivate::DeleteKeyspaceRequestPrivate(
    const KeyspacesRequest::Action action, DeleteKeyspaceRequest * const q)
    : KeyspacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteKeyspaceRequest
 * class' copy constructor.
 */
DeleteKeyspaceRequestPrivate::DeleteKeyspaceRequestPrivate(
    const DeleteKeyspaceRequestPrivate &other, DeleteKeyspaceRequest * const q)
    : KeyspacesRequestPrivate(other, q)
{

}

} // namespace Keyspaces
} // namespace QtAws
