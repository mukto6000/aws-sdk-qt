// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTSTRATEGYREQUEST_H
#define QTAWS_DELETEDEPLOYMENTSTRATEGYREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteDeploymentStrategyRequestPrivate;

class QTAWSAPPCONFIG_EXPORT DeleteDeploymentStrategyRequest : public AppConfigRequest {

public:
    DeleteDeploymentStrategyRequest(const DeleteDeploymentStrategyRequest &other);
    DeleteDeploymentStrategyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
