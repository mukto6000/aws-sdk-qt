// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONREQUEST_H
#define QTAWS_DELETELAUNCHCONFIGURATIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteLaunchConfigurationRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DeleteLaunchConfigurationRequest : public AutoScalingRequest {

public:
    DeleteLaunchConfigurationRequest(const DeleteLaunchConfigurationRequest &other);
    DeleteLaunchConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
