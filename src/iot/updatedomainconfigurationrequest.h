// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEDOMAINCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDomainConfigurationRequestPrivate;

class QTAWSIOT_EXPORT UpdateDomainConfigurationRequest : public IoTRequest {

public:
    UpdateDomainConfigurationRequest(const UpdateDomainConfigurationRequest &other);
    UpdateDomainConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
