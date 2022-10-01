// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERENDPOINTSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERENDPOINTSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterEndpointsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBClusterEndpointsRequest : public RdsRequest {

public:
    DescribeDBClusterEndpointsRequest(const DescribeDBClusterEndpointsRequest &other);
    DescribeDBClusterEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterEndpointsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
