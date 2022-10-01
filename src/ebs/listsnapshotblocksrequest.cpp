// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsnapshotblocksrequest.h"
#include "listsnapshotblocksrequest_p.h"
#include "listsnapshotblocksresponse.h"
#include "ebsrequest_p.h"

namespace QtAws {
namespace Ebs {

/*!
 * \class QtAws::Ebs::ListSnapshotBlocksRequest
 * \brief The ListSnapshotBlocksRequest class provides an interface for Ebs ListSnapshotBlocks requests.
 *
 * \inmodule QtAwsEbs
 *
 *  You can use the Amazon Elastic Block Store (Amazon EBS) direct APIs to create Amazon EBS snapshots, write data directly
 *  to your snapshots, read data on your snapshots, and identify the differences or changes between two snapshots. If you’re
 *  an independent software vendor (ISV) who offers backup services for Amazon EBS, the EBS direct APIs make it more
 *  efficient and cost-effective to track incremental changes on your Amazon EBS volumes through snapshots. This can be done
 *  without having to create new volumes from snapshots, and then use Amazon Elastic Compute Cloud (Amazon EC2) instances to
 *  compare the
 * 
 *  differences>
 * 
 *  You can create incremental snapshots directly from data on-premises into volumes and the cloud to use for quick disaster
 *  recovery. With the ability to write and read snapshots, you can write your on-premises data to an snapshot during a
 *  disaster. Then after recovery, you can restore it back to Amazon Web Services or on-premises from the snapshot. You no
 *  longer need to build and maintain complex mechanisms to copy data to and from Amazon
 * 
 *  EBS>
 * 
 *  This API reference provides detailed information about the actions, data types, parameters, and errors of the EBS direct
 *  APIs. For more information about the elements that make up the EBS direct APIs, and examples of how to use them
 *  effectively, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing the
 *  Contents of an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more information about
 *  the supported Amazon Web Services Regions, endpoints, and service quotas for the EBS direct APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon Elastic Block Store Endpoints and
 *  Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa EbsClient::listSnapshotBlocks
 */

/*!
 * Constructs a copy of \a other.
 */
ListSnapshotBlocksRequest::ListSnapshotBlocksRequest(const ListSnapshotBlocksRequest &other)
    : EbsRequest(new ListSnapshotBlocksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSnapshotBlocksRequest object.
 */
ListSnapshotBlocksRequest::ListSnapshotBlocksRequest()
    : EbsRequest(new ListSnapshotBlocksRequestPrivate(EbsRequest::ListSnapshotBlocksAction, this))
{

}

/*!
 * \reimp
 */
bool ListSnapshotBlocksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSnapshotBlocksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSnapshotBlocksRequest::response(QNetworkReply * const reply) const
{
    return new ListSnapshotBlocksResponse(*this, reply);
}

/*!
 * \class QtAws::Ebs::ListSnapshotBlocksRequestPrivate
 * \brief The ListSnapshotBlocksRequestPrivate class provides private implementation for ListSnapshotBlocksRequest.
 * \internal
 *
 * \inmodule QtAwsEbs
 */

/*!
 * Constructs a ListSnapshotBlocksRequestPrivate object for Ebs \a action,
 * with public implementation \a q.
 */
ListSnapshotBlocksRequestPrivate::ListSnapshotBlocksRequestPrivate(
    const EbsRequest::Action action, ListSnapshotBlocksRequest * const q)
    : EbsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSnapshotBlocksRequest
 * class' copy constructor.
 */
ListSnapshotBlocksRequestPrivate::ListSnapshotBlocksRequestPrivate(
    const ListSnapshotBlocksRequestPrivate &other, ListSnapshotBlocksRequest * const q)
    : EbsRequestPrivate(other, q)
{

}

} // namespace Ebs
} // namespace QtAws
