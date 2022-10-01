// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERPASSWORDREQUEST_H
#define QTAWS_ADMINSETUSERPASSWORDREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserPasswordRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminSetUserPasswordRequest : public CognitoIdentityProviderRequest {

public:
    AdminSetUserPasswordRequest(const AdminSetUserPasswordRequest &other);
    AdminSetUserPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminSetUserPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
