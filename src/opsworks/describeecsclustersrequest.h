// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEECSCLUSTERSREQUEST_H
#define QTAWS_DESCRIBEECSCLUSTERSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeEcsClustersRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeEcsClustersRequest : public OpsWorksRequest {

public:
    DescribeEcsClustersRequest(const DescribeEcsClustersRequest &other);
    DescribeEcsClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEcsClustersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
