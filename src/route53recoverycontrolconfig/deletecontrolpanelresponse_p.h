// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLPANELRESPONSE_P_H
#define QTAWS_DELETECONTROLPANELRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteControlPanelResponse;

class DeleteControlPanelResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DeleteControlPanelResponsePrivate(DeleteControlPanelResponse * const q);

    void parseDeleteControlPanelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteControlPanelResponse)
    Q_DISABLE_COPY(DeleteControlPanelResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
