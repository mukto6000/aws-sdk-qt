// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESREQUEST_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConfigRulesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeAggregateComplianceByConfigRulesRequest : public ConfigServiceRequest {

public:
    DescribeAggregateComplianceByConfigRulesRequest(const DescribeAggregateComplianceByConfigRulesRequest &other);
    DescribeAggregateComplianceByConfigRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregateComplianceByConfigRulesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
