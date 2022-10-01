// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADVERTISEBYOIPCIDRREQUEST_H
#define QTAWS_ADVERTISEBYOIPCIDRREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AdvertiseByoipCidrRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT AdvertiseByoipCidrRequest : public GlobalAcceleratorRequest {

public:
    AdvertiseByoipCidrRequest(const AdvertiseByoipCidrRequest &other);
    AdvertiseByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdvertiseByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
