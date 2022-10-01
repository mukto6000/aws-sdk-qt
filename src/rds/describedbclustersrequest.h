// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClustersRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBClustersRequest : public RdsRequest {

public:
    DescribeDBClustersRequest(const DescribeDBClustersRequest &other);
    DescribeDBClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClustersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
