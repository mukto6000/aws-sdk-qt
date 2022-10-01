// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENRESPONSE_P_H
#define QTAWS_CREATETOKENRESPONSE_P_H

#include "ssooidcresponse_p.h"

namespace QtAws {
namespace SsoOidc {

class CreateTokenResponse;

class CreateTokenResponsePrivate : public SsoOidcResponsePrivate {

public:

    explicit CreateTokenResponsePrivate(CreateTokenResponse * const q);

    void parseCreateTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTokenResponse)
    Q_DISABLE_COPY(CreateTokenResponsePrivate)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
