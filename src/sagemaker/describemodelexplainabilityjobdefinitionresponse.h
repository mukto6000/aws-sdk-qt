// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describemodelexplainabilityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelExplainabilityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelExplainabilityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeModelExplainabilityJobDefinitionResponse(const DescribeModelExplainabilityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelExplainabilityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelExplainabilityJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeModelExplainabilityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
