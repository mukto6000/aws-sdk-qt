// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWDEVICEMANAGEMENTCLIENT_P_H
#define QTAWS_SNOWDEVICEMANAGEMENTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementClient;

class SnowDeviceManagementClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SnowDeviceManagementClientPrivate(SnowDeviceManagementClient * const q);

private:
    Q_DECLARE_PUBLIC(SnowDeviceManagementClient)
    Q_DISABLE_COPY(SnowDeviceManagementClientPrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
