// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEETINGTRANSCRIPTIONRESPONSE_P_H
#define QTAWS_STARTMEETINGTRANSCRIPTIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class StartMeetingTranscriptionResponse;

class StartMeetingTranscriptionResponsePrivate : public ChimeResponsePrivate {

public:

    explicit StartMeetingTranscriptionResponsePrivate(StartMeetingTranscriptionResponse * const q);

    void parseStartMeetingTranscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StartMeetingTranscriptionResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
