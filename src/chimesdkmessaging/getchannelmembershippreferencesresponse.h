// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMEMBERSHIPPREFERENCESRESPONSE_H
#define QTAWS_GETCHANNELMEMBERSHIPPREFERENCESRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "getchannelmembershippreferencesrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMembershipPreferencesResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT GetChannelMembershipPreferencesResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    GetChannelMembershipPreferencesResponse(const GetChannelMembershipPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelMembershipPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMembershipPreferencesResponse)
    Q_DISABLE_COPY(GetChannelMembershipPreferencesResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
