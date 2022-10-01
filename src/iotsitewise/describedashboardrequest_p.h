// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDREQUEST_P_H
#define QTAWS_DESCRIBEDASHBOARDREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describedashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDashboardRequest;

class DescribeDashboardRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeDashboardRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeDashboardRequest * const q);
    DescribeDashboardRequestPrivate(const DescribeDashboardRequestPrivate &other,
                                   DescribeDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
