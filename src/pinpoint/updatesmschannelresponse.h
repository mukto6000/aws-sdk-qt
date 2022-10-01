// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSCHANNELRESPONSE_H
#define QTAWS_UPDATESMSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updatesmschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateSmsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateSmsChannelResponse(const UpdateSmsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSmsChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSmsChannelResponse)
    Q_DISABLE_COPY(UpdateSmsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
