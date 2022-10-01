// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONPOLICYREQUEST_H
#define QTAWS_PUTRETENTIONPOLICYREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutRetentionPolicyRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutRetentionPolicyRequest : public CloudWatchLogsRequest {

public:
    PutRetentionPolicyRequest(const PutRetentionPolicyRequest &other);
    PutRetentionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRetentionPolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
