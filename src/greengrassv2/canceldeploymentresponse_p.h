// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTRESPONSE_P_H
#define QTAWS_CANCELDEPLOYMENTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class CancelDeploymentResponse;

class CancelDeploymentResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit CancelDeploymentResponsePrivate(CancelDeploymentResponse * const q);

    void parseCancelDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelDeploymentResponse)
    Q_DISABLE_COPY(CancelDeploymentResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
