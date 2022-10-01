// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSETTINGSRESPONSE_P_H
#define QTAWS_GETACCOUNTSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetAccountSettingsResponse;

class GetAccountSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetAccountSettingsResponsePrivate(GetAccountSettingsResponse * const q);

    void parseGetAccountSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountSettingsResponse)
    Q_DISABLE_COPY(GetAccountSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
