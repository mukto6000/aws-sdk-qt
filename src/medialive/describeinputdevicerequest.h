// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICEREQUEST_H
#define QTAWS_DESCRIBEINPUTDEVICEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputDeviceRequest : public MediaLiveRequest {

public:
    DescribeInputDeviceRequest(const DescribeInputDeviceRequest &other);
    DescribeInputDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
