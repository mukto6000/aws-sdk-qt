// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEINSIGHTRULESREQUEST_H
#define QTAWS_ENABLEINSIGHTRULESREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class EnableInsightRulesRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT EnableInsightRulesRequest : public CloudWatchRequest {

public:
    EnableInsightRulesRequest(const EnableInsightRulesRequest &other);
    EnableInsightRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
