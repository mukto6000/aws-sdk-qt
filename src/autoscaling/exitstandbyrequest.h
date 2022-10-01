// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXITSTANDBYREQUEST_H
#define QTAWS_EXITSTANDBYREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class ExitStandbyRequestPrivate;

class QTAWSAUTOSCALING_EXPORT ExitStandbyRequest : public AutoScalingRequest {

public:
    ExitStandbyRequest(const ExitStandbyRequest &other);
    ExitStandbyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExitStandbyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
