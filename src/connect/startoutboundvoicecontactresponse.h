// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOUTBOUNDVOICECONTACTRESPONSE_H
#define QTAWS_STARTOUTBOUNDVOICECONTACTRESPONSE_H

#include "connectresponse.h"
#include "startoutboundvoicecontactrequest.h"

namespace QtAws {
namespace Connect {

class StartOutboundVoiceContactResponsePrivate;

class QTAWSCONNECT_EXPORT StartOutboundVoiceContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    StartOutboundVoiceContactResponse(const StartOutboundVoiceContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartOutboundVoiceContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOutboundVoiceContactResponse)
    Q_DISABLE_COPY(StartOutboundVoiceContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
