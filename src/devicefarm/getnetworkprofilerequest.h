// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKPROFILEREQUEST_H
#define QTAWS_GETNETWORKPROFILEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetNetworkProfileRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetNetworkProfileRequest : public DeviceFarmRequest {

public:
    GetNetworkProfileRequest(const GetNetworkProfileRequest &other);
    GetNetworkProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
