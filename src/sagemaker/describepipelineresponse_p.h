// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINERESPONSE_P_H
#define QTAWS_DESCRIBEPIPELINERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineResponse;

class DescribePipelineResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribePipelineResponsePrivate(DescribePipelineResponse * const q);

    void parseDescribePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePipelineResponse)
    Q_DISABLE_COPY(DescribePipelineResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
