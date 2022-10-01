// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTREQUEST_H
#define QTAWS_CREATEENDPOINTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEndpointRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateEndpointRequest : public SageMakerRequest {

public:
    CreateEndpointRequest(const CreateEndpointRequest &other);
    CreateEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
