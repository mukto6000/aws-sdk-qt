// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDSRESPONSE_H
#define QTAWS_LISTDASHBOARDSRESPONSE_H

#include "cloudwatchresponse.h"
#include "listdashboardsrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListDashboardsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT ListDashboardsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    ListDashboardsResponse(const ListDashboardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDashboardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDashboardsResponse)
    Q_DISABLE_COPY(ListDashboardsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
