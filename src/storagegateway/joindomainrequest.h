// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_JOINDOMAINREQUEST_H
#define QTAWS_JOINDOMAINREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class JoinDomainRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT JoinDomainRequest : public StorageGatewayRequest {

public:
    JoinDomainRequest(const JoinDomainRequest &other);
    JoinDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(JoinDomainRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
