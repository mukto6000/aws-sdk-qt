// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONRESPONSE_H
#define QTAWS_UPDATECONNECTIONRESPONSE_H

#include "eventbridgeresponse.h"
#include "updateconnectionrequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateConnectionResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT UpdateConnectionResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    UpdateConnectionResponse(const UpdateConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectionResponse)
    Q_DISABLE_COPY(UpdateConnectionResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
