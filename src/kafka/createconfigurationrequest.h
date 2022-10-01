// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONREQUEST_H
#define QTAWS_CREATECONFIGURATIONREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class CreateConfigurationRequestPrivate;

class QTAWSKAFKA_EXPORT CreateConfigurationRequest : public KafkaRequest {

public:
    CreateConfigurationRequest(const CreateConfigurationRequest &other);
    CreateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
