// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLREQUEST_H
#define QTAWS_GETDEVICEPOOLREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetDevicePoolRequest : public DeviceFarmRequest {

public:
    GetDevicePoolRequest(const GetDevicePoolRequest &other);
    GetDevicePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePoolRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
