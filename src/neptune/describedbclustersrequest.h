// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClustersRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBClustersRequest : public NeptuneRequest {

public:
    DescribeDBClustersRequest(const DescribeDBClustersRequest &other);
    DescribeDBClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClustersRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
