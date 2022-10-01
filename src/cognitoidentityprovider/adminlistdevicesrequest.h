// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTDEVICESREQUEST_H
#define QTAWS_ADMINLISTDEVICESREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListDevicesRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminListDevicesRequest : public CognitoIdentityProviderRequest {

public:
    AdminListDevicesRequest(const AdminListDevicesRequest &other);
    AdminListDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminListDevicesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
