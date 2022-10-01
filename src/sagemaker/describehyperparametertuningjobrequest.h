// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBREQUEST_H
#define QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeHyperParameterTuningJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeHyperParameterTuningJobRequest : public SageMakerRequest {

public:
    DescribeHyperParameterTuningJobRequest(const DescribeHyperParameterTuningJobRequest &other);
    DescribeHyperParameterTuningJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
