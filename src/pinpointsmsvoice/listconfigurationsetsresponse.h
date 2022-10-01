// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSRESPONSE_H
#define QTAWS_LISTCONFIGURATIONSETSRESPONSE_H

#include "pinpointsmsvoiceresponse.h"
#include "listconfigurationsetsrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class ListConfigurationSetsResponsePrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT ListConfigurationSetsResponse : public PinpointSmsVoiceResponse {
    Q_OBJECT

public:
    ListConfigurationSetsResponse(const ListConfigurationSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigurationSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationSetsResponse)
    Q_DISABLE_COPY(ListConfigurationSetsResponse)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
