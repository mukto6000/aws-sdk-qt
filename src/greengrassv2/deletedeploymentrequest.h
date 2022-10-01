// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTREQUEST_H
#define QTAWS_DELETEDEPLOYMENTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteDeploymentRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT DeleteDeploymentRequest : public GreengrassV2Request {

public:
    DeleteDeploymentRequest(const DeleteDeploymentRequest &other);
    DeleteDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
