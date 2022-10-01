// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTMODERATIONRESPONSE_P_H
#define QTAWS_STARTCONTENTMODERATIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartContentModerationResponse;

class StartContentModerationResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartContentModerationResponsePrivate(StartContentModerationResponse * const q);

    void parseStartContentModerationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartContentModerationResponse)
    Q_DISABLE_COPY(StartContentModerationResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
