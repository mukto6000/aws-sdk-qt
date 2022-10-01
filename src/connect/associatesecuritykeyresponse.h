// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESECURITYKEYRESPONSE_H
#define QTAWS_ASSOCIATESECURITYKEYRESPONSE_H

#include "connectresponse.h"
#include "associatesecuritykeyrequest.h"

namespace QtAws {
namespace Connect {

class AssociateSecurityKeyResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateSecurityKeyResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateSecurityKeyResponse(const AssociateSecurityKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSecurityKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSecurityKeyResponse)
    Q_DISABLE_COPY(AssociateSecurityKeyResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
