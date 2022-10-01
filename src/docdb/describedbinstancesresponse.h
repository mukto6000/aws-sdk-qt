// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEDBINSTANCESRESPONSE_H

#include "docdbresponse.h"
#include "describedbinstancesrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBInstancesResponsePrivate;

class QTAWSDOCDB_EXPORT DescribeDBInstancesResponse : public DocDbResponse {
    Q_OBJECT

public:
    DescribeDBInstancesResponse(const DescribeDBInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBInstancesResponse)
    Q_DISABLE_COPY(DescribeDBInstancesResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
