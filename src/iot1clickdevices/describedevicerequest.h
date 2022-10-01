// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEREQUEST_H
#define QTAWS_DESCRIBEDEVICEREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class DescribeDeviceRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT DescribeDeviceRequest : public IoT1ClickDevicesRequest {

public:
    DescribeDeviceRequest(const DescribeDeviceRequest &other);
    DescribeDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
