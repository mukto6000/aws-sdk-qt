// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALINTERFACEREQUEST_H
#define QTAWS_DELETEVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteVirtualInterfaceRequest : public DirectConnectRequest {

public:
    DeleteVirtualInterfaceRequest(const DeleteVirtualInterfaceRequest &other);
    DeleteVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
