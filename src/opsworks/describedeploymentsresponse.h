// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTSRESPONSE_H
#define QTAWS_DESCRIBEDEPLOYMENTSRESPONSE_H

#include "opsworksresponse.h"
#include "describedeploymentsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeDeploymentsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeDeploymentsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeDeploymentsResponse(const DescribeDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeploymentsResponse)
    Q_DISABLE_COPY(DescribeDeploymentsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
