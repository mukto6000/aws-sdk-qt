// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORSRESPONSE_H
#define QTAWS_LISTCONNECTORSRESPONSE_H

#include "kafkaconnectresponse.h"
#include "listconnectorsrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListConnectorsResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT ListConnectorsResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    ListConnectorsResponse(const ListConnectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConnectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorsResponse)
    Q_DISABLE_COPY(ListConnectorsResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
