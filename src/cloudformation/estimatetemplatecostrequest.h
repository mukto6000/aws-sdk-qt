// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ESTIMATETEMPLATECOSTREQUEST_H
#define QTAWS_ESTIMATETEMPLATECOSTREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class EstimateTemplateCostRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT EstimateTemplateCostRequest : public CloudFormationRequest {

public:
    EstimateTemplateCostRequest(const EstimateTemplateCostRequest &other);
    EstimateTemplateCostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EstimateTemplateCostRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
