// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTGROUPRESPONSE_P_H
#define QTAWS_CREATEDEPLOYMENTGROUPRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentGroupResponse;

class CreateDeploymentGroupResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit CreateDeploymentGroupResponsePrivate(CreateDeploymentGroupResponse * const q);

    void parseCreateDeploymentGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentGroupResponse)
    Q_DISABLE_COPY(CreateDeploymentGroupResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
