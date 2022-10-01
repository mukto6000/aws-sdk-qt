// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINBOUNDDMARCSETTINGSRESPONSE_P_H
#define QTAWS_PUTINBOUNDDMARCSETTINGSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class PutInboundDmarcSettingsResponse;

class PutInboundDmarcSettingsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit PutInboundDmarcSettingsResponsePrivate(PutInboundDmarcSettingsResponse * const q);

    void parsePutInboundDmarcSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInboundDmarcSettingsResponse)
    Q_DISABLE_COPY(PutInboundDmarcSettingsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
