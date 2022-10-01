// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESECURITYKEYREQUEST_H
#define QTAWS_ASSOCIATESECURITYKEYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateSecurityKeyRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateSecurityKeyRequest : public ConnectRequest {

public:
    AssociateSecurityKeyRequest(const AssociateSecurityKeyRequest &other);
    AssociateSecurityKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSecurityKeyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
