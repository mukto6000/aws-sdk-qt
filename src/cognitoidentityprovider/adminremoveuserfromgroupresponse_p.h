// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINREMOVEUSERFROMGROUPRESPONSE_P_H
#define QTAWS_ADMINREMOVEUSERFROMGROUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRemoveUserFromGroupResponse;

class AdminRemoveUserFromGroupResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminRemoveUserFromGroupResponsePrivate(AdminRemoveUserFromGroupResponse * const q);

    void parseAdminRemoveUserFromGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminRemoveUserFromGroupResponse)
    Q_DISABLE_COPY(AdminRemoveUserFromGroupResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
