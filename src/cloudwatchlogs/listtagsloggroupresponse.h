// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSLOGGROUPRESPONSE_H
#define QTAWS_LISTTAGSLOGGROUPRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "listtagsloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class ListTagsLogGroupResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT ListTagsLogGroupResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    ListTagsLogGroupResponse(const ListTagsLogGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsLogGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsLogGroupResponse)
    Q_DISABLE_COPY(ListTagsLogGroupResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
