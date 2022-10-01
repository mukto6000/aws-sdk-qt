// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTHINGREGISTRATIONTASKREQUEST_H
#define QTAWS_STARTTHINGREGISTRATIONTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class StartThingRegistrationTaskRequestPrivate;

class QTAWSIOT_EXPORT StartThingRegistrationTaskRequest : public IoTRequest {

public:
    StartThingRegistrationTaskRequest(const StartThingRegistrationTaskRequest &other);
    StartThingRegistrationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartThingRegistrationTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
