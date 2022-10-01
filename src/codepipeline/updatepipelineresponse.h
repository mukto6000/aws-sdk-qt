// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINERESPONSE_H
#define QTAWS_UPDATEPIPELINERESPONSE_H

#include "codepipelineresponse.h"
#include "updatepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class UpdatePipelineResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT UpdatePipelineResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    UpdatePipelineResponse(const UpdatePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineResponse)
    Q_DISABLE_COPY(UpdatePipelineResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
