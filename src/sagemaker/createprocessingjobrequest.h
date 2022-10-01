// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROCESSINGJOBREQUEST_H
#define QTAWS_CREATEPROCESSINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateProcessingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateProcessingJobRequest : public SageMakerRequest {

public:
    CreateProcessingJobRequest(const CreateProcessingJobRequest &other);
    CreateProcessingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProcessingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
