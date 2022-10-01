// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHLOGSRESPONSE_H
#define QTAWS_CLOUDWATCHLOGSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudwatchlogsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CloudWatchLogsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudWatchLogsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudWatchLogsResponse(CloudWatchLogsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudWatchLogsResponse)
    Q_DISABLE_COPY(CloudWatchLogsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
