// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGCONTROLSRESPONSE_H
#define QTAWS_LISTROUTINGCONTROLSRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "listroutingcontrolsrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListRoutingControlsResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListRoutingControlsResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    ListRoutingControlsResponse(const ListRoutingControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoutingControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutingControlsResponse)
    Q_DISABLE_COPY(ListRoutingControlsResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
