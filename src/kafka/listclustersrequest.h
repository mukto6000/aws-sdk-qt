// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSREQUEST_H
#define QTAWS_LISTCLUSTERSREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class ListClustersRequestPrivate;

class QTAWSKAFKA_EXPORT ListClustersRequest : public KafkaRequest {

public:
    ListClustersRequest(const ListClustersRequest &other);
    ListClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClustersRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
