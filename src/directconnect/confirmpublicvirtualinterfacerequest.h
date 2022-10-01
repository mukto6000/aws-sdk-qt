// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPUBLICVIRTUALINTERFACEREQUEST_H
#define QTAWS_CONFIRMPUBLICVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPublicVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmPublicVirtualInterfaceRequest : public DirectConnectRequest {

public:
    ConfirmPublicVirtualInterfaceRequest(const ConfirmPublicVirtualInterfaceRequest &other);
    ConfirmPublicVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmPublicVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
