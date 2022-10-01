// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMATTRIBUTESREQUEST_H
#define QTAWS_ADDCUSTOMATTRIBUTESREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AddCustomAttributesRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AddCustomAttributesRequest : public CognitoIdentityProviderRequest {

public:
    AddCustomAttributesRequest(const AddCustomAttributesRequest &other);
    AddCustomAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCustomAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
