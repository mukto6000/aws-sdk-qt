// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationefsrequest.h"
#include "describelocationefsrequest_p.h"
#include "describelocationefsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationEfsRequest
 * \brief The DescribeLocationEfsRequest class provides an interface for DataSync DescribeLocationEfs requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::describeLocationEfs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationEfsRequest::DescribeLocationEfsRequest(const DescribeLocationEfsRequest &other)
    : DataSyncRequest(new DescribeLocationEfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationEfsRequest object.
 */
DescribeLocationEfsRequest::DescribeLocationEfsRequest()
    : DataSyncRequest(new DescribeLocationEfsRequestPrivate(DataSyncRequest::DescribeLocationEfsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationEfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationEfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationEfsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationEfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationEfsRequestPrivate
 * \brief The DescribeLocationEfsRequestPrivate class provides private implementation for DescribeLocationEfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationEfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationEfsRequestPrivate::DescribeLocationEfsRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationEfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationEfsRequest
 * class' copy constructor.
 */
DescribeLocationEfsRequestPrivate::DescribeLocationEfsRequestPrivate(
    const DescribeLocationEfsRequestPrivate &other, DescribeLocationEfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
