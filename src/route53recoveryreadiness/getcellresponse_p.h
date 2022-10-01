// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLRESPONSE_P_H
#define QTAWS_GETCELLRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellResponse;

class GetCellResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetCellResponsePrivate(GetCellResponse * const q);

    void parseGetCellResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCellResponse)
    Q_DISABLE_COPY(GetCellResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
