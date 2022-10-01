// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_H
#define QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConformancePackComplianceSummaryRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateConformancePackComplianceSummaryRequest : public ConfigServiceRequest {

public:
    GetAggregateConformancePackComplianceSummaryRequest(const GetAggregateConformancePackComplianceSummaryRequest &other);
    GetAggregateConformancePackComplianceSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateConformancePackComplianceSummaryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
