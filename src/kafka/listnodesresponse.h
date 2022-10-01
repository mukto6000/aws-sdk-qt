// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODESRESPONSE_H
#define QTAWS_LISTNODESRESPONSE_H

#include "kafkaresponse.h"
#include "listnodesrequest.h"

namespace QtAws {
namespace Kafka {

class ListNodesResponsePrivate;

class QTAWSKAFKA_EXPORT ListNodesResponse : public KafkaResponse {
    Q_OBJECT

public:
    ListNodesResponse(const ListNodesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNodesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNodesResponse)
    Q_DISABLE_COPY(ListNodesResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
