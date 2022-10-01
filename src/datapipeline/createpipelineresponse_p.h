// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPIPELINERESPONSE_P_H
#define QTAWS_CREATEPIPELINERESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class CreatePipelineResponse;

class CreatePipelineResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit CreatePipelineResponsePrivate(CreatePipelineResponse * const q);

    void parseCreatePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePipelineResponse)
    Q_DISABLE_COPY(CreatePipelineResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
