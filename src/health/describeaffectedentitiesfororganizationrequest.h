// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONREQUEST_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeAffectedEntitiesForOrganizationRequest : public HealthRequest {

public:
    DescribeAffectedEntitiesForOrganizationRequest(const DescribeAffectedEntitiesForOrganizationRequest &other);
    DescribeAffectedEntitiesForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAffectedEntitiesForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
