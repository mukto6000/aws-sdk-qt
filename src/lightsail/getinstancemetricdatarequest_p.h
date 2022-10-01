// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEMETRICDATAREQUEST_P_H
#define QTAWS_GETINSTANCEMETRICDATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstancemetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceMetricDataRequest;

class GetInstanceMetricDataRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstanceMetricDataRequestPrivate(const LightsailRequest::Action action,
                                   GetInstanceMetricDataRequest * const q);
    GetInstanceMetricDataRequestPrivate(const GetInstanceMetricDataRequestPrivate &other,
                                   GetInstanceMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
