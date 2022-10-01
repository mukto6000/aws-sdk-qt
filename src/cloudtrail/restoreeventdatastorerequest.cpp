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

#include "restoreeventdatastorerequest.h"
#include "restoreeventdatastorerequest_p.h"
#include "restoreeventdatastoreresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::RestoreEventDataStoreRequest
 * \brief The RestoreEventDataStoreRequest class provides an interface for CloudTrail RestoreEventDataStore requests.
 *
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records Amazon Web Services API calls for your Amazon Web Services account and delivers
 *  log files to an Amazon S3 bucket. The recorded information includes the identity of the user, the start time of the
 *  Amazon Web Services API call, the source IP address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the Amazon Web Services SDKs, which consist of libraries and sample
 *  code for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide
 *  programmatic access to CloudTrail. For example, the SDKs handle cryptographically signing requests, managing errors, and
 *  retrying requests automatically. For more information about the Amazon Web Services SDKs, including how to download and
 *  install them, see <a href="http://aws.amazon.com/tools/">Tools to Build on Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  See the <a href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">CloudTrail User
 *  Guide</a> for information about the data that is included with each Amazon Web Services API call listed in the log
 *
 * \sa CloudTrailClient::restoreEventDataStore
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreEventDataStoreRequest::RestoreEventDataStoreRequest(const RestoreEventDataStoreRequest &other)
    : CloudTrailRequest(new RestoreEventDataStoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreEventDataStoreRequest object.
 */
RestoreEventDataStoreRequest::RestoreEventDataStoreRequest()
    : CloudTrailRequest(new RestoreEventDataStoreRequestPrivate(CloudTrailRequest::RestoreEventDataStoreAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreEventDataStoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreEventDataStoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreEventDataStoreRequest::response(QNetworkReply * const reply) const
{
    return new RestoreEventDataStoreResponse(*this, reply);
}

/*!
 * \class QtAws::CloudTrail::RestoreEventDataStoreRequestPrivate
 * \brief The RestoreEventDataStoreRequestPrivate class provides private implementation for RestoreEventDataStoreRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a RestoreEventDataStoreRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
RestoreEventDataStoreRequestPrivate::RestoreEventDataStoreRequestPrivate(
    const CloudTrailRequest::Action action, RestoreEventDataStoreRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreEventDataStoreRequest
 * class' copy constructor.
 */
RestoreEventDataStoreRequestPrivate::RestoreEventDataStoreRequestPrivate(
    const RestoreEventDataStoreRequestPrivate &other, RestoreEventDataStoreRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
