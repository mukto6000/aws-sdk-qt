// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSCHEDULEREQUEST_H
#define QTAWS_DELETEMONITORINGSCHEDULEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteMonitoringScheduleRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteMonitoringScheduleRequest : public SageMakerRequest {

public:
    DeleteMonitoringScheduleRequest(const DeleteMonitoringScheduleRequest &other);
    DeleteMonitoringScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
