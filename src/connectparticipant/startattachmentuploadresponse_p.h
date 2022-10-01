// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTATTACHMENTUPLOADRESPONSE_P_H
#define QTAWS_STARTATTACHMENTUPLOADRESPONSE_P_H

#include "connectparticipantresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class StartAttachmentUploadResponse;

class StartAttachmentUploadResponsePrivate : public ConnectParticipantResponsePrivate {

public:

    explicit StartAttachmentUploadResponsePrivate(StartAttachmentUploadResponse * const q);

    void parseStartAttachmentUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAttachmentUploadResponse)
    Q_DISABLE_COPY(StartAttachmentUploadResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
