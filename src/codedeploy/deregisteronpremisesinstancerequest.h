// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERONPREMISESINSTANCEREQUEST_H
#define QTAWS_DEREGISTERONPREMISESINSTANCEREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeregisterOnPremisesInstanceRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT DeregisterOnPremisesInstanceRequest : public CodeDeployRequest {

public:
    DeregisterOnPremisesInstanceRequest(const DeregisterOnPremisesInstanceRequest &other);
    DeregisterOnPremisesInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
