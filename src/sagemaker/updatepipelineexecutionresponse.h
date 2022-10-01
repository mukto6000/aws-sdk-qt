// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_UPDATEPIPELINEEXECUTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "updatepipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdatePipelineExecutionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdatePipelineExecutionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdatePipelineExecutionResponse(const UpdatePipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineExecutionResponse)
    Q_DISABLE_COPY(UpdatePipelineExecutionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
