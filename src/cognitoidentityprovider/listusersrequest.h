// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSREQUEST_H
#define QTAWS_LISTUSERSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUsersRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUsersRequest : public CognitoIdentityProviderRequest {

public:
    ListUsersRequest(const ListUsersRequest &other);
    ListUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
