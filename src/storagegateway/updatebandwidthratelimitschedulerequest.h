// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULEREQUEST_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitScheduleRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateBandwidthRateLimitScheduleRequest : public StorageGatewayRequest {

public:
    UpdateBandwidthRateLimitScheduleRequest(const UpdateBandwidthRateLimitScheduleRequest &other);
    UpdateBandwidthRateLimitScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBandwidthRateLimitScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
