// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPROFILEREQUEST_H
#define QTAWS_GETDEVICEPROFILEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetDeviceProfileRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetDeviceProfileRequest : public IoTWirelessRequest {

public:
    GetDeviceProfileRequest(const GetDeviceProfileRequest &other);
    GetDeviceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
