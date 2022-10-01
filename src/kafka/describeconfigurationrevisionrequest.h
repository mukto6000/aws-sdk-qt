// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREVISIONREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONREVISIONREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class DescribeConfigurationRevisionRequestPrivate;

class QTAWSKAFKA_EXPORT DescribeConfigurationRevisionRequest : public KafkaRequest {

public:
    DescribeConfigurationRevisionRequest(const DescribeConfigurationRevisionRequest &other);
    DescribeConfigurationRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRevisionRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
