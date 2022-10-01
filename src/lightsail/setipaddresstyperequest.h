// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPEREQUEST_H
#define QTAWS_SETIPADDRESSTYPEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class SetIpAddressTypeRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT SetIpAddressTypeRequest : public LightsailRequest {

public:
    SetIpAddressTypeRequest(const SetIpAddressTypeRequest &other);
    SetIpAddressTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIpAddressTypeRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
