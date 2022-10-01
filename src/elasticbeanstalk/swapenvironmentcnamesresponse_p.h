// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWAPENVIRONMENTCNAMESRESPONSE_P_H
#define QTAWS_SWAPENVIRONMENTCNAMESRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class SwapEnvironmentCNAMEsResponse;

class SwapEnvironmentCNAMEsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit SwapEnvironmentCNAMEsResponsePrivate(SwapEnvironmentCNAMEsResponse * const q);

    void parseSwapEnvironmentCNAMEsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SwapEnvironmentCNAMEsResponse)
    Q_DISABLE_COPY(SwapEnvironmentCNAMEsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
