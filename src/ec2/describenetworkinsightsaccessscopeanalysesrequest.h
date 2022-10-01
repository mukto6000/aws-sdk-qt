// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESREQUEST_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopeAnalysesRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsAccessScopeAnalysesRequest : public Ec2Request {

public:
    DescribeNetworkInsightsAccessScopeAnalysesRequest(const DescribeNetworkInsightsAccessScopeAnalysesRequest &other);
    DescribeNetworkInsightsAccessScopeAnalysesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsAccessScopeAnalysesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
