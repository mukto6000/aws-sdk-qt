// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUPPRESSEDDESTINATIONRESPONSE_P_H
#define QTAWS_PUTSUPPRESSEDDESTINATIONRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutSuppressedDestinationResponse;

class PutSuppressedDestinationResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutSuppressedDestinationResponsePrivate(PutSuppressedDestinationResponse * const q);

    void parsePutSuppressedDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSuppressedDestinationResponse)
    Q_DISABLE_COPY(PutSuppressedDestinationResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
