// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTBROKERRESPONSE_H
#define QTAWS_REBOOTBROKERRESPONSE_H

#include "kafkaresponse.h"
#include "rebootbrokerrequest.h"

namespace QtAws {
namespace Kafka {

class RebootBrokerResponsePrivate;

class QTAWSKAFKA_EXPORT RebootBrokerResponse : public KafkaResponse {
    Q_OBJECT

public:
    RebootBrokerResponse(const RebootBrokerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootBrokerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootBrokerResponse)
    Q_DISABLE_COPY(RebootBrokerResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
