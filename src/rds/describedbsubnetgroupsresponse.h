// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbsubnetgroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSubnetGroupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBSubnetGroupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBSubnetGroupsResponse(const DescribeDBSubnetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBSubnetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeDBSubnetGroupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
