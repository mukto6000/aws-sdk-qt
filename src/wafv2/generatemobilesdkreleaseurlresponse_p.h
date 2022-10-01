// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMOBILESDKRELEASEURLRESPONSE_P_H
#define QTAWS_GENERATEMOBILESDKRELEASEURLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GenerateMobileSdkReleaseUrlResponse;

class GenerateMobileSdkReleaseUrlResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GenerateMobileSdkReleaseUrlResponsePrivate(GenerateMobileSdkReleaseUrlResponse * const q);

    void parseGenerateMobileSdkReleaseUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateMobileSdkReleaseUrlResponse)
    Q_DISABLE_COPY(GenerateMobileSdkReleaseUrlResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
