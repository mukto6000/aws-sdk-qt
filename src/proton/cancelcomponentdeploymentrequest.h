// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMPONENTDEPLOYMENTREQUEST_H
#define QTAWS_CANCELCOMPONENTDEPLOYMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CancelComponentDeploymentRequestPrivate;

class QTAWSPROTON_EXPORT CancelComponentDeploymentRequest : public ProtonRequest {

public:
    CancelComponentDeploymentRequest(const CancelComponentDeploymentRequest &other);
    CancelComponentDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelComponentDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
