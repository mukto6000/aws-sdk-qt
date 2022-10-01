// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERSERVICERESPONSE_P_H
#define QTAWS_UPDATECONTAINERSERVICERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateContainerServiceResponse;

class UpdateContainerServiceResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateContainerServiceResponsePrivate(UpdateContainerServiceResponse * const q);

    void parseUpdateContainerServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContainerServiceResponse)
    Q_DISABLE_COPY(UpdateContainerServiceResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
