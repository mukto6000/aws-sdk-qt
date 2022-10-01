// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMPLUGINRESPONSE_P_H
#define QTAWS_CREATECUSTOMPLUGINRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class CreateCustomPluginResponse;

class CreateCustomPluginResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit CreateCustomPluginResponsePrivate(CreateCustomPluginResponse * const q);

    void parseCreateCustomPluginResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomPluginResponse)
    Q_DISABLE_COPY(CreateCustomPluginResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
