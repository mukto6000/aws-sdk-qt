// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTCONFIGURATIONREQUEST_H
#define QTAWS_UPDATECOMPONENTCONFIGURATIONREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateComponentConfigurationRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT UpdateComponentConfigurationRequest : public ApplicationInsightsRequest {

public:
    UpdateComponentConfigurationRequest(const UpdateComponentConfigurationRequest &other);
    UpdateComponentConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentConfigurationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
