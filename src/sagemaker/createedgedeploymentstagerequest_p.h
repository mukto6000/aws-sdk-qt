// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTSTAGEREQUEST_P_H
#define QTAWS_CREATEEDGEDEPLOYMENTSTAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentStageRequest;

class CreateEdgeDeploymentStageRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateEdgeDeploymentStageRequestPrivate(const SageMakerRequest::Action action,
                                   CreateEdgeDeploymentStageRequest * const q);
    CreateEdgeDeploymentStageRequestPrivate(const CreateEdgeDeploymentStageRequestPrivate &other,
                                   CreateEdgeDeploymentStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
