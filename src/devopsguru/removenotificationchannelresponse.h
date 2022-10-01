// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVENOTIFICATIONCHANNELRESPONSE_H
#define QTAWS_REMOVENOTIFICATIONCHANNELRESPONSE_H

#include "devopsgururesponse.h"
#include "removenotificationchannelrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class RemoveNotificationChannelResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT RemoveNotificationChannelResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    RemoveNotificationChannelResponse(const RemoveNotificationChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveNotificationChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveNotificationChannelResponse)
    Q_DISABLE_COPY(RemoveNotificationChannelResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
