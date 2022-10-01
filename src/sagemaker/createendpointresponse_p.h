// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTRESPONSE_P_H
#define QTAWS_CREATEENDPOINTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateEndpointResponse;

class CreateEndpointResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateEndpointResponsePrivate(CreateEndpointResponse * const q);

    void parseCreateEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEndpointResponse)
    Q_DISABLE_COPY(CreateEndpointResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
