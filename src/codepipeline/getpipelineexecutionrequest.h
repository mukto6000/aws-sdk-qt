// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEEXECUTIONREQUEST_H
#define QTAWS_GETPIPELINEEXECUTIONREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineExecutionRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT GetPipelineExecutionRequest : public CodePipelineRequest {

public:
    GetPipelineExecutionRequest(const GetPipelineExecutionRequest &other);
    GetPipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
