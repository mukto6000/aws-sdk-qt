// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERSETTINGSRESPONSE_P_H
#define QTAWS_GETUSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetUserSettingsResponse;

class GetUserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetUserSettingsResponsePrivate(GetUserSettingsResponse * const q);

    void parseGetUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserSettingsResponse)
    Q_DISABLE_COPY(GetUserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
