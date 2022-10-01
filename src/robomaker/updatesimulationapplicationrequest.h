// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIMULATIONAPPLICATIONREQUEST_H
#define QTAWS_UPDATESIMULATIONAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateSimulationApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT UpdateSimulationApplicationRequest : public RoboMakerRequest {

public:
    UpdateSimulationApplicationRequest(const UpdateSimulationApplicationRequest &other);
    UpdateSimulationApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
