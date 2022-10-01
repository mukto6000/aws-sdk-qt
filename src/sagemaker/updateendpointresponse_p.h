// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTRESPONSE_P_H
#define QTAWS_UPDATEENDPOINTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointResponse;

class UpdateEndpointResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateEndpointResponsePrivate(UpdateEndpointResponse * const q);

    void parseUpdateEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointResponse)
    Q_DISABLE_COPY(UpdateEndpointResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
