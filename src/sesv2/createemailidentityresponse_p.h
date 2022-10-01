// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYRESPONSE_P_H
#define QTAWS_CREATEEMAILIDENTITYRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityResponse;

class CreateEmailIdentityResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateEmailIdentityResponsePrivate(CreateEmailIdentityResponse * const q);

    void parseCreateEmailIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEmailIdentityResponse)
    Q_DISABLE_COPY(CreateEmailIdentityResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
