// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTTASKSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describeexporttasksrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeExportTasksRequest;

class DescribeExportTasksRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeExportTasksRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeExportTasksRequest * const q);
    DescribeExportTasksRequestPrivate(const DescribeExportTasksRequestPrivate &other,
                                   DescribeExportTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportTasksRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
