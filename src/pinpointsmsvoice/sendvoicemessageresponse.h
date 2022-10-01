// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDVOICEMESSAGERESPONSE_H
#define QTAWS_SENDVOICEMESSAGERESPONSE_H

#include "pinpointsmsvoiceresponse.h"
#include "sendvoicemessagerequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class SendVoiceMessageResponsePrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT SendVoiceMessageResponse : public PinpointSmsVoiceResponse {
    Q_OBJECT

public:
    SendVoiceMessageResponse(const SendVoiceMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendVoiceMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendVoiceMessageResponse)
    Q_DISABLE_COPY(SendVoiceMessageResponse)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
