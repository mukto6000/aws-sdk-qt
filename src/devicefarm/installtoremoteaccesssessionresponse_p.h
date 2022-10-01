// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSTALLTOREMOTEACCESSSESSIONRESPONSE_P_H
#define QTAWS_INSTALLTOREMOTEACCESSSESSIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class InstallToRemoteAccessSessionResponse;

class InstallToRemoteAccessSessionResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit InstallToRemoteAccessSessionResponsePrivate(InstallToRemoteAccessSessionResponse * const q);

    void parseInstallToRemoteAccessSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InstallToRemoteAccessSessionResponse)
    Q_DISABLE_COPY(InstallToRemoteAccessSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
