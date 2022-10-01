// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_H
#define QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScheduledActionsRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DescribeScheduledActionsRequest : public ApplicationAutoScalingRequest {

public:
    DescribeScheduledActionsRequest(const DescribeScheduledActionsRequest &other);
    DescribeScheduledActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledActionsRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
