// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONPOLICYRESPONSE_P_H
#define QTAWS_DELETERETENTIONPOLICYRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteRetentionPolicyResponse;

class DeleteRetentionPolicyResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DeleteRetentionPolicyResponsePrivate(DeleteRetentionPolicyResponse * const q);

    void parseDeleteRetentionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRetentionPolicyResponse)
    Q_DISABLE_COPY(DeleteRetentionPolicyResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
