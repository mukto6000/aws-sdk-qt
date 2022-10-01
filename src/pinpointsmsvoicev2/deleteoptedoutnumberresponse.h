// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTEDOUTNUMBERRESPONSE_H
#define QTAWS_DELETEOPTEDOUTNUMBERRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deleteoptedoutnumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptedOutNumberResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteOptedOutNumberResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteOptedOutNumberResponse(const DeleteOptedOutNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOptedOutNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOptedOutNumberResponse)
    Q_DISABLE_COPY(DeleteOptedOutNumberResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
