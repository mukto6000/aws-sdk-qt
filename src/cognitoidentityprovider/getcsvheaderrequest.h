// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCSVHEADERREQUEST_H
#define QTAWS_GETCSVHEADERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetCSVHeaderRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetCSVHeaderRequest : public CognitoIdentityProviderRequest {

public:
    GetCSVHeaderRequest(const GetCSVHeaderRequest &other);
    GetCSVHeaderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCSVHeaderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
