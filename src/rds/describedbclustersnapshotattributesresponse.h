// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESRESPONSE_H

#include "rdsresponse.h"
#include "describedbclustersnapshotattributesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterSnapshotAttributesResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBClusterSnapshotAttributesResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBClusterSnapshotAttributesResponse(const DescribeDBClusterSnapshotAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterSnapshotAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterSnapshotAttributesResponse)
    Q_DISABLE_COPY(DescribeDBClusterSnapshotAttributesResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
