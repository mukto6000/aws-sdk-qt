// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYDATERANGEKPIREQUEST_H
#define QTAWS_GETJOURNEYDATERANGEKPIREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyDateRangeKpiRequestPrivate;

class QTAWSPINPOINT_EXPORT GetJourneyDateRangeKpiRequest : public PinpointRequest {

public:
    GetJourneyDateRangeKpiRequest(const GetJourneyDateRangeKpiRequest &other);
    GetJourneyDateRangeKpiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyDateRangeKpiRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
