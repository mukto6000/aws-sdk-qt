// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTSRESPONSE_P_H

#include "sagemakeredgeresponse_p.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeploymentsResponse;

class GetDeploymentsResponsePrivate : public SagemakerEdgeResponsePrivate {

public:

    explicit GetDeploymentsResponsePrivate(GetDeploymentsResponse * const q);

    void parseGetDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentsResponse)
    Q_DISABLE_COPY(GetDeploymentsResponsePrivate)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
