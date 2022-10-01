// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONREQUEST_H
#define QTAWS_UPDATECONFIGURATIONREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class UpdateConfigurationRequestPrivate;

class QTAWSMQ_EXPORT UpdateConfigurationRequest : public MqRequest {

public:
    UpdateConfigurationRequest(const UpdateConfigurationRequest &other);
    UpdateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
