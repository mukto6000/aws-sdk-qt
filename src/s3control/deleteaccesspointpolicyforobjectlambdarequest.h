// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_H
#define QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyForObjectLambdaRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointPolicyForObjectLambdaRequest : public S3ControlRequest {

public:
    DeleteAccessPointPolicyForObjectLambdaRequest(const DeleteAccessPointPolicyForObjectLambdaRequest &other);
    DeleteAccessPointPolicyForObjectLambdaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointPolicyForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
