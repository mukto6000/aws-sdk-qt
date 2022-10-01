// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESREQUEST_H
#define QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeOrderableReplicationInstancesRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeOrderableReplicationInstancesRequest : public DatabaseMigrationRequest {

public:
    DescribeOrderableReplicationInstancesRequest(const DescribeOrderableReplicationInstancesRequest &other);
    DescribeOrderableReplicationInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrderableReplicationInstancesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
