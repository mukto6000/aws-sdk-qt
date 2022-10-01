// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERCOUNTRESPONSE_P_H
#define QTAWS_UPDATEBROKERCOUNTRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerCountResponse;

class UpdateBrokerCountResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateBrokerCountResponsePrivate(UpdateBrokerCountResponse * const q);

    void parseUpdateBrokerCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerCountResponse)
    Q_DISABLE_COPY(UpdateBrokerCountResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
