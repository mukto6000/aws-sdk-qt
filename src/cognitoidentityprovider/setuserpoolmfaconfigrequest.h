// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERPOOLMFACONFIGREQUEST_H
#define QTAWS_SETUSERPOOLMFACONFIGREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserPoolMfaConfigRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUserPoolMfaConfigRequest : public CognitoIdentityProviderRequest {

public:
    SetUserPoolMfaConfigRequest(const SetUserPoolMfaConfigRequest &other);
    SetUserPoolMfaConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUserPoolMfaConfigRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
