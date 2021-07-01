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

#include "putsnapshotblockresponse.h"
#include "putsnapshotblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EBS {

/*!
 * \class QtAws::EBS::PutSnapshotBlockResponse
 * \brief The PutSnapshotBlockResponse class provides an interace for EBS PutSnapshotBlock responses.
 *
 * \inmodule QtAwsEBS
 *
 *  You can use the Amazon Elastic Block Store (Amazon EBS) direct APIs to create EBS snapshots, write data directly to your
 *  snapshots, read data on your snapshots, and identify the differences or changes between two snapshots. If you’re an
 *  independent software vendor (ISV) who offers backup services for Amazon EBS, the EBS direct APIs make it more efficient
 *  and cost-effective to track incremental changes on your EBS volumes through snapshots. This can be done without having
 *  to create new volumes from snapshots, and then use Amazon Elastic Compute Cloud (Amazon EC2) instances to compare the
 * 
 *  differences>
 * 
 *  You can create incremental snapshots directly from data on-premises into EBS volumes and the cloud to use for quick
 *  disaster recovery. With the ability to write and read snapshots, you can write your on-premises data to an EBS snapshot
 *  during a disaster. Then after recovery, you can restore it back to AWS or on-premises from the snapshot. You no longer
 *  need to build and maintain complex mechanisms to copy data to and from Amazon
 * 
 *  EBS>
 * 
 *  This API reference provides detailed information about the actions, data types, parameters, and errors of the EBS direct
 *  APIs. For more information about the elements that make up the EBS direct APIs, and examples of how to use them
 *  effectively, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing the
 *  Contents of an EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more information about the
 *  supported AWS Regions, endpoints, and service quotas for the EBS direct APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon Elastic Block Store Endpoints and
 *  Quotas</a> in the <i>AWS General
 *
 * \sa EbsClient::putSnapshotBlock
 */

/*!
 * Constructs a PutSnapshotBlockResponse object for \a reply to \a request, with parent \a parent.
 */
PutSnapshotBlockResponse::PutSnapshotBlockResponse(
        const PutSnapshotBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EbsResponse(new PutSnapshotBlockResponsePrivate(this), parent)
{
    setRequest(new PutSnapshotBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSnapshotBlockRequest * PutSnapshotBlockResponse::request() const
{
    Q_D(const PutSnapshotBlockResponse);
    return static_cast<const PutSnapshotBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EBS PutSnapshotBlock \a response.
 */
void PutSnapshotBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSnapshotBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EBS::PutSnapshotBlockResponsePrivate
 * \brief The PutSnapshotBlockResponsePrivate class provides private implementation for PutSnapshotBlockResponse.
 * \internal
 *
 * \inmodule QtAwsEBS
 */

/*!
 * Constructs a PutSnapshotBlockResponsePrivate object with public implementation \a q.
 */
PutSnapshotBlockResponsePrivate::PutSnapshotBlockResponsePrivate(
    PutSnapshotBlockResponse * const q) : EbsResponsePrivate(q)
{

}

/*!
 * Parses a EBS PutSnapshotBlock response element from \a xml.
 */
void PutSnapshotBlockResponsePrivate::parsePutSnapshotBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSnapshotBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EBS
} // namespace QtAws
