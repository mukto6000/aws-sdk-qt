// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUICUSTOMIZATIONREQUEST_H
#define QTAWS_SETUICUSTOMIZATIONREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUICustomizationRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUICustomizationRequest : public CognitoIdentityProviderRequest {

public:
    SetUICustomizationRequest(const SetUICustomizationRequest &other);
    SetUICustomizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUICustomizationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
