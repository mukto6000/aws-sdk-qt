// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCHECKLAYERAVAILABILITYRESPONSE_P_H
#define QTAWS_BATCHCHECKLAYERAVAILABILITYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class BatchCheckLayerAvailabilityResponse;

class BatchCheckLayerAvailabilityResponsePrivate : public EcrResponsePrivate {

public:

    explicit BatchCheckLayerAvailabilityResponsePrivate(BatchCheckLayerAvailabilityResponse * const q);

    void parseBatchCheckLayerAvailabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCheckLayerAvailabilityResponse)
    Q_DISABLE_COPY(BatchCheckLayerAvailabilityResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
