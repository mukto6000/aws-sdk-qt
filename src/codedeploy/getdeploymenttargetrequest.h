// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTTARGETREQUEST_H
#define QTAWS_GETDEPLOYMENTTARGETREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentTargetRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentTargetRequest : public CodeDeployRequest {

public:
    GetDeploymentTargetRequest(const GetDeploymentTargetRequest &other);
    GetDeploymentTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentTargetRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
