// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNCLAIMDEVICEREQUEST_H
#define QTAWS_UNCLAIMDEVICEREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UnclaimDeviceRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT UnclaimDeviceRequest : public IoT1ClickDevicesRequest {

public:
    UnclaimDeviceRequest(const UnclaimDeviceRequest &other);
    UnclaimDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnclaimDeviceRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
