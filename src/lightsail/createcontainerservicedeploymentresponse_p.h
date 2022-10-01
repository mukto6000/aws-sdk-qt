// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEDEPLOYMENTRESPONSE_P_H
#define QTAWS_CREATECONTAINERSERVICEDEPLOYMENTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceDeploymentResponse;

class CreateContainerServiceDeploymentResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateContainerServiceDeploymentResponsePrivate(CreateContainerServiceDeploymentResponse * const q);

    void parseCreateContainerServiceDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContainerServiceDeploymentResponse)
    Q_DISABLE_COPY(CreateContainerServiceDeploymentResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
