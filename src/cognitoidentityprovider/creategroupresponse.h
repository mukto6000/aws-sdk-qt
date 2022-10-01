// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPRESPONSE_H
#define QTAWS_CREATEGROUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "creategrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateGroupResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateGroupResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    CreateGroupResponse(const CreateGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupResponse)
    Q_DISABLE_COPY(CreateGroupResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
