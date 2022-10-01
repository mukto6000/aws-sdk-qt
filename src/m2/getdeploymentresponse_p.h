// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class GetDeploymentResponse;

class GetDeploymentResponsePrivate : public M2ResponsePrivate {

public:

    explicit GetDeploymentResponsePrivate(GetDeploymentResponse * const q);

    void parseGetDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentResponse)
    Q_DISABLE_COPY(GetDeploymentResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
