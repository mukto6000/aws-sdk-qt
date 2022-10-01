// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONREQUEST_H
#define QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class UpdateApplicationMaintenanceConfigurationRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT UpdateApplicationMaintenanceConfigurationRequest : public KinesisAnalyticsV2Request {

public:
    UpdateApplicationMaintenanceConfigurationRequest(const UpdateApplicationMaintenanceConfigurationRequest &other);
    UpdateApplicationMaintenanceConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationMaintenanceConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
