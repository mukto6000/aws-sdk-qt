// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTCONFIGREQUEST_H
#define QTAWS_DELETEENDPOINTCONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEndpointConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteEndpointConfigRequest : public SageMakerRequest {

public:
    DeleteEndpointConfigRequest(const DeleteEndpointConfigRequest &other);
    DeleteEndpointConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
