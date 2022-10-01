// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDSREQUEST_H
#define QTAWS_LISTDASHBOARDSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListDashboardsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT ListDashboardsRequest : public CloudWatchRequest {

public:
    ListDashboardsRequest(const ListDashboardsRequest &other);
    ListDashboardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDashboardsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
