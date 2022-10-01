// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONSTATERESPONSE_H
#define QTAWS_GETSUBSCRIPTIONSTATERESPONSE_H

#include "shieldresponse.h"
#include "getsubscriptionstaterequest.h"

namespace QtAws {
namespace Shield {

class GetSubscriptionStateResponsePrivate;

class QTAWSSHIELD_EXPORT GetSubscriptionStateResponse : public ShieldResponse {
    Q_OBJECT

public:
    GetSubscriptionStateResponse(const GetSubscriptionStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubscriptionStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionStateResponse)
    Q_DISABLE_COPY(GetSubscriptionStateResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
