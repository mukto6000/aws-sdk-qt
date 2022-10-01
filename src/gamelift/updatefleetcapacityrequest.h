// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETCAPACITYREQUEST_H
#define QTAWS_UPDATEFLEETCAPACITYREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetCapacityRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateFleetCapacityRequest : public GameLiftRequest {

public:
    UpdateFleetCapacityRequest(const UpdateFleetCapacityRequest &other);
    UpdateFleetCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetCapacityRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
